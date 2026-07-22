#pragma once
#include "DashboardForm.h"
//#include "LoginForm.h" 
#include "UserForm.h"
#include "CustomerForm.h"
#include "ProductForm.h"
#include "SellForm.h"
//#include <cstddef>
namespace PIMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	ref class LoginForm;
	public ref class MainForm : public System::Windows::Forms::Form
	{
		DashboardForm^ dashboard;
		LoginForm^ login;
		UserForm^ user;
		CustomerForm^ customer;
		ProductForm^ product;
		SellForm^ sell;


	public:
		MainForm(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
			if (dashboard == nullptr) {
				dashboard = gcnew DashboardForm();
				dashboard->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::Dashboard_FormClosed);
				dashboard->MdiParent = this;
				dashboard->Show();
			}
			else {
				dashboard->Activate();
			}
		}

	protected:
		/// Clean up any resources being used.
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnHam;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Menu;
	private: System::Windows::Forms::Button^ pnProduct;
	private: System::Windows::Forms::Button^ pnSetting;
	private: System::Windows::Forms::Button^ pnCustomer;
	private: System::Windows::Forms::Button^ pnSell;
	private: System::Windows::Forms::Button^ pnUser;
	private: System::Windows::Forms::Button^ pnDashboard;
	private: System::Windows::Forms::FlowLayoutPanel^ Sidebar;
	private: System::Windows::Forms::FlowLayoutPanel^ MenuContainer;
	private: System::Windows::Forms::Button^ pnLogout;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Timer^ MenuTransition;
	private: System::Windows::Forms::Timer^ SideBarTransition;
	private: System::Windows::Forms::PictureBox^ imbtnClose;

	private: System::ComponentModel::IContainer^ components;
	private:


		/// Required designer variable.

