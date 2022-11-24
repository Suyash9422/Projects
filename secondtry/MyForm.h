#pragma once
#include<stdlib.h>
#include<iostream>
namespace secondtry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ settingsbutton;
	private: System::Windows::Forms::Button^ Quitbutton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->settingsbutton = (gcnew System::Windows::Forms::Button());
			this->Quitbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(960, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PLAY";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// settingsbutton
			// 
			this->settingsbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->settingsbutton->Location = System::Drawing::Point(960, 600);
			this->settingsbutton->Name = L"settingsbutton";
			this->settingsbutton->Size = System::Drawing::Size(100, 38);
			this->settingsbutton->TabIndex = 1;
			this->settingsbutton->Text = L"SETTINGS";
			this->settingsbutton->UseVisualStyleBackColor = true;
			this->settingsbutton->Click += gcnew System::EventHandler(this, &MyForm::settingsbutton_Click);
			// 
			// Quitbutton
			// 
			this->Quitbutton->Cursor = System::Windows::Forms::Cursors::No;
			this->Quitbutton->Location = System::Drawing::Point(960, 660);
			this->Quitbutton->Name = L"Quitbutton";
			this->Quitbutton->Size = System::Drawing::Size(100, 38);
			this->Quitbutton->TabIndex = 2;
			this->Quitbutton->Text = L"QUIT";
			this->Quitbutton->UseVisualStyleBackColor = true;
			this->Quitbutton->Click += gcnew System::EventHandler(this, &MyForm::Quitbutton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1920, 1055);
			this->Controls->Add(this->Quitbutton);
			this->Controls->Add(this->settingsbutton);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Dinorun";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Quitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
private: System::Void settingsbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
