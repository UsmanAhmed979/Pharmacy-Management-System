#pragma once
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
	/// Summary for recordcustomer
	/// </summary>
	public ref class recordcustomer : public System::Windows::Forms::Form
	{
	public:
		recordcustomer(void)
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
		~recordcustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::RichTextBox^ CustomerIDTextBox;
	private: System::Windows::Forms::TextBox^ CustomerTextBox;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->CustomerIDTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->CustomerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(88, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Customer ID: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(492, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Customer Name: ";
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(377, 343);
			this->AddButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(84, 29);
			this->AddButton->TabIndex = 12;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &recordcustomer::AddButton_Click);
			// 
			// CustomerIDTextBox
			// 
			this->CustomerIDTextBox->Location = System::Drawing::Point(92, 249);
			this->CustomerIDTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CustomerIDTextBox->Name = L"CustomerIDTextBox";
			this->CustomerIDTextBox->Size = System::Drawing::Size(257, 25);
			this->CustomerIDTextBox->TabIndex = 11;
			this->CustomerIDTextBox->Text = L"";
			// 
			// CustomerTextBox
			// 
			this->CustomerTextBox->Location = System::Drawing::Point(495, 248);
			this->CustomerTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CustomerTextBox->Name = L"CustomerTextBox";
			this->CustomerTextBox->Size = System::Drawing::Size(226, 26);
			this->CustomerTextBox->TabIndex = 10;
			// 
			// recordcustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 559);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->CustomerIDTextBox);
			this->Controls->Add(this->CustomerTextBox);
			this->Name = L"recordcustomer";
			this->Text = L"recordcustomer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ customerIDText = CustomerIDTextBox->Text->Trim();
		String^ customerName = CustomerTextBox->Text->Trim();

		if (String::IsNullOrEmpty(customerIDText) || String::IsNullOrEmpty(customerName)) {
			MessageBox::Show("Please enter both Customer ID and Customer Name.");
			return;
		}

		int customerID;
		if (!Int32::TryParse(customerIDText, customerID) || customerID <= 0) {
			MessageBox::Show("Please enter a valid positive integer for Customer ID.");
			return;
		}

		// attach to Customer.txt
		String^ customerLine = String::Format("{0},{1}", customerID, customerName);

		// customer file path 
		String^ customerFile = "C:\\Users\\Dell\\Desktop\\Customer.txt";

		DatabaseOperations dbOps;
		try {
			dbOps.Insert(customerFile, customerLine);
			MessageBox::Show("Customer saved successfully.");
			// clear textboxes after successful save
			CustomerIDTextBox->Clear();
			CustomerTextBox->Clear();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error saving customer: " + ex->Message);
		}
	}

};
}