#pragma region Windows Form Designer generated code
	/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->imbtnClose = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnHam = (gcnew System::Windows::Forms::PictureBox());
			this->Menu = (gcnew System::Windows::Forms::Button());
			this->pnProduct = (gcnew System::Windows::Forms::Button());
			this->pnSetting = (gcnew System::Windows::Forms::Button());
			this->pnCustomer = (gcnew System::Windows::Forms::Button());
			this->pnSell = (gcnew System::Windows::Forms::Button());
			this->pnUser = (gcnew System::Windows::Forms::Button());
			this->pnDashboard = (gcnew System::Windows::Forms::Button());
			this->Sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnLogout = (gcnew System::Windows::Forms::Button());
			this->MenuContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->MenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->SideBarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imbtnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->BeginInit();
			this->Sidebar->SuspendLayout();
			this->MenuContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->imbtnClose);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnHam);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1071, 45);
			this->panel1->TabIndex = 0;
			// 
			// imbtnClose
			// 
			this->imbtnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imbtnClose.Image")));
			this->imbtnClose->Location = System::Drawing::Point(1024, 2);
			this->imbtnClose->Name = L"imbtnClose";
			this->imbtnClose->Size = System::Drawing::Size(44, 40);
			this->imbtnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imbtnClose->TabIndex = 3;
			this->imbtnClose->TabStop = false;
			this->imbtnClose->Click += gcnew System::EventHandler(this, &MainForm::imbtnClose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(401, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PHARMACY INVENTORY MANAGEMENT SYSTEM";
			// 
			// btnHam
			// 
			this->btnHam->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHam.Image")));
			this->btnHam->Location = System::Drawing::Point(3, 2);
			this->btnHam->Name = L"btnHam";
			this->btnHam->Size = System::Drawing::Size(45, 45);
			this->btnHam->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnHam->TabIndex = 1;
			this->btnHam->TabStop = false;
			this->btnHam->Click += gcnew System::EventHandler(this, &MainForm::btnHam_Click);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->Menu->ForeColor = System::Drawing::Color::White;
			this->Menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Menu.Image")));
			this->Menu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Margin = System::Windows::Forms::Padding(0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(224, 42);
			this->Menu->TabIndex = 6;
			this->Menu->Text = L"               Menu";
			this->Menu->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Menu->UseVisualStyleBackColor = false;
			this->Menu->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// pnProduct
			// 
			this->pnProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnProduct->ForeColor = System::Drawing::Color::White;
			this->pnProduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnProduct.Image")));
			this->pnProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnProduct->Location = System::Drawing::Point(3, 99);
			this->pnProduct->Name = L"pnProduct";
			this->pnProduct->Size = System::Drawing::Size(224, 42);
			this->pnProduct->TabIndex = 8;
			this->pnProduct->Text = L"               Products";
			this->pnProduct->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnProduct->UseVisualStyleBackColor = false;
			this->pnProduct->Click += gcnew System::EventHandler(this, &MainForm::pnProduct_Click);
			// 
			// pnSetting
			// 
			this->pnSetting->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnSetting->ForeColor = System::Drawing::Color::White;
			this->pnSetting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnSetting.Image")));
			this->pnSetting->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnSetting->Location = System::Drawing::Point(3, 243);
			this->pnSetting->Name = L"pnSetting";
			this->pnSetting->Size = System::Drawing::Size(224, 42);
			this->pnSetting->TabIndex = 7;
			this->pnSetting->Text = L"               Setting";
			this->pnSetting->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnSetting->UseVisualStyleBackColor = false;
			this->pnSetting->Click += gcnew System::EventHandler(this, &MainForm::pnSetting_Click);
			// 
			// pnCustomer
			// 
			this->pnCustomer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnCustomer->ForeColor = System::Drawing::Color::White;
			this->pnCustomer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnCustomer.Image")));
			this->pnCustomer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnCustomer->Location = System::Drawing::Point(3, 147);
			this->pnCustomer->Name = L"pnCustomer";
			this->pnCustomer->Size = System::Drawing::Size(224, 42);
			this->pnCustomer->TabIndex = 5;
			this->pnCustomer->Text = L"               Customer";
			this->pnCustomer->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnCustomer->UseVisualStyleBackColor = false;
			this->pnCustomer->Click += gcnew System::EventHandler(this, &MainForm::pnCustomer_Click);
			// 
			// pnSell
			// 
			this->pnSell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnSell->ForeColor = System::Drawing::Color::White;
			this->pnSell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnSell.Image")));
			this->pnSell->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnSell->Location = System::Drawing::Point(3, 195);
			this->pnSell->Name = L"pnSell";
			this->pnSell->Size = System::Drawing::Size(224, 42);
			this->pnSell->TabIndex = 4;
			this->pnSell->Text = L"               Sell";
			this->pnSell->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnSell->UseVisualStyleBackColor = false;
			this->pnSell->Click += gcnew System::EventHandler(this, &MainForm::pnSell_Click);
			// 
			// pnUser
			// 
			this->pnUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnUser->ForeColor = System::Drawing::Color::White;
			this->pnUser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnUser.Image")));
			this->pnUser->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnUser->Location = System::Drawing::Point(3, 51);
			this->pnUser->Name = L"pnUser";
			this->pnUser->Size = System::Drawing::Size(224, 42);
			this->pnUser->TabIndex = 3;
			this->pnUser->Text = L"               User";
			this->pnUser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnUser->UseVisualStyleBackColor = false;
			this->pnUser->Click += gcnew System::EventHandler(this, &MainForm::pnUser_Click);
			// 
			// pnDashboard
			// 
			this->pnDashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnDashboard->ForeColor = System::Drawing::Color::White;
			this->pnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnDashboard.Image")));
			this->pnDashboard->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnDashboard->Location = System::Drawing::Point(3, 3);
			this->pnDashboard->Name = L"pnDashboard";
			this->pnDashboard->Size = System::Drawing::Size(224, 42);
			this->pnDashboard->TabIndex = 2;
			this->pnDashboard->Text = L"               Dashboard";
			this->pnDashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnDashboard->UseVisualStyleBackColor = false;
			this->pnDashboard->Click += gcnew System::EventHandler(this, &MainForm::pnDashboard_Click);
			// 
			// Sidebar
			// 
			this->Sidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->Sidebar->Controls->Add(this->pnDashboard);
			this->Sidebar->Controls->Add(this->pnUser);
			this->Sidebar->Controls->Add(this->pnProduct);
			this->Sidebar->Controls->Add(this->pnCustomer);
			this->Sidebar->Controls->Add(this->pnSell);
			this->Sidebar->Controls->Add(this->pnSetting);
			this->Sidebar->Controls->Add(this->pnLogout);
			this->Sidebar->Controls->Add(this->MenuContainer);
			this->Sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->Sidebar->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->Sidebar->Location = System::Drawing::Point(0, 45);
			this->Sidebar->Name = L"Sidebar";
			this->Sidebar->Size = System::Drawing::Size(229, 516);
			this->Sidebar->TabIndex = 1;
			// 
			// pnLogout
			// 
			this->pnLogout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pnLogout->ForeColor = System::Drawing::Color::White;
			this->pnLogout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnLogout.Image")));
			this->pnLogout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnLogout->Location = System::Drawing::Point(3, 291);
			this->pnLogout->Name = L"pnLogout";
			this->pnLogout->Size = System::Drawing::Size(224, 42);
			this->pnLogout->TabIndex = 9;
			this->pnLogout->Text = L"               Logout";
			this->pnLogout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pnLogout->UseVisualStyleBackColor = false;
			this->pnLogout->Click += gcnew System::EventHandler(this, &MainForm::pnLogout_Click);
			// 
			// MenuContainer
			// 
			this->MenuContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->MenuContainer->Controls->Add(this->Menu);
			this->MenuContainer->Controls->Add(this->button8);
			this->MenuContainer->Controls->Add(this->button9);
			this->MenuContainer->Location = System::Drawing::Point(0, 336);
			this->MenuContainer->Margin = System::Windows::Forms::Padding(0);
			this->MenuContainer->Name = L"MenuContainer";
			this->MenuContainer->Size = System::Drawing::Size(225, 42);
			this->MenuContainer->TabIndex = 2;
			this->MenuContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::MenuContainer_Paint);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(0, 42);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(224, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"               Sub Menu 1";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(0, 84);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(224, 42);
			this->button9->TabIndex = 8;
			this->button9->Text = L"               Sub Menu 2";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// MenuTransition
			// 
			this->MenuTransition->Interval = 10;
			this->MenuTransition->Tick += gcnew System::EventHandler(this, &MainForm::MenuTransition_Tick);
			// 
			// SideBarTransition
			// 
			this->SideBarTransition->Interval = 10;
			this->SideBarTransition->Tick += gcnew System::EventHandler(this, &MainForm::SideBarTransition_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1071, 561);
			this->Controls->Add(this->Sidebar);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->IsMdiContainer = true;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imbtnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->EndInit();
			this->Sidebar->ResumeLayout(false);
			this->MenuContainer->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Menu Transition Time handler Code
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuTransition->Start();
}
	   bool menuExpend = false;
private: System::Void MenuTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (menuExpend == false) {
		MenuContainer->Height += 10;
		if(MenuContainer->Height >= 128){
		MenuTransition->Stop();
		menuExpend = true;
		}
	}
	else {
		MenuContainer->Height -= 10;
		if (MenuContainer->Height <= 42) {
			MenuTransition->Stop();
			menuExpend = false;
		}
	}
}
	  // Side bar time tool handler function
	   bool sidebarExpend = true;
private: System::Void SideBarTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (sidebarExpend) {
		Sidebar->Width -= 5;
		if (Sidebar->Width <= 52) {
			sidebarExpend = false;
			SideBarTransition->Stop();

			pnDashboard->Width = Sidebar->Width;
			pnUser->Width = Sidebar->Width;
			pnCustomer->Width = Sidebar->Width;
			pnLogout->Width = Sidebar->Width;
			pnProduct->Width = Sidebar->Width;
			pnSell->Width = Sidebar->Width;
			pnSetting->Width = Sidebar->Width;
			MenuContainer->Width = Sidebar->Width;
		}
	}
	else {
		Sidebar->Width += 5;
		if (Sidebar->Width >= 229)
		{
			sidebarExpend = true;
			SideBarTransition->Stop();

			pnDashboard->Width = Sidebar->Width;
			pnUser->Width = Sidebar->Width;
			pnCustomer->Width = Sidebar->Width;
			pnLogout->Width = Sidebar->Width;
			pnProduct->Width = Sidebar->Width;
			pnSell->Width = Sidebar->Width;
			pnSetting->Width = Sidebar->Width;
			MenuContainer->Width = Sidebar->Width;
		}
	}
}
private: System::Void btnHam_Click(System::Object^ sender, System::EventArgs^ e) {
	SideBarTransition->Start();

}

