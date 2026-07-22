#pragma once
#include <iostream>
#include <string>
using namespace System;
using namespace System::IO;
using namespace System::Text;

class DatabaseOperations {
public:

    void Insert(String^ filename, String^ rows)
    {
        if (File::Exists(filename) == true)
        {
            File::AppendAllText(filename, "\n" + rows);
        }
        else
        {
            File::AppendAllText(filename, rows);

        }

    }

    array<String^>^ Read(String^ filename)
    {

        String^ bytes = File::ReadAllText(filename);
        array<String^>^ lines = bytes->Split('\n');

        return lines;
    }
    array<String^>^ Search(String^ filename, String^ search, int column)
    {

        String^ bytes = File::ReadAllText(filename);
        array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            array<String^>^ var = lines[i]->Split(',');
            if (var->Length > 1)
            {
                if (var[column] == search)
                {
                    temp += lines[i] + "#";
                }
            }
        }

        array<String^>^ last = temp->Split('#');
        array<String^>^ result = gcnew array<String^>(last->Length - 1);
        for (int i = 0; i < result->Length; i++)
        {
            result[i] = last[i];
        }

        return result;


    }
    void Update(String^ filename, String^ search, int column, String^ newvalues)
    {

        String^ bytes = File::ReadAllText(filename);
        array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            array<String^>^ var = lines[i]->Split(',');
            String^ sep = "\n";
            if (i == lines->Length - 1)
            {
                sep = "";
            }

            if (var[column] == search)
            {
                temp += newvalues + sep;
            }
            else
            {
                temp += lines[i] + sep;

            }

        }
        File::WriteAllText(filename, temp);


    }
    void Delete(String^ filename, String^ search, int column)
    {

        String^ bytes = File::ReadAllText(filename);
        array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";

        for (int i = 0; i < lines->Length; i++)
        {
            
            String^ line = lines[i]->Trim();
            if (String::IsNullOrWhiteSpace(line))
                continue;

            array<String^>^ var = line->Split(',');

            String^ sep = (temp == "") ? "" : "\n";  

            if (var->Length > column)
            {
                if (var[column]->Trim() != search->Trim())
                {
                    temp += sep + line;
                }
            }
        }

        File::WriteAllText(filename, temp);
    }

};

ref class CRUD
{

};


