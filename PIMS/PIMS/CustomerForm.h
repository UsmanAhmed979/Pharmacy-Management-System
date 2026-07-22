#pragma once
#include"Customer.h"
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
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ CustomerTextBox;
	private: System::Windows::Forms::RichTextBox^ CustomerIDTextBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::Button^ ReadButton;
	private: System::Windows::Forms::Button^ SearchButton;





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->CustomerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CustomerIDTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->ReadButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// CustomerTextBox
			// 
			this->CustomerTextBox->Location = System::Drawing::Point(452, 94);
			this->CustomerTextBox->Name = L"CustomerTextBox";
			this->CustomerTextBox->Size = System::Drawing::Size(201, 22);
			this->CustomerTextBox->TabIndex = 0;
			this->CustomerTextBox->TextChanged += gcnew System::EventHandler(this, &CustomerForm::CustomerTextBox_TextChanged);
			// 
			// CustomerIDTextBox
			// 
			this->CustomerIDTextBox->Location = System::Drawing::Point(93, 95);
			this->CustomerIDTextBox->Name = L"CustomerIDTextBox";
			this->CustomerIDTextBox->Size = System::Drawing::Size(229, 21);
			this->CustomerIDTextBox->TabIndex = 1;
			this->CustomerIDTextBox->Text = L"";
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(93, 140);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(75, 23);
			this->AddButton->TabIndex = 2;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &CustomerForm::AddButton_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(225, 140);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(75, 23);
			this->DeleteButton->TabIndex = 3;
			this->DeleteButton->Text = L"Delete";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &CustomerForm::DeleteButton_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(357, 140);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(75, 23);
			this->UpdateButton->TabIndex = 4;
			this->UpdateButton->Text = L"Update";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &CustomerForm::UpdateButton_Click);
			// 
			// ReadButton
			// 
			this->ReadButton->Location = System::Drawing::Point(492, 140);
			this->ReadButton->Name = L"ReadButton";
			this->ReadButton->Size = System::Drawing::Size(75, 23);
			this->ReadButton->TabIndex = 5;
			this->ReadButton->Text = L"Read";
			this->ReadButton->UseVisualStyleBackColor = true;
			this->ReadButton->Click += gcnew System::EventHandler(this, &CustomerForm::ReadButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(618, 140);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(75, 23);
			this->SearchButton->TabIndex = 6;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &CustomerForm::SearchButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-10, 202);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1201, 350);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(449, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Customer Name: ";
			this->label1->Click += gcnew System::EventHandler(this, &CustomerForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Customer ID: ";
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1182, 550);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->ReadButton);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->CustomerIDTextBox);
			this->Controls->Add(this->CustomerTextBox);
			this->Name = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Customer dob;

	dob.CustomerName = CustomerTextBox->Text;
	dob.CustomerID = Int32::Parse(CustomerIDTextBox->Text);

	DatabaseOperations db;
	MessageBox::Show("Customer Added Successfuly!");
	String^ r = "C:\\Users\\Dell\\Desktop\\";
	db.Insert(r + "Customer.txt", dob.CustomerID->ToString() + "," + dob.CustomerName );
}
private: System::Void CustomerTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ReadButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;

	String^ r = "C:\\Users\\Dell\\Desktop\\";

	array<Customer^>^ docs = Mapper::map_Customer(db.Read(r + "Customer.txt"));

	if (docs->Length == 0) {
		MessageBox::Show("No matching Customer found.");
		return;
	}
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	dataGridView1->Columns->Add("c1", "Customer ID");
	dataGridView1->Columns->Add("c2", "Customer Name");

	for (int i = 0; i < docs->Length; i++)
	{
		dataGridView1->Rows->Add(docs[i]->CustomerID->ToString(), docs[i]->CustomerName);
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Customer.txt";

	String^ searchValue = "";
	int column = -1;

	if (!String::IsNullOrWhiteSpace(CustomerIDTextBox->Text)) {
		searchValue = CustomerIDTextBox->Text->Trim();
		column = 0;
	}
	else if (!String::IsNullOrWhiteSpace(CustomerIDTextBox->Text)) {
		searchValue = CustomerTextBox->Text->Trim();
		column = 1;
	}
	else {
		MessageBox::Show("Please enter either Customer ID or Customer Name to delete.");
		return;
	}


	db.Delete(filepath, searchValue, column);

	MessageBox::Show("Customer deleted successfully (if found).");
}
private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Customer.txt";

	// Check if User ID is entered
	if (String::IsNullOrWhiteSpace(CustomerIDTextBox->Text)) {
		MessageBox::Show("Please enter the Customer ID to update.");
		return;
	}

	String^ searchValue = CustomerIDTextBox->Text->Trim();
	int column = 0; // Always search by User ID

	// First: check if the User ID exists
	array<String^>^ results = db.Search(filepath, searchValue, column);
	if (results->Length == 0) {
		MessageBox::Show("No Customer found with the given User ID.");
		return;
	}

	// Create new line with same ID, updated name and type
	String^ newvalues = searchValue + "," + CustomerTextBox->Text->Trim();

	// Update the line
	db.Update(filepath, searchValue, column, newvalues);

	MessageBox::Show("Customer updated successfully.");
}
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Customer.txt";

	String^ searchValue = "";
	int column = -1;

	// Determine which field the user wants to search
	if (!String::IsNullOrWhiteSpace(CustomerIDTextBox->Text)) {
		searchValue = CustomerIDTextBox->Text->Trim();
		column = 0; // UserID
	}
	else if (!String::IsNullOrWhiteSpace(CustomerTextBox->Text)) {
		searchValue = CustomerTextBox->Text->Trim();
		column = 1; // Username
	
	}
	else {
		MessageBox::Show("Please enter Custoemr ID, or Name.");
		return;
	}

	array<String^>^ results = db.Search(filepath, searchValue, column);


	if (results->Length == 0 || String::IsNullOrWhiteSpace(results[0])) {
		MessageBox::Show("No Customer found matching the given information.");
		return;
	}


	array<Customer^>^ Customer = Mapper::map_Customer(results);


	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	dataGridView1->Columns->Add("c1", "Customer Id");
	dataGridView1->Columns->Add("c2", "Customer Name");
	

	for (int i = 0; i < Customer->Length; i++) {
		dataGridView1->Rows->Add(Customer[i]->CustomerID->ToString(), Customer[i]->CustomerName);
	}
}
};
}