private: System::Void pnCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (customer == nullptr) {
		customer = gcnew CustomerForm();
		customer->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::Customer_FormClosed);
		customer->MdiParent = this;
		customer->Dock = DockStyle::Fill;
		customer->Show();
	}
	else {
		customer->Activate();
	}
}
private: System::Void Customer_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	customer = nullptr;
}
private: System::Void pnSell_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sell == nullptr) {
		sell = gcnew SellForm();
		sell->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::Sell_FormClosed);
		sell->MdiParent = this;
		sell->Dock = DockStyle::Fill;
		sell->Show();
	}
	else {
		sell->Activate();
	}
}
private: System::Void Sell_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	sell = nullptr;
}
private: System::Void pnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	if (product == nullptr) {
		product = gcnew ProductForm();
		product->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::Product_FormClosed);
		product->MdiParent = this;
		product->Dock = DockStyle::Fill;
		product->Show();
	}
	else {
		product->Activate();
	}

}
private: System::Void Product_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	product = nullptr;
}
private: System::Void pnSetting_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MenuContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

	   //Close Button of Program
private: System::Void imbtnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to exit?", "Exit Confirmation",MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes) 
		this->Close();
}
	   //Dashboard Button to open form
private: System::Void pnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dashboard == nullptr) { 
		dashboard = gcnew DashboardForm(); 
		dashboard->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::Dashboard_FormClosed);
		dashboard->MdiParent = this;
		dashboard->Show();
	}
	else {
		dashboard->Activate();
	}
}

private: System::Void Dashboard_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	dashboard = nullptr;
}
	   //User Button to open form
private: System::Void pnUser_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user == nullptr) {
		user = gcnew UserForm();
		user->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::User_FormClosed);
		user->MdiParent = this;
		user->Dock = DockStyle::Fill; 
		user->Show();
	}
	else {
		user->Activate();
	}
}
private: System::Void User_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	user = nullptr;
}
};
}
