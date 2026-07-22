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
	/// Summary for ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ ProductGridView;
	protected:

	private: System::Windows::Forms::TextBox^ ProductName;
	private: System::Windows::Forms::TextBox^ ProductID;
	private: System::Windows::Forms::TextBox^ ProductQuantity;
	private: System::Windows::Forms::Button^ AddProductButton;
	private: System::Windows::Forms::Button^ DeleteProductButton;
	private: System::Windows::Forms::Button^ UpdateProductButton;
	private: System::Windows::Forms::Button^ ReadProductButton;
	private: System::Windows::Forms::Button^ SearchProductButton;









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ProductPrice;

	private: System::Windows::Forms::Label^ label5;
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
			this->ProductGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ProductName = (gcnew System::Windows::Forms::TextBox());
			this->ProductID = (gcnew System::Windows::Forms::TextBox());
			this->ProductQuantity = (gcnew System::Windows::Forms::TextBox());
			this->AddProductButton = (gcnew System::Windows::Forms::Button());
			this->DeleteProductButton = (gcnew System::Windows::Forms::Button());
			this->UpdateProductButton = (gcnew System::Windows::Forms::Button());
			this->ReadProductButton = (gcnew System::Windows::Forms::Button());
			this->SearchProductButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ProductPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// ProductGridView
			// 
			this->ProductGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ProductGridView->Location = System::Drawing::Point(-2, 202);
			this->ProductGridView->Name = L"ProductGridView";
			this->ProductGridView->RowHeadersWidth = 51;
			this->ProductGridView->RowTemplate->Height = 24;
			this->ProductGridView->Size = System::Drawing::Size(1185, 336);
			this->ProductGridView->TabIndex = 0;
			// 
			// ProductName
			// 
			this->ProductName->Location = System::Drawing::Point(279, 61);
			this->ProductName->Name = L"ProductName";
			this->ProductName->Size = System::Drawing::Size(134, 22);
			this->ProductName->TabIndex = 1;
			// 
			// ProductID
			// 
			this->ProductID->Location = System::Drawing::Point(92, 61);
			this->ProductID->Name = L"ProductID";
			this->ProductID->Size = System::Drawing::Size(134, 22);
			this->ProductID->TabIndex = 2;
			// 
			// ProductQuantity
			// 
			this->ProductQuantity->Location = System::Drawing::Point(463, 61);
			this->ProductQuantity->Name = L"ProductQuantity";
			this->ProductQuantity->Size = System::Drawing::Size(134, 22);
			this->ProductQuantity->TabIndex = 3;
			// 
			// AddProductButton
			// 
			this->AddProductButton->Location = System::Drawing::Point(92, 142);
			this->AddProductButton->Name = L"AddProductButton";
			this->AddProductButton->Size = System::Drawing::Size(75, 23);
			this->AddProductButton->TabIndex = 5;
			this->AddProductButton->Text = L"Add";
			this->AddProductButton->UseVisualStyleBackColor = true;
			this->AddProductButton->Click += gcnew System::EventHandler(this, &ProductForm::AddProductButton_Click);
			// 
			// DeleteProductButton
			// 
			this->DeleteProductButton->Location = System::Drawing::Point(209, 142);
			this->DeleteProductButton->Name = L"DeleteProductButton";
			this->DeleteProductButton->Size = System::Drawing::Size(75, 23);
			this->DeleteProductButton->TabIndex = 6;
			this->DeleteProductButton->Text = L"Delete";
			this->DeleteProductButton->UseVisualStyleBackColor = true;
			this->DeleteProductButton->Click += gcnew System::EventHandler(this, &ProductForm::DeleteProductButton_Click);
			// 
			// UpdateProductButton
			// 
			this->UpdateProductButton->Location = System::Drawing::Point(338, 142);
			this->UpdateProductButton->Name = L"UpdateProductButton";
			this->UpdateProductButton->Size = System::Drawing::Size(75, 23);
			this->UpdateProductButton->TabIndex = 7;
			this->UpdateProductButton->Text = L"Update";
			this->UpdateProductButton->UseVisualStyleBackColor = true;
			this->UpdateProductButton->Click += gcnew System::EventHandler(this, &ProductForm::UpdateProductButton_Click);
			// 
			// ReadProductButton
			// 
			this->ReadProductButton->Location = System::Drawing::Point(463, 142);
			this->ReadProductButton->Name = L"ReadProductButton";
			this->ReadProductButton->Size = System::Drawing::Size(75, 23);
			this->ReadProductButton->TabIndex = 8;
			this->ReadProductButton->Text = L"Read";
			this->ReadProductButton->UseVisualStyleBackColor = true;
			this->ReadProductButton->Click += gcnew System::EventHandler(this, &ProductForm::ReadProductButton_Click);
			// 
			// SearchProductButton
			// 
			this->SearchProductButton->Location = System::Drawing::Point(593, 142);
			this->SearchProductButton->Name = L"SearchProductButton";
			this->SearchProductButton->Size = System::Drawing::Size(75, 23);
			this->SearchProductButton->TabIndex = 9;
			this->SearchProductButton->Text = L"Search";
			this->SearchProductButton->UseVisualStyleBackColor = true;
			this->SearchProductButton->Click += gcnew System::EventHandler(this, &ProductForm::SearchProductButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(276, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Product Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Product ID: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(460, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(460, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Product Quanitity:";
			// 
			// ProductPrice
			// 
			this->ProductPrice->Location = System::Drawing::Point(647, 61);
			this->ProductPrice->Name = L"ProductPrice";
			this->ProductPrice->Size = System::Drawing::Size(134, 22);
			this->ProductPrice->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(644, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Product Price: ";
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1110, 532);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ProductPrice);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SearchProductButton);
			this->Controls->Add(this->ReadProductButton);
			this->Controls->Add(this->UpdateProductButton);
			this->Controls->Add(this->DeleteProductButton);
			this->Controls->Add(this->AddProductButton);
			this->Controls->Add(this->ProductQuantity);
			this->Controls->Add(this->ProductID);
			this->Controls->Add(this->ProductName);
			this->Controls->Add(this->ProductGridView);
			this->Name = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddProductButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Product dob;

		dob.ProductName = ProductName->Text;
		dob.ProductID = Int32::Parse(ProductID->Text);
		dob.ProductQuantity = Int32::Parse(ProductQuantity->Text);
		dob.ProductPrice = double::Parse(ProductPrice->Text);

		DatabaseOperations db;

		String^ r = "C:\\Users\\Dell\\Desktop\\";
		db.Insert(r + "Products.txt", dob.ProductID->ToString() + "," + dob.ProductName + "," + dob.ProductPrice->ToString() + "," + dob.ProductQuantity->ToString());
	}
private: System::Void ReadProductButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;

	String^ r = "C:\\Users\\Dell\\Desktop\\";
	array<Product^>^ products = Mapper::map_Product(db.Read(r + "Products.txt"));

	if (products->Length == 0) {
		MessageBox::Show("No matching product found.");
		return;
	}

	ProductGridView->Rows->Clear();
	ProductGridView->Columns->Clear();

	ProductGridView->Columns->Add("c1", "ProductID");
	ProductGridView->Columns->Add("c2", "ProductName");
	ProductGridView->Columns->Add("c3", "ProductPrice");
	ProductGridView->Columns->Add("c4", "ProductQuantity");

	for (int i = 0; i < products->Length; i++) {
		ProductGridView->Rows->Add(
			products[i]->ProductID->ToString(),
			products[i]->ProductName,
			products[i]->ProductPrice->ToString("F2"), 
			products[i]->ProductQuantity->ToString()
		);
	}
}
private: System::Void DeleteProductButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Products.txt";

	String^ searchValue = "";
	int column = -1;

	if (!String::IsNullOrWhiteSpace(ProductID->Text)) {
		searchValue = ProductID->Text->Trim();
		column = 0; 
	}
	else if (!String::IsNullOrWhiteSpace(ProductName->Text)) {
		searchValue = ProductName->Text->Trim();
		column = 1; 
	}
	else {
		MessageBox::Show("Please enter either Product ID or Product Name to delete.");
		return;
	}

	db.Delete(filepath, searchValue, column);

	MessageBox::Show("Product deleted successfully (if found).");

}
private: System::Void UpdateProductButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Products.txt";

	// Ensure ID is provided
	if (String::IsNullOrWhiteSpace(ProductID->Text)) {
		MessageBox::Show("Please enter the Product ID to update.");
		return;
	}

	String^ searchValue = ProductID->Text->Trim();
	int column = 0; 

	
	array<String^>^ results = db.Search(filepath, searchValue, column);
	if (results->Length == 0 || String::IsNullOrWhiteSpace(results[0])) {
		MessageBox::Show("No product found with the given Product ID.");
		return;
	}

	
	array<String^>^ oldData = results[0]->Split(',');

	
	String^ updatedName = String::IsNullOrWhiteSpace(ProductName->Text) ? oldData[1] : ProductName->Text->Trim();
	String^ updatedPrice = String::IsNullOrWhiteSpace(ProductPrice->Text) ? oldData[2] : ProductPrice->Text->Trim();
	String^ updatedQuantity = String::IsNullOrWhiteSpace(ProductQuantity->Text) ? oldData[3] : ProductQuantity->Text->Trim();

	
	String^ newvalues = searchValue + "," + updatedName + "," + updatedPrice + "," + updatedQuantity;

	
	db.Update(filepath, searchValue, column, newvalues);

	MessageBox::Show("Product updated successfully.");
}
private: System::Void SearchProductButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DatabaseOperations db;
	String^ filepath = "C:\\Users\\Dell\\Desktop\\Products.txt";

	String^ searchValue = "";
	int column = -1;

	
	if (!String::IsNullOrWhiteSpace(ProductID->Text)) {
		searchValue = ProductID->Text->Trim();
		column = 0; 
	}
	else if (!String::IsNullOrWhiteSpace(ProductName->Text)) {
		searchValue = ProductName->Text->Trim();
		column = 1; 
	}
	else {
		MessageBox::Show("Please enter Product ID or Product Name to search.");
		return;
	}

	
	array<String^>^ results = db.Search(filepath, searchValue, column);

	
	if (results->Length == 0 || String::IsNullOrWhiteSpace(results[0])) {
		MessageBox::Show("No product found with the given information.");
		return;
	}

	
	array<Product^>^ products = Mapper::map_Product(results);

	ProductGridView->Rows->Clear();
	ProductGridView->Columns->Clear();

	ProductGridView->Columns->Add("c1", "ProductID");
	ProductGridView->Columns->Add("c2", "ProductName");
	ProductGridView->Columns->Add("c3", "ProductPrice");
	ProductGridView->Columns->Add("c4", "ProductQuantity");

	for (int i = 0; i < products->Length; i++) {
		ProductGridView->Rows->Add(
			products[i]->ProductID->ToString(),
			products[i]->ProductName,
			products[i]->ProductPrice->ToString("F2"),
			products[i]->ProductQuantity->ToString()
		);
	}
	
}
private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
