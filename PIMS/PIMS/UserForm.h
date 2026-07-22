#pragma once
#include "User.h"
#include "CRUD.h"
#include "Mapper.h"

namespace PIMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ UserGridView;
	protected:

	private: System::Windows::Forms::TextBox^ NameUser;

	private: System::Windows::Forms::TextBox^ IDUser;
	private: System::Windows::Forms::TextBox^ TyperOfUser;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ DeleteUser;
	private: System::Windows::Forms::Button^ UpdateUser;
	private: System::Windows::Forms::Button^ ReadUser;
	private: System::Windows::Forms::Button^ SearchUser;











	private: System::Windows::Forms::Button^ AddUser;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->UserGridView = (gcnew System::Windows::Forms::DataGridView());
			this->NameUser = (gcnew System::Windows::Forms::TextBox());
			this->IDUser = (gcnew System::Windows::Forms::TextBox());
			this->TyperOfUser = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DeleteUser = (gcnew System::Windows::Forms::Button());
			this->UpdateUser = (gcnew System::Windows::Forms::Button());
			this->ReadUser = (gcnew System::Windows::Forms::Button());
			this->SearchUser = (gcnew System::Windows::Forms::Button());
			this->AddUser = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// UserGridView
			// 
			this->UserGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->UserGridView->Location = System::Drawing::Point(-1, 212);
			this->UserGridView->Name = L"UserGridView";
			this->UserGridView->RowHeadersWidth = 51;
			this->UserGridView->RowTemplate->Height = 24;
			this->UserGridView->Size = System::Drawing::Size(1069, 343);
			this->UserGridView->TabIndex = 0;
			this->UserGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dataGridView1_CellContentClick);
			// 
			// NameUser
			// 
			this->NameUser->Location = System::Drawing::Point(285, 59);
			this->NameUser->Name = L"NameUser";
			this->NameUser->Size = System::Drawing::Size(142, 22);
			this->NameUser->TabIndex = 1;
			// 
			// IDUser
			// 
			this->IDUser->Location = System::Drawing::Point(58, 59);
			this->IDUser->Name = L"IDUser";
			this->IDUser->Size = System::Drawing::Size(142, 22);
			this->IDUser->TabIndex = 2;
			// 
			// TyperOfUser
			// 
			this->TyperOfUser->Location = System::Drawing::Point(555, 59);
			this->TyperOfUser->Name = L"TyperOfUser";
			this->TyperOfUser->Size = System::Drawing::Size(142, 22);
			this->TyperOfUser->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(292, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ID ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(552, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Type of User";
			this->label3->Click += gcnew System::EventHandler(this, &UserForm::label3_Click);
			// 
			// DeleteUser
			// 
			this->DeleteUser->Location = System::Drawing::Point(215, 156);
			this->DeleteUser->Name = L"DeleteUser";
			this->DeleteUser->Size = System::Drawing::Size(82, 26);
			this->DeleteUser->TabIndex = 8;
			this->DeleteUser->Text = L"Delete";
			this->DeleteUser->UseVisualStyleBackColor = true;
			this->DeleteUser->Click += gcnew System::EventHandler(this, &UserForm::DeleteUser_Click);
			// 
			// UpdateUser
			// 
			this->UpdateUser->Location = System::Drawing::Point(349, 156);
			this->UpdateUser->Name = L"UpdateUser";
			this->UpdateUser->Size = System::Drawing::Size(82, 26);
			this->UpdateUser->TabIndex = 9;
			this->UpdateUser->Text = L"Update";
			this->UpdateUser->UseVisualStyleBackColor = true;
			this->UpdateUser->Click += gcnew System::EventHandler(this, &UserForm::UpdateUser_Click);
			// 
			// ReadUser
			// 
			this->ReadUser->Location = System::Drawing::Point(474, 156);
			this->ReadUser->Name = L"ReadUser";
			this->ReadUser->Size = System::Drawing::Size(82, 26);
			this->ReadUser->TabIndex = 10;
			this->ReadUser->Text = L"Read";
			this->ReadUser->UseVisualStyleBackColor = true;
			this->ReadUser->Click += gcnew System::EventHandler(this, &UserForm::ReadUser_Click);
			// 
			// SearchUser
			// 
			this->SearchUser->Location = System::Drawing::Point(589, 156);
			this->SearchUser->Name = L"SearchUser";
			this->SearchUser->Size = System::Drawing::Size(82, 26);
			this->SearchUser->TabIndex = 15;
			this->SearchUser->Text = L"Search";
			this->SearchUser->UseVisualStyleBackColor = true;
			this->SearchUser->Click += gcnew System::EventHandler(this, &UserForm::SearchUser_Click);
			// 
			// AddUser
			// 
			this->AddUser->Location = System::Drawing::Point(86, 156);
			this->AddUser->Name = L"AddUser";
			this->AddUser->Size = System::Drawing::Size(82, 26);
			this->AddUser->TabIndex = 7;
			this->AddUser->Text = L"Add ";
			this->AddUser->UseVisualStyleBackColor = true;
			this->AddUser->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1067, 554);
			this->Controls->Add(this->SearchUser);
			this->Controls->Add(this->ReadUser);
			this->Controls->Add(this->UpdateUser);
			this->Controls->Add(this->DeleteUser);
			this->Controls->Add(this->AddUser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TyperOfUser);
			this->Controls->Add(this->IDUser);
			this->Controls->Add(this->NameUser);
			this->Controls->Add(this->UserGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ControlBox = false;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	User dob;
	
	dob.Username = NameUser->Text;
	dob.UserId = Int32::Parse(IDUser->Text);
	dob.TypeOfUser = TyperOfUser->Text;

	DatabaseOperations db;
	MessageBox::Show("User Added Successfuly!");
	String^ r = "C:\\Users\\Dell\\Desktop\\";
	db.Insert(r + "User.txt", dob.UserId->ToString() + "," + dob.Username + "," + dob.TypeOfUser);
}
private: System::Void ReadUser_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;

	String^ r = "C:\\Users\\Dell\\Desktop\\";

	array<User^>^ docs = Mapper::map_User(db.Read(r + "User.txt"));
	
	if (docs->Length == 0) {
		MessageBox::Show("No matching user found.");
		return;
	}
	UserGridView->Rows->Clear();
	UserGridView->Columns->Clear();

	UserGridView->Columns->Add("c1", "UserId");
	UserGridView->Columns->Add("c2", "UserName");
	UserGridView->Columns->Add("c3", "TypeOfUser");

	for(int i=0; i<docs->Length;i++)
	{
		UserGridView->Rows->Add(docs[i]->UserId->ToString(), docs[i]->Username, docs[i]->TypeOfUser);
	}
}
private: System::Void DeleteUser_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\User.txt";

	String^ searchValue = "";
	int column = -1;

	if (!String::IsNullOrWhiteSpace(IDUser->Text)) {
		searchValue = IDUser->Text->Trim();
		column = 0; 
	}
	else if (!String::IsNullOrWhiteSpace(NameUser->Text)) {
		searchValue = NameUser->Text->Trim();
		column = 1; 
	}
	else {
		MessageBox::Show("Please enter either User ID or User Name to delete.");
		return;
	}

	
	db.Delete(filepath, searchValue, column);

	MessageBox::Show("User deleted successfully (if found).");
}
private: System::Void UpdateUser_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\User.txt";

	// Check if User ID is entered
	if (String::IsNullOrWhiteSpace(IDUser->Text)) {
		MessageBox::Show("Please enter the User ID to update.");
		return;
	}

	String^ searchValue = IDUser->Text->Trim();
	int column = 0; // Always search by User ID

	// First: check if the User ID exists
	array<String^>^ results = db.Search(filepath, searchValue, column);
	if (results->Length == 0) {
		MessageBox::Show("No user found with the given User ID.");
		return;
	}

	// Create new line with same ID, updated name and type
	String^ newvalues = searchValue + "," + NameUser->Text->Trim() + "," + TyperOfUser->Text->Trim();

	// Update the line
	db.Update(filepath, searchValue, column, newvalues);

	MessageBox::Show("User updated successfully.");
}
private: System::Void SearchUser_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\User.txt";

	String^ searchValue = "";
	int column = -1;

	// Determine which field the user wants to search
	if (!String::IsNullOrWhiteSpace(IDUser->Text)) {
		searchValue = IDUser->Text->Trim();
		column = 0; // UserID
	}
	else if (!String::IsNullOrWhiteSpace(NameUser->Text)) {
		searchValue = NameUser->Text->Trim();
		column = 1; // Username
	}
	else if (!String::IsNullOrWhiteSpace(TyperOfUser->Text)) {
		searchValue = TyperOfUser->Text->Trim()->ToLower();

		
		if (searchValue == "admin" || searchValue == "pharmacist") {
			column = 2; 
		}
		else {
			MessageBox::Show("User Type must be 'Admin' or 'Pharmacist'.");
			return;
		}
	}
	else {
		MessageBox::Show("Please enter User ID, Name, or User Type to search.");
		return;
	}

	array<String^>^ results = db.Search(filepath, searchValue, column);

	
	if (results->Length == 0 || String::IsNullOrWhiteSpace(results[0])) {
		MessageBox::Show("No user found matching the given information.");
		return;
	}


	array<User^>^ users = Mapper::map_User(results);

	
	UserGridView->Rows->Clear();
	UserGridView->Columns->Clear();

	UserGridView->Columns->Add("c1", "UserId");
	UserGridView->Columns->Add("c2", "UserName");
	UserGridView->Columns->Add("c3", "TypeOfUser");

	for (int i = 0; i < users->Length; i++) {
		UserGridView->Rows->Add(users[i]->UserId->ToString(), users[i]->Username, users[i]->TypeOfUser);
	}
}
};
}
