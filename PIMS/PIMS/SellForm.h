#pragma once
#include "CRUD.h"
#include "Mapper.h"
#include "Sell.h"
#include "Product.h"
#include "recordcustomer.h"
namespace PIMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SellForm
	/// </summary>
	public ref class SellForm : public System::Windows::Forms::Form
	{
	public:
		SellForm(void)
		{
			InitializeComponent();
			dataGridView1->Columns->Add("ProductID", "Product ID");
			dataGridView1->Columns->Add("ProductName", "Product Name");
			dataGridView1->Columns->Add("ProductPrice", "Price");
			dataGridView1->Columns->Add("ProductQuantity", "Available Quantity");
			dataGridView1->Columns->Add("RequestedQuantity", "Requested Quantity");
			dataGridView1->Columns->Add("TotalPrice", "Total Price");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SellForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ SellProductName;
	protected:

	private: System::Windows::Forms::TextBox^ SellQuantity;
	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ SellSearchButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;


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
			this->SellProductName = (gcnew System::Windows::Forms::TextBox());
			this->SellQuantity = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SellSearchButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// SellProductName
			// 
			this->SellProductName->Location = System::Drawing::Point(43, 79);
			this->SellProductName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SellProductName->Name = L"SellProductName";
			this->SellProductName->Size = System::Drawing::Size(230, 26);
			this->SellProductName->TabIndex = 0;
			// 
			// SellQuantity
			// 
			this->SellQuantity->Location = System::Drawing::Point(315, 78);
			this->SellQuantity->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SellQuantity->Name = L"SellQuantity";
			this->SellQuantity->Size = System::Drawing::Size(230, 26);
			this->SellQuantity->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 175);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1357, 515);
			this->dataGridView1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Product Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(312, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Product Quantity: ";
			this->label2->Click += gcnew System::EventHandler(this, &SellForm::label2_Click);
			// 
			// SellSearchButton
			// 
			this->SellSearchButton->Location = System::Drawing::Point(602, 78);
			this->SellSearchButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SellSearchButton->Name = L"SellSearchButton";
			this->SellSearchButton->Size = System::Drawing::Size(84, 29);
			this->SellSearchButton->TabIndex = 6;
			this->SellSearchButton->Text = L"Cancel";
			this->SellSearchButton->UseVisualStyleBackColor = true;
			this->SellSearchButton->Click += gcnew System::EventHandler(this, &SellForm::SellSearchButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(602, 129);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sell";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SellForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(693, 78);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SellForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(784, 79);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 29);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SellForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(875, 79);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 29);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SellForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(784, 126);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 26);
			this->textBox1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(696, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Total Price";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1149, 125);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 29);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Report";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// SellForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1346, 685);
			this->ControlBox = false;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SellSearchButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->SellQuantity);
			this->Controls->Add(this->SellProductName);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"SellForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	// Use your actual textbox names here
	String^ productName = SellProductName->Text->Trim();
	String^ quantityText = SellQuantity->Text->Trim();

	if (String::IsNullOrEmpty(productName) || String::IsNullOrEmpty(quantityText)) {
		MessageBox::Show("Please enter both product name and quantity.");
		return;
	}

	int requestedQuantity;
	if (!Int32::TryParse(quantityText, requestedQuantity) || requestedQuantity <= 0) {
		MessageBox::Show("Please enter a valid quantity (positive integer).");
		return;
	}

	String^ productsFilePath = "C:\\Users\\Dell\\Desktop\\Products.txt";

	// Read all product lines
	array<String^>^ productLines = nullptr;
	try {
		if (!File::Exists(productsFilePath)) {
			MessageBox::Show("Products file not found.");
			return;
		}
		productLines = File::ReadAllLines(productsFilePath);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error reading products file: " + ex->Message);
		return;
	}

	// Find product line index and data
	int productLineIndex = -1;
	array<String^>^ parts = nullptr;
	for (int i = 0; i < productLines->Length; i++) {
		String^ line = productLines[i];
		if (String::IsNullOrWhiteSpace(line)) continue;

		array<String^>^ splitParts = line->Split(',');
		if (splitParts->Length < 4) continue;

		String^ name = splitParts[1]->Trim();
		if (name->Equals(productName, StringComparison::OrdinalIgnoreCase)) {
			productLineIndex = i;
			parts = splitParts;
			break;
		}
	}

	if (productLineIndex == -1) {
		MessageBox::Show("Product not found.");
		return;
	}

	int availableQuantity;
	if (!Int32::TryParse(parts[3], availableQuantity)) {
		MessageBox::Show("Invalid product quantity data.");
		return;
	}

	if (requestedQuantity > availableQuantity) {
		MessageBox::Show("Requested quantity exceeds available stock.");
		return;
	}

	// Unbox productID and price
	int productId;
	double price;
	if (!Int32::TryParse(parts[0], productId)) {
		MessageBox::Show("Invalid product ID.");
		return;
	}
	if (!Double::TryParse(parts[2], price)) {
		MessageBox::Show("Invalid product price.");
		return;
	}

	double totalPrice = price * requestedQuantity;

	// Add row to dataGridView1
	array<Object^>^ row = gcnew array<Object^>(6);
	row[0] = productId;
	row[1] = productName;
	row[2] = price;
	row[3] = availableQuantity;
	row[4] = requestedQuantity;
	row[5] = totalPrice;

	dataGridView1->Rows->Add(row);

	// Deduct quantity in the product lines array and update file
	int newQuantity = availableQuantity - requestedQuantity;
	parts[3] = newQuantity.ToString();

	// Rebuild the product line string and update the array
	productLines[productLineIndex] = String::Join(",", parts);

	try {
		File::WriteAllLines(productsFilePath, productLines);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error updating products file: " + ex->Message);
		return;
	}

	// Calculate sum of all TotalPrice in the grid
	double sumTotalPrice = 0.0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		DataGridViewRow^ currentRow = dataGridView1->Rows[i];
		if (!currentRow->IsNewRow) {
			Object^ cellValue = currentRow->Cells[5]->Value;
			if (cellValue != nullptr) {
				double priceVal;
				if (Double::TryParse(cellValue->ToString(), priceVal)) {
					sumTotalPrice += priceVal;
				}
			}
		}
	}

	// Set total price sum to textBox1
	textBox1->Text = sumTotalPrice.ToString("F2");

	// Optionally clear inputs after adding
	SellProductName->Clear();
	SellQuantity->Clear();
}


