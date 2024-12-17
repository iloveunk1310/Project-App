#pragma once
#include "About.h"
#include "func.h"
#include "history.h"
//#include "MyForm.h"
namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			label1->BackColor = System::Drawing::Color::Transparent;
			label2->BackColor = System::Drawing::Color::Transparent;
			//textBox1-> = System::Drawing::Color::Transparent;
			//textBox2->BackColor = System::Drawing::Color::Transparent;
			button3->BackColor = System::Drawing::Color::Transparent;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ command;
	private: System::Windows::Forms::Button^ button3;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->command = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L".VnBook-AntiquaH", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(46, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(601, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Remote control computer by email";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(62, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"New command ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::IndianRed;
			this->button2->Location = System::Drawing::Point(502, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Log out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(72, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 28);
			this->button1->TabIndex = 13;
			this->button1->Text = L"History";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Salmon;
			this->label3->Location = System::Drawing::Point(293, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 15);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Connecting...";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"chillguy.jpg";
			this->pictureBox1->Location = System::Drawing::Point(296, 119);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(351, 248);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// command
			// 
			this->command->AutoSize = true;
			this->command->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->command->Location = System::Drawing::Point(100, 133);
			this->command->Name = L"command";
			this->command->Size = System::Drawing::Size(0, 16);
			this->command->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(280, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 28);
			this->button3->TabIndex = 19;
			this->button3->Text = L"About us";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(706, 454);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->command);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Server";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::MyForm1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to log out?", "Exit Promt", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Form::Close();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->ImageLocation = L"chillguy.jpg";
		struct sockaddr_in srv;
		WSADATA ws;
		int nRET = 0;
		if (WSAStartup(MAKEWORD(2, 2), &ws) < 0) {
			label3->Text = L"Failed to connect";
		}
		srv.sin_family = AF_INET;
		srv.sin_port = htons(PORT);
		srv.sin_addr.s_addr = INADDR_ANY;
		memset(&(srv.sin_zero), 0, 8);
		int lenh = 0;
		int t = connet_and_send_file(srv, lenh);
		if (t < 0)
			label3->Text = L"Failed to connect";
		WSACleanup();
		if (lenh == 1)
			command->Text = L"List App: Successful";
		else if (lenh == 2) {
			command->Text = L"Start App: Successful";
			pictureBox1->ImageLocation = L"screenshot.bmp";
		}
		else if (lenh == 22)
			command->Text = L"Stop App: Successful";
		else if (lenh == 3)
			command->Text = L"List Service: Successful";
		else if (lenh == 4)
			command->Text = L"Start Service: Successful";
		else if (lenh == 44)
			command->Text = L"Stop Service: Successful";
		else if (lenh == 5) {
			command->Text = L"ScreenShot: Successful";
			pictureBox1->ImageLocation = L"screenshot.bmp";
		}
		else if (lenh == 6) {
			command->Text = L"Start Webcam: Successful";
			pictureBox1->ImageLocation = L"screenshot.bmp";
		}
		else if (lenh == 66)
			command->Text = L"Stop Webcam: Successful";
		else if (lenh == 7)
			command->Text = L"Shutdown: Successful";
		else if (lenh == 77)
			command->Text = L"Sleep: Successful";
		else if (lenh == 8)
			command->Text = L"Take File: Successful";
		else if (lenh == 88)
			command->Text = L"Delete File: Successful";
		else if (lenh == 9)
			command->Text = L"Copy File: Successful";
		else if (lenh == 99)
			command->Text = L"Move File: Successful";
	}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//label2_Click(sender, e);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		history^ his = gcnew history;
		his->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ newForm = gcnew About;
		newForm->Show();
	}
};
}


