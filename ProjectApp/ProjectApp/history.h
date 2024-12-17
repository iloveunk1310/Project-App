#pragma once
#include "func.h"
namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for history
	/// </summary>
	public ref class history : public System::Windows::Forms::Form
	{
	public:
		history(void)
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
		~history()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ time;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ time5;

	private: System::Windows::Forms::Label^ dt5;

	private: System::Windows::Forms::Label^ cmd5;
	private: System::Windows::Forms::Label^ time4;


	private: System::Windows::Forms::Label^ dt4;

	private: System::Windows::Forms::Label^ cmd4;
	private: System::Windows::Forms::Label^ time3;


	private: System::Windows::Forms::Label^ dt3;

	private: System::Windows::Forms::Label^ cmd3;
	private: System::Windows::Forms::Label^ time2;

	private: System::Windows::Forms::Label^ dt2;

	private: System::Windows::Forms::Label^ cmd2;
	private: System::Windows::Forms::Label^ time1;

	private: System::Windows::Forms::Label^ dt1;

	private: System::Windows::Forms::Label^ cmd1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->time5 = (gcnew System::Windows::Forms::Label());
			this->dt5 = (gcnew System::Windows::Forms::Label());
			this->cmd5 = (gcnew System::Windows::Forms::Label());
			this->time4 = (gcnew System::Windows::Forms::Label());
			this->dt4 = (gcnew System::Windows::Forms::Label());
			this->cmd4 = (gcnew System::Windows::Forms::Label());
			this->time3 = (gcnew System::Windows::Forms::Label());
			this->dt3 = (gcnew System::Windows::Forms::Label());
			this->cmd3 = (gcnew System::Windows::Forms::Label());
			this->time2 = (gcnew System::Windows::Forms::Label());
			this->dt2 = (gcnew System::Windows::Forms::Label());
			this->cmd2 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::Label());
			this->dt1 = (gcnew System::Windows::Forms::Label());
			this->cmd1 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				112)));
			this->tableLayoutPanel1->Controls->Add(this->time5, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->dt5, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->cmd5, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->time4, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->dt4, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->cmd4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->time3, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->dt3, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->cmd3, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->time2, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->dt2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->cmd2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->time1, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->dt1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->cmd1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->time, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.03335F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.62659F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.83502F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.83502F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.83502F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.83502F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(397, 365);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// time5
			// 
			this->time5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time5->AutoSize = true;
			this->time5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time5->Location = System::Drawing::Point(341, 325);
			this->time5->Name = L"time5";
			this->time5->Size = System::Drawing::Size(0, 15);
			this->time5->TabIndex = 17;
			// 
			// dt5
			// 
			this->dt5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dt5->AutoSize = true;
			this->dt5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt5->Location = System::Drawing::Point(189, 325);
			this->dt5->Name = L"dt5";
			this->dt5->Size = System::Drawing::Size(0, 15);
			this->dt5->TabIndex = 16;
			// 
			// cmd5
			// 
			this->cmd5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd5->AutoSize = true;
			this->cmd5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd5->Location = System::Drawing::Point(47, 325);
			this->cmd5->Name = L"cmd5";
			this->cmd5->Size = System::Drawing::Size(0, 15);
			this->cmd5->TabIndex = 15;
			// 
			// time4
			// 
			this->time4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time4->AutoSize = true;
			this->time4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time4->Location = System::Drawing::Point(341, 263);
			this->time4->Name = L"time4";
			this->time4->Size = System::Drawing::Size(0, 15);
			this->time4->TabIndex = 14;
			// 
			// dt4
			// 
			this->dt4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dt4->AutoSize = true;
			this->dt4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt4->Location = System::Drawing::Point(189, 263);
			this->dt4->Name = L"dt4";
			this->dt4->Size = System::Drawing::Size(0, 15);
			this->dt4->TabIndex = 13;
			// 
			// cmd4
			// 
			this->cmd4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd4->AutoSize = true;
			this->cmd4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd4->Location = System::Drawing::Point(47, 263);
			this->cmd4->Name = L"cmd4";
			this->cmd4->Size = System::Drawing::Size(0, 15);
			this->cmd4->TabIndex = 9;
			// 
			// time3
			// 
			this->time3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time3->AutoSize = true;
			this->time3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time3->Location = System::Drawing::Point(341, 202);
			this->time3->Name = L"time3";
			this->time3->Size = System::Drawing::Size(0, 15);
			this->time3->TabIndex = 11;
			// 
			// dt3
			// 
			this->dt3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dt3->AutoSize = true;
			this->dt3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt3->Location = System::Drawing::Point(189, 202);
			this->dt3->Name = L"dt3";
			this->dt3->Size = System::Drawing::Size(0, 15);
			this->dt3->TabIndex = 10;
			// 
			// cmd3
			// 
			this->cmd3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd3->AutoSize = true;
			this->cmd3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd3->Location = System::Drawing::Point(47, 202);
			this->cmd3->Name = L"cmd3";
			this->cmd3->Size = System::Drawing::Size(0, 15);
			this->cmd3->TabIndex = 9;
			// 
			// time2
			// 
			this->time2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time2->AutoSize = true;
			this->time2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time2->Location = System::Drawing::Point(341, 141);
			this->time2->Name = L"time2";
			this->time2->Size = System::Drawing::Size(0, 15);
			this->time2->TabIndex = 8;
			// 
			// dt2
			// 
			this->dt2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dt2->AutoSize = true;
			this->dt2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt2->Location = System::Drawing::Point(189, 141);
			this->dt2->Name = L"dt2";
			this->dt2->Size = System::Drawing::Size(0, 15);
			this->dt2->TabIndex = 7;
			// 
			// cmd2
			// 
			this->cmd2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd2->AutoSize = true;
			this->cmd2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd2->Location = System::Drawing::Point(47, 141);
			this->cmd2->Name = L"cmd2";
			this->cmd2->Size = System::Drawing::Size(0, 15);
			this->cmd2->TabIndex = 6;
			// 
			// time1
			// 
			this->time1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time1->AutoSize = true;
			this->time1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time1->Location = System::Drawing::Point(341, 80);
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(0, 15);
			this->time1->TabIndex = 5;
			// 
			// dt1
			// 
			this->dt1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dt1->AutoSize = true;
			this->dt1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt1->Location = System::Drawing::Point(189, 80);
			this->dt1->Name = L"dt1";
			this->dt1->Size = System::Drawing::Size(0, 15);
			this->dt1->TabIndex = 4;
			// 
			// cmd1
			// 
			this->cmd1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd1->AutoSize = true;
			this->cmd1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd1->Location = System::Drawing::Point(47, 80);
			this->cmd1->Name = L"cmd1";
			this->cmd1->Size = System::Drawing::Size(0, 15);
			this->cmd1->TabIndex = 3;
			// 
			// time
			// 
			this->time->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(318, 19);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(46, 19);
			this->time->TabIndex = 2;
			this->time->Text = L"Time";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Command";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(163, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Detail";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(221, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &history::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(72, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &history::button2_Click);
			// 
			// history
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 429);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"history";
			this->Text = L"history";
			this->Load += gcnew System::EventHandler(this, &history::history_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		history::Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream ofs;
		ofs.open("history.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		if (MessageBox::Show("History cleared successfully. Restart history box to reload.", "Clear history", MessageBoxButtons::OK, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::OK)
			history::Close();
	}
	private: System::Void history_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<string> listcmd = readFileToVector("history.txt");
		if (listcmd.size() > 0) {
			vector<string> lst = tokenize(listcmd[0], ";");
			cmd1->Text = gcnew String(lst[0].c_str());
			dt1->Text = gcnew String(lst[1].c_str());
			time1->Text = gcnew String(lst[2].c_str());
		}
		if (listcmd.size() > 1) {
			vector<string> lst = tokenize(listcmd[1], ";");
			cmd2->Text = gcnew String(lst[0].c_str());
			dt2->Text = gcnew String(lst[1].c_str());
			time2->Text = gcnew String(lst[2].c_str());
		}
		if (listcmd.size() > 2) {
			vector<string> lst = tokenize(listcmd[2], ";");
			cmd3->Text = gcnew String(lst[0].c_str());
			dt3->Text = gcnew String(lst[1].c_str());
			time3->Text = gcnew String(lst[2].c_str());
		}
		if (listcmd.size() > 3) {
			vector<string> lst = tokenize(listcmd[3], ";");
			cmd4->Text = gcnew String(lst[0].c_str());
			dt4->Text = gcnew String(lst[1].c_str());
			time4->Text = gcnew String(lst[2].c_str());
		}
		if (listcmd.size() > 4) {
			vector<string> lst = tokenize(listcmd[4], ";");
			cmd5->Text = gcnew String(lst[0].c_str());
			dt5->Text = gcnew String(lst[1].c_str());
			time5->Text = gcnew String(lst[2].c_str());
		}
	}
};
}