#include "recordcustomer.h"  // Include your customer form header

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// Check if any products are added
	if (dataGridView1->Rows->Count == 0 || (dataGridView1->Rows->Count == 1 && dataGridView1->Rows[0]->IsNewRow)) {
		MessageBox::Show("No products to sell. Please add products first.");
		return;
	}

	DatabaseOperations dbOps;

	// Determine next OrderID
	int nextOrderID = 1;
	String^ saleFile = "C:\\Users\\Dell\\Desktop\\sale.txt";

	if (File::Exists(saleFile)) {
		array<String^>^ allSales = dbOps.Read(saleFile);
		int maxOrderID = 0;
		for each (String ^ line in allSales) {
			if (!String::IsNullOrWhiteSpace(line)) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length >= 1) {
					int currentOrderID;
					if (Int32::TryParse(parts[0], currentOrderID)) {
						if (currentOrderID > maxOrderID) {
							maxOrderID = currentOrderID;
						}
					}
				}
			}
		}
		nextOrderID = maxOrderID + 1;
	}

	// Save all products from grid to sale.txt with the same orderID
	double grandTotal = 0.0;
	for each (DataGridViewRow ^ row in dataGridView1->Rows) {
		if (row->IsNewRow) continue;

		int productID = safe_cast<int>(row->Cells[0]->Value);
		String^ productName = safe_cast<String^>(row->Cells[1]->Value);
		double price = Convert::ToDouble(row->Cells[2]->Value);
		int quantity = safe_cast<int>(row->Cells[4]->Value);
		double totalPrice = Convert::ToDouble(row->Cells[5]->Value);

		grandTotal += totalPrice;

		// Prepare the CSV line for this product sale
		String^ saleLine = String::Format("{0},{1},{2},{3},{4},{5}",
			nextOrderID, productID, productName, price, quantity, totalPrice);

		// Append to sale.txt
		dbOps.Insert(saleFile, saleLine);
	}

	// Show total price prompt
	MessageBox::Show("Total Price to pay: " + grandTotal.ToString("F2"), "Sale Summary");

	// Open recordcustomer form modally
	recordcustomer^ customerForm = gcnew recordcustomer();
	customerForm->ShowDialog();

	// After customer form closes, clear dataGridView1 and reset total price
	dataGridView1->Rows->Clear();
	textBox1->Text = "0.00";

	// Optionally clear input boxes
	SellProductName->Text = "";
	SellQuantity->Text = "";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ productName = SellProductName->Text->Trim();
	String^ quantityText = SellQuantity->Text->Trim();

	if (String::IsNullOrEmpty(productName) || String::IsNullOrEmpty(quantityText)) {
		MessageBox::Show("Please enter both product name and quantity.");
		return;
	}

	int newQuantity;
	if (!Int32::TryParse(quantityText, newQuantity) || newQuantity <= 0) {
		MessageBox::Show("Please enter a valid quantity (positive integer).");
		return;
	}

	bool productFound = false;

	// Loop through rows to find the product
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		DataGridViewRow^ row = dataGridView1->Rows[i];

		if (!row->IsNewRow) {
			String^ rowProductName = safe_cast<String^>(row->Cells[1]->Value);
			if (rowProductName->Equals(productName, StringComparison::OrdinalIgnoreCase)) {

				int availableQuantity = safe_cast<int>(row->Cells[3]->Value);
				double price = safe_cast<double>(row->Cells[2]->Value);

				if (newQuantity > availableQuantity) {
					MessageBox::Show("Requested quantity exceeds available stock.");
					return;
				}

				// Update quantity and total price
				row->Cells[4]->Value = newQuantity;
				double newTotalPrice = price * newQuantity;
				row->Cells[5]->Value = newTotalPrice;

				productFound = true;
				break;
			}
		}
	}

	if (!productFound) {
		MessageBox::Show("Product not found in the list.");
		return;
	}

	// Recalculate the total sum and update textBox1
	double sumTotalPrice = 0.0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		DataGridViewRow^ currentRow = dataGridView1->Rows[i];
		if (!currentRow->IsNewRow) {
			Object^ cellValue = currentRow->Cells[5]->Value;
			if (cellValue != nullptr) {
				double priceVal;
				if (Double::TryParse(cellValue->ToString(), priceVal)) {
					sumTotalPrice += priceVal;
				}
			}
		}
	}

	textBox1->Text = sumTotalPrice.ToString("F2");
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ productName = SellProductName->Text->Trim();

	if (String::IsNullOrEmpty(productName)) {
		MessageBox::Show("Please enter the product name to delete.");
		return;
	}

	bool productFound = false;

	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		DataGridViewRow^ row = dataGridView1->Rows[i];

		if (!row->IsNewRow) {
			String^ rowProductName = safe_cast<String^>(row->Cells[1]->Value);
			if (rowProductName->Equals(productName, StringComparison::OrdinalIgnoreCase)) {
				dataGridView1->Rows->RemoveAt(i);
				productFound = true;
				break;
			}
		}
	}

	if (!productFound) {
		MessageBox::Show("Product not found in the list.");
		return;
	}

	// Recalculate total price after deletion
	double sumTotalPrice = 0.0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		DataGridViewRow^ currentRow = dataGridView1->Rows[i];
		if (!currentRow->IsNewRow) {
			Object^ cellValue = currentRow->Cells[5]->Value;
			if (cellValue != nullptr) {
				double priceVal;
				if (Double::TryParse(cellValue->ToString(), priceVal)) {
					sumTotalPrice += priceVal;
				}
			}
		}
	}

	textBox1->Text = sumTotalPrice.ToString("F2");
}

private: System::Void SellSearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Clear all rows from the grid
	dataGridView1->Rows->Clear();

	// Optionally clear columns if you want to reset completely
	// dataGridView1->Columns->Clear();

	// Reset the total price textbox
	textBox1->Text = "0.00";

	// Optionally clear the input textboxes as well
	SellProductName->Text = "";
	SellQuantity->Text = "";
}

};
}
