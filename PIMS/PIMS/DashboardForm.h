#include "Product.h"
#include "Mapper.h"
#include "crud.h"
#pragma once

namespace PIMS {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class DashboardForm : public System::Windows::Forms::Form
    {
    public:
        DashboardForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~DashboardForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ labelTotalSales;
        System::Windows::Forms::Label^ labelTotalAmount;
        System::Windows::Forms::Label^ labelTotalCustomers;
        System::Windows::Forms::Label^ labelTotalProducts;
        System::Windows::Forms::Button^ buttonRefresh;

        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->labelTotalSales = (gcnew System::Windows::Forms::Label());
            this->labelTotalAmount = (gcnew System::Windows::Forms::Label());
            this->labelTotalCustomers = (gcnew System::Windows::Forms::Label());
            this->labelTotalProducts = (gcnew System::Windows::Forms::Label());
            this->buttonRefresh = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelTotalSales
            // 
            this->labelTotalSales->AutoSize = true;
            this->labelTotalSales->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTotalSales->Location = System::Drawing::Point(209, 228);
            this->labelTotalSales->Name = L"labelTotalSales";
            this->labelTotalSales->Size = System::Drawing::Size(294, 60);
            this->labelTotalSales->TabIndex = 0;
            this->labelTotalSales->Text = L"Total Sales: 0";
            // 
            // labelTotalAmount
            // 
            this->labelTotalAmount->AutoSize = true;
            this->labelTotalAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTotalAmount->Location = System::Drawing::Point(209, 278);
            this->labelTotalAmount->Name = L"labelTotalAmount";
            this->labelTotalAmount->Size = System::Drawing::Size(537, 60);
            this->labelTotalAmount->TabIndex = 1;
            this->labelTotalAmount->Text = L"Total Sales Amount: 0.00";
            // 
            // labelTotalCustomers
            // 
            this->labelTotalCustomers->AutoSize = true;
            this->labelTotalCustomers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTotalCustomers->Location = System::Drawing::Point(209, 328);
            this->labelTotalCustomers->Name = L"labelTotalCustomers";
            this->labelTotalCustomers->Size = System::Drawing::Size(407, 60);
            this->labelTotalCustomers->TabIndex = 2;
            this->labelTotalCustomers->Text = L"Total Customers: 0";
            // 
            // labelTotalProducts
            // 
            this->labelTotalProducts->AutoSize = true;
            this->labelTotalProducts->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTotalProducts->Location = System::Drawing::Point(209, 378);
            this->labelTotalProducts->Name = L"labelTotalProducts";
            this->labelTotalProducts->Size = System::Drawing::Size(372, 60);
            this->labelTotalProducts->TabIndex = 3;
            this->labelTotalProducts->Text = L"Total Products: 0";
            // 
            // buttonRefresh
            // 
            this->buttonRefresh->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonRefresh->Location = System::Drawing::Point(219, 510);
            this->buttonRefresh->Name = L"buttonRefresh";
            this->buttonRefresh->Size = System::Drawing::Size(114, 40);
            this->buttonRefresh->TabIndex = 4;
            this->buttonRefresh->Text = L"Refresh";
            this->buttonRefresh->UseVisualStyleBackColor = true;
            this->buttonRefresh->Click += gcnew System::EventHandler(this, &DashboardForm::buttonRefresh_Click);
            // 
            // DashboardForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1206, 767);
            this->Controls->Add(this->labelTotalSales);
            this->Controls->Add(this->labelTotalAmount);
            this->Controls->Add(this->labelTotalCustomers);
            this->Controls->Add(this->labelTotalProducts);
            this->Controls->Add(this->buttonRefresh);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->MaximizeBox = false;
            this->Name = L"DashboardForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Dashboard";
            this->Load += gcnew System::EventHandler(this, &DashboardForm::form_Dashboard_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void LoadDashboardData()
        {
            String^ salesFile = "C:\\Users\\Dell\\Desktop\\sale.txt";
            String^ customerFile = "C:\\Users\\Dell\\Desktop\\Customer.txt";
            String^ productFile = "C:\\Users\\Dell\\Desktop\\Products.txt";

            try
            {
                array<String^>^ salesLines = File::Exists(salesFile) ? File::ReadAllLines(salesFile) : gcnew array<String^>(0);
                System::Collections::ArrayList^ orderIds = gcnew System::Collections::ArrayList();
                double totalSalesAmount = 0;

                for each (String ^ line in salesLines)
                {
                    if (String::IsNullOrWhiteSpace(line)) continue;

                    array<String^>^ parts = line->Split(',');
                    if (parts->Length < 6) continue;

                    int orderId;
                    double totalPrice;

                    if (Int32::TryParse(parts[0], orderId) && Double::TryParse(parts[5], totalPrice))
                    {
                        if (!orderIds->Contains(orderId))
                            orderIds->Add(orderId);
                        totalSalesAmount += totalPrice;
                    }
                }

                int totalCustomers = 0;
                if (File::Exists(customerFile))
                {
                    array<String^>^ customerLines = File::ReadAllLines(customerFile);
                    for each (String ^ line in customerLines)
                    {
                        if (!String::IsNullOrWhiteSpace(line))
                            totalCustomers++;
                    }
                }

                int totalProducts = 0;
                if (File::Exists(productFile))
                {
                    array<String^>^ productLines = File::ReadAllLines(productFile);
                    for each (String ^ line in productLines)
                    {
                        if (!String::IsNullOrWhiteSpace(line))
                            totalProducts++;
                    }
                }

                labelTotalSales->Text = "Total Sales: " + orderIds->Count.ToString();
                labelTotalAmount->Text = "Total Sales Amount: " + totalSalesAmount.ToString("F2");
                labelTotalCustomers->Text = "Total Customers: " + totalCustomers.ToString();
                labelTotalProducts->Text = "Total Products: " + totalProducts.ToString();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error loading dashboard data: " + ex->Message);
            }
        }

        System::Void form_Dashboard_Load(System::Object^ sender, System::EventArgs^ e)
        {
            this->ControlBox = false;
            LoadDashboardData();
        }

        System::Void buttonRefresh_Click(System::Object^ sender, System::EventArgs^ e)
        {
            LoadDashboardData();
        }
    };
} // namespace PIMS
