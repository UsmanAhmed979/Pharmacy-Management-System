#pragma once
#include "User.h"
#include "Product.h"
#include "Customer.h"
#include "Sell.h"
#include<iostream>
#include<string>
using namespace System::Collections::Generic;
using namespace System;
ref class Mapper
{
public:
	static array<User^>^ map_User(array<String^>^ rows)
	{
		array<User^>^ ob = gcnew array<User^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew User();
			ob[i]->UserId = Int32::Parse(temp[0]);
			ob[i]->Username = temp[1];
			ob[i]->TypeOfUser = temp[2];

		}

		return ob;
	}
	static array<Product^>^ map_Product(array<String^>^ rows)
	{
		List<Product^>^ productsList = gcnew List<Product^>();

		for each (String ^ line in rows)
		{
			if (String::IsNullOrWhiteSpace(line))
				continue;

			array<String^>^ temp = line->Split(',');

			if (temp->Length != 4)
				continue;  // skip bad lines

			// Parse with TryParse as before
			int id;
			double price;
			int quantity;

			if (!Int32::TryParse(temp[0]->Trim(), id))
				continue;
			String^ name = temp[1]->Trim();
			if (!Double::TryParse(temp[2]->Trim(), price))
				continue;
			if (!Int32::TryParse(temp[3]->Trim(), quantity))
				continue;

			Product^ p = gcnew Product();
			p->ProductID = id;
			p->ProductName = name;
			p->ProductPrice = price;
			p->ProductQuantity = quantity;

			productsList->Add(p);
		}

		return productsList->ToArray();
	}

	static array<Customer^>^ map_Customer(array<String^>^ rows)
	{
		array<Customer^>^ ob = gcnew array<Customer^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew Customer();
			ob[i]->CustomerID = Int32::Parse(temp[0]);
			ob[i]->CustomerName = temp[1];
			
		}

		return ob;
	}
	static array<Sell^>^ map_Sell(array<String^>^ rows)
	{
		array<Sell^>^ ob = gcnew array<Sell^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew Sell();
			ob[i]->SellProductQuantity = Int32::Parse(temp[0]);
			ob[i]->SellProductName= temp[1];
		}

		return ob;
	}

};

