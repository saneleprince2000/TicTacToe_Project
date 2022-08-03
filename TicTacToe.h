#pragma once
#include "TicTacToe.h"
#include "cstdlib"
#include <string>
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include<ctime>
#include<time.h>

using namespace System::Web;
using namespace System::Net;
using namespace System::Net::Mime;
using namespace System::Net::Mail;



namespace TicTacToe {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Timers;


	//using namespace TicTacToe;
	/// <summary>
	/// Summary for TicTacToe
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form

	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;












		   MySqlDataReader^ sqlRd;

	public:
		TicTacToe(void)
		{
			InitializeComponent();

			lblPlayerX->Text = "0";
			lblPlayerO->Text = "0";
			

			if (MessageBox::Show("Do you want to play the game?", "TicTacToe", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			}
			else {
				Application::Exit();
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnTic9;
	private: System::Windows::Forms::Button^ btnTic8;
	private: System::Windows::Forms::Button^ btnTic7;
	private: System::Windows::Forms::Button^ btnTic6;
	private: System::Windows::Forms::Button^ btnTic5;
	private: System::Windows::Forms::Button^ btnTic4;
	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	public: System::Windows::Forms::Button^ btnTic10;
	private: System::Windows::Forms::Button^ btnTik2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lblPlayerO;
	private: System::Windows::Forms::Label^ lblPlayerX;
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ TextBox1;
	private: System::Windows::Forms::TextBox^ TextBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;
	public:


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->btnTik2 = (gcnew System::Windows::Forms::Button());
			this->btnTic10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(672, 59);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TicTacToe::panel1_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(534, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 36);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Help\r\n";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TicTacToe::button2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(177, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Tic Tac Toe Game";
			this->label5->Click += gcnew System::EventHandler(this, &TicTacToe::label5_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->btnTik2);
			this->panel2->Controls->Add(this->btnTic10);
			this->panel2->Location = System::Drawing::Point(2, 67);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(662, 422);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(6, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TicTacToe::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->btnTic9);
			this->panel4->Controls->Add(this->btnTic8);
			this->panel4->Controls->Add(this->btnTic7);
			this->panel4->Controls->Add(this->btnTic6);
			this->panel4->Controls->Add(this->btnTic5);
			this->panel4->Controls->Add(this->btnTic4);
			this->panel4->Controls->Add(this->btnTic3);
			this->panel4->Controls->Add(this->btnTic2);
			this->panel4->Controls->Add(this->btnTic1);
			this->panel4->Location = System::Drawing::Point(3, 21);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(245, 251);
			this->panel4->TabIndex = 1;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(161, 161);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(81, 83);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(82, 161);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(81, 83);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(3, 161);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(81, 83);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(161, 82);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(81, 81);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(82, 82);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(81, 81);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(3, 82);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(81, 81);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(161, 4);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(81, 81);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(82, 4);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(81, 81);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &TicTacToe::button2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(3, 4);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(81, 81);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(251, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(408, 401);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TicTacToe::panel3_Paint);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Location = System::Drawing::Point(3, 191);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(402, 207);
			this->panel6->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(394, 200);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Player Username";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Score";
			this->Column2->Name = L"Column2";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->TextBox2);
			this->panel5->Controls->Add(this->TextBox1);
			this->panel5->Controls->Add(this->lblPlayerO);
			this->panel5->Controls->Add(this->lblPlayerX);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(3, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(402, 178);
			this->panel5->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Player 1 Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Playe 2 username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(349, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Score";
			// 
			// TextBox2
			// 
			this->TextBox2->BackColor = System::Drawing::SystemColors::Window;
			this->TextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->TextBox2->Location = System::Drawing::Point(6, 126);
			this->TextBox2->Name = L"TextBox2";
			this->TextBox2->Size = System::Drawing::Size(220, 24);
			this->TextBox2->TabIndex = 5;
			this->TextBox2->Text = L"Enter Username";
			this->TextBox2->TextChanged += gcnew System::EventHandler(this, &TicTacToe::TextBox2_TextChanged);
			this->TextBox2->Enter += gcnew System::EventHandler(this, &TicTacToe::TextBox2_Enter);
			this->TextBox2->Leave += gcnew System::EventHandler(this, &TicTacToe::TextBox2_Leave);
			// 
			// TextBox1
			// 
			this->TextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->TextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->TextBox1->Location = System::Drawing::Point(6, 49);
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(220, 24);
			this->TextBox1->TabIndex = 4;
			this->TextBox1->Text = L"Enter Username";
			this->TextBox1->TextChanged += gcnew System::EventHandler(this, &TicTacToe::TextBox1_TextChanged);
			this->TextBox1->Enter += gcnew System::EventHandler(this, &TicTacToe::TextBox1_Enter);
			this->TextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TicTacToe::TextBox1_KeyDown);
			this->TextBox1->Leave += gcnew System::EventHandler(this, &TicTacToe::TextBox1_Leave);
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblPlayerO->Location = System::Drawing::Point(348, 122);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(46, 28);
			this->lblPlayerO->TabIndex = 3;
			this->lblPlayerO->Text = L"0";
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblPlayerX->Location = System::Drawing::Point(348, 45);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(46, 28);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &TicTacToe::label4_Click);
			// 
			// btnTik2
			// 
			this->btnTik2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTik2->Enabled = false;
			this->btnTik2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTik2->Location = System::Drawing::Point(6, 330);
			this->btnTik2->Name = L"btnTik2";
			this->btnTik2->Size = System::Drawing::Size(235, 36);
			this->btnTik2->TabIndex = 9;
			this->btnTik2->Text = L"New Game";
			this->btnTik2->UseVisualStyleBackColor = false;
			this->btnTik2->Click += gcnew System::EventHandler(this, &TicTacToe::btnTik2_Click);
			// 
			// btnTic10
			// 
			this->btnTic10->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTic10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic10->Location = System::Drawing::Point(6, 278);
			this->btnTic10->Name = L"btnTic10";
			this->btnTic10->Size = System::Drawing::Size(235, 36);
			this->btnTic10->TabIndex = 10;
			this->btnTic10->Text = L"Reset";
			this->btnTic10->UseVisualStyleBackColor = false;
			this->btnTic10->Click += gcnew System::EventHandler(this, &TicTacToe::btnTic10_Click);
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(676, 492);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"TicTacToe";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &TicTacToe::TicTacToe_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion

		void Enable_False()
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
			btnTic10->Enabled = false;
			btnTik2->Enabled = false;
		}
		void score()

		{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
				
			}
			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{

				String^ firstName = TextBox1->Text;
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic1->BackColor = System::Drawing::Color::Blue;
				btnTic5->BackColor = System::Drawing::Color::Blue;
				btnTic9->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic2->BackColor = System::Drawing::Color::Lime;
				btnTic5->BackColor = System::Drawing::Color::Lime;
				btnTic8->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic4->BackColor = System::Drawing::Color::DeepPink;
				btnTic5->BackColor = System::Drawing::Color::DeepPink;
				btnTic6->BackColor = System::Drawing::Color::DeepPink;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic7->BackColor = System::Drawing::Color::Brown;
				btnTic8->BackColor = System::Drawing::Color::Brown;
				btnTic9->BackColor = System::Drawing::Color::Brown;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic3->BackColor = System::Drawing::Color::Navy;
				btnTic5->BackColor = System::Drawing::Color::Navy;
				btnTic7->BackColor = System::Drawing::Color::Navy;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				String^ firstName = TextBox1->Text;
				btnTic3->BackColor = System::Drawing::Color::MediumAquamarine;
				btnTic6->BackColor = System::Drawing::Color::MediumAquamarine;
				btnTic9->BackColor = System::Drawing::Color::MediumAquamarine;
				MessageBox::Show(" The Winner is " + firstName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}

			//======================================================================

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{

				String^ secondName = TextBox2->Text;
				btnTic1->BackColor = System::Drawing::Color::Green;
				btnTic2->BackColor = System::Drawing::Color::Green;
				btnTic3->BackColor = System::Drawing::Color::Green;

				MessageBox::Show(" The Winner is " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic1->BackColor = System::Drawing::Color::Orange;
				btnTic4->BackColor = System::Drawing::Color::Orange;
				btnTic7->BackColor = System::Drawing::Color::Orange;

				MessageBox::Show(" The Winner is " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic1->BackColor = System::Drawing::Color::DarkOliveGreen;
				btnTic5->BackColor = System::Drawing::Color::DarkOliveGreen;
				btnTic9->BackColor = System::Drawing::Color::DarkOliveGreen;
				MessageBox::Show(" The Winner is " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic2->BackColor = System::Drawing::Color::OliveDrab;
				btnTic5->BackColor = System::Drawing::Color::OliveDrab;
				btnTic8->BackColor = System::Drawing::Color::OliveDrab;
				MessageBox::Show(" The Winner is " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic4->BackColor = System::Drawing::Color::MediumVioletRed;
				btnTic5->BackColor = System::Drawing::Color::MediumVioletRed;
				btnTic6->BackColor = System::Drawing::Color::MediumVioletRed;
				MessageBox::Show(" The Winner is  " + "   "  +  secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic7->BackColor = System::Drawing::Color::LavenderBlush;
				btnTic8->BackColor = System::Drawing::Color::LavenderBlush;
				btnTic9->BackColor = System::Drawing::Color::LavenderBlush;
				MessageBox::Show(" The Winner is  " +secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic3->BackColor = System::Drawing::Color::RoyalBlue;
				btnTic5->BackColor = System::Drawing::Color::RoyalBlue;
				btnTic7->BackColor = System::Drawing::Color::RoyalBlue;
				MessageBox::Show(" The Winner is  " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				String^ secondName = TextBox2->Text;
				btnTic3->BackColor = System::Drawing::Color::SeaGreen;
				btnTic6->BackColor = System::Drawing::Color::SeaGreen;
				btnTic9->BackColor = System::Drawing::Color::SeaGreen;
				MessageBox::Show(" The Winner is  " + secondName, "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{

				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{

				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{

				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{

				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "X" && btnTic4->Text == "X" && btnTic5->Text == "O" && btnTic6->Text == "O" && btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "O" && btnTic4->Text == "O" && btnTic5->Text == "X" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "X" && btnTic2->Text == "O" && btnTic3->Text == "X" && btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "X" && btnTic7->Text == "O" && btnTic8->Text == "X" && btnTic9->Text == "O") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
			else if (btnTic1->Text == "O" && btnTic2->Text == "X" && btnTic3->Text == "O" && btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "O" && btnTic7->Text == "X" && btnTic8->Text == "O" && btnTic9->Text == "X") {
				MessageBox::Show("The Game ended with a draw", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone);
				Enable_False();
				btnTik2->Enabled = true;
				btnTic10->Enabled = true;
			}
		}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username"|| TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			
		}
		else {
			if (checker == false) {
				btnTic2->Text = "X";
				checker = true;
			}
			else {
				btnTic2->Text = "O";
				checker = false;

			}
			score();
			btnTic2->Enabled = false;
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TicTacToe_Load(System::Object^ sender, System::EventArgs^ e) {
		
		



	}
	private: System::Void btnTik2_Click(System::Object^ sender, System::EventArgs^ e) {

		
		if(lblPlayerX->Text=="0"|| lblPlayerO->Text=="0"){
			
		}
		
		else {
			
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->Cells[0]->Value = TextBox1->Text;
			dataGridView1->Rows[0]->Cells[1]->Value = lblPlayerX->Text;
			
			dataGridView1->Rows->Add();
			dataGridView1->Rows[1]->Cells[0]->Value = TextBox2->Text;
			dataGridView1->Rows[1]->Cells[1]->Value = lblPlayerO->Text;
			
		}
		

		try {

			System::String^ constring = L"Server=127.0.0.1;Uid=root;Pwd=;Database=tictactoe;port=3307;username=root;password=**";
			MySqlConnection^ con = gcnew MySqlConnection(constring);


			String^ PlayerName1 = TextBox1->Text;
			int Score1 = Int32::Parse(lblPlayerX->Text);
			String^ PlayerName2 = TextBox2->Text;
			int Score2 = Int32::Parse(lblPlayerO->Text);


			//MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values('" + PlayerName1 + "' ,'" + email + "' ,'" + Score1 + "','" + PlayerName2 + "' ,'" + email1 + "', '" + Score2 + "')", con);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values('" + PlayerName1 + "' ,'" + Score1 + "','" + PlayerName2 + "' ,'" + Score2 + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Players Info Saved");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		};
		



		/*MailMessage^ mail = gcnew MailMessage(textBox3->Text)

	SmtpClient ^ client = gcnew SmtpClient(textBox3_SMTP->Text);
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential(textBox3->Text);
		client->EnableSsl = true;
		client->Send(mail);
		MessageBox::Show("Mail Sent!", "Success", MessageBoxButtons::OK);

		MailMessage^ mail1 = gcnew MailMessage(textBox4->Text)

		SmtpClient ^ client = gcnew SmtpClient(textBox4_SMTP->Text);
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential(textBox4->Text);
		client->EnableSsl = true;
		client->Send(mail1);
		MessageBox::Show("Mail Sent!", "Success", MessageBoxButtons::OK);
		
		MailMessage^ msg=gcnew MailMessage("Thanks for playing TicTacToe hope you enjoyed it")*/
		





		btnTic1->Enabled = true;
		btnTic2->Enabled = true;
		btnTic3->Enabled = true;
		btnTic4->Enabled = true;
		btnTic5->Enabled = true;
		btnTic6->Enabled = true;
		btnTic7->Enabled = true;
		btnTic8->Enabled = true;
		btnTic9->Enabled = true;


		btnTic1->Text = "";
		btnTic2->Text = "";
		btnTic3->Text = "";
		btnTic4->Text = "";
		btnTic5->Text = "";
		btnTic6->Text = "";
		btnTic7->Text = "";
		btnTic8->Text = "";
		btnTic9->Text = "";
		lblPlayerX->Text = "0";
		lblPlayerO->Text = "0";
		TextBox1->Text = "";
		TextBox2->Text = "";
		lblPlayerO->Text = "0";

		btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

	}
	private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

				MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
				
				
			}
			else{
		
	    if (checker == false) {
			btnTic1->Text = "X";
			checker = true;
		}
		else {
			btnTic1->Text = "O";
			checker = false;

		}
		score();
		btnTic1->Enabled = false;
			}
	}
	private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			

		}
		else {
			if (checker == false) {
				btnTic3->Text = "X";
				checker = true;
			}
			else {
				btnTic3->Text = "O";
				checker = false;

			}
			score();
			btnTic3->Enabled = false;
		}
	}
	private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			
		}
		else {
			if (checker == false) {
				btnTic4->Text = "X";
				checker = true;
			}
			else {
				btnTic4->Text = "O";
				checker = false;

			}
			score();
			btnTic4->Enabled = false;
		}
	}
	private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			

		}
		else {
			if (checker == false) {
				btnTic5->Text = "X";
				checker = true;
			}
			else {
				btnTic5->Text = "O";
				checker = false;

			}
			score();
			btnTic5->Enabled = false;
		}
	}
	private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			
		}
		else {
			if (checker == false) {
				btnTic6->Text = "X";
				checker = true;
			}
			else {
				btnTic6->Text = "O";
				checker = false;

			}
			score();
			btnTic6->Enabled = false;
		}
	}
	private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			
		}
		else {
			if (checker == false) {
				btnTic7->Text = "X";
				checker = true;
			}
			else {
				btnTic7->Text = "O";
				checker = false;

			}
			score();
			btnTic7->Enabled = false;
		}
	}
	private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
			
		}
		else {
			if (checker == false) {
				btnTic8->Text = "X";
				checker = true;
			}
			else {
				btnTic8->Text = "O";
				checker = false;

			}
			score();
			btnTic8->Enabled = false;
		}
	}
	private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBox1->Text == "Enter Username" || TextBox1->Text == "" || TextBox2->Text == "Enter Username" || TextBox2->Text == "") {

			MessageBox::Show("Usernames must be provided!!", "Warning", MessageBoxButtons::OK);
		
		}
		else {
			if (checker == false) {
				btnTic9->Text = "X";
				checker = true;
			}
			else {
				btnTic9->Text = "O";
				checker = false;

			}
			score();
			btnTic9->Enabled = false;
		}
	}


	private: System::Void btnTic10_Click(System::Object^ sender, System::EventArgs^ e) {
		btnTic1->Enabled = true;
		btnTic2->Enabled = true;
		btnTic3->Enabled = true;
		btnTic4->Enabled = true;
		btnTic5->Enabled = true;
		btnTic6->Enabled = true;
		btnTic7->Enabled = true;
		btnTic8->Enabled = true;
		btnTic9->Enabled = true;


		btnTic1->Text = "";
		btnTic2->Text = "";
		btnTic3->Text = "";
		btnTic4->Text = "";
		btnTic5->Text = "";
		btnTic6->Text = "";
		btnTic7->Text = "";
		btnTic8->Text = "";
		btnTic9->Text = "";

		btnTik2->Enabled = true;
		btnTic10->Enabled = true;

		btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to close the game?", "TicTacToe", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {


			try {


				System::String^ constring = L"Server=127.0.0.1;Uid=root;Pwd=;Database=tictactoe;port=3307;username=root;password=**";

				MySqlConnection^ con = gcnew MySqlConnection(constring);



				String^ PlayerName1 = TextBox1->Text;
				
				int Score1 = Int32::Parse(lblPlayerX->Text);
				String^ PlayerName2 = TextBox2->Text;
				
				int Score2 = Int32::Parse(lblPlayerO->Text);


				//MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values('" + PlayerName1 + "' ,'" + email + "' ,'" + Score1 + "','" + PlayerName2 + "' ,'" + email1 + "', '" + Score2 + "')", con);
				MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values('" + PlayerName1 + "' ,'" + Score1 + "','" + PlayerName2 + "' ,'" + Score2 + "')", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("User Info Saved");
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			};
			Application::Exit();

		}

	}


	private: System::Void TextBox1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void TextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("First Player needs to enter a name and a Second Player and they will be given 'X' and 'O' to mark their respective cells. The game starts with one of the players and the game ends when one of the players has one whole row/ column/ diagonal filled with his/her respective character ('O' or 'X'). If no one wins, then the game is said to be draw.", "Help", MessageBoxButtons::OK, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		}
	}


	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (TextBox1->Text == "Enter Username") {
			TextBox1->Text = "";
			TextBox1->ForeColor = BackColor.Black;
		}
	}
private: System::Void TextBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox2->Text == "Enter Username") {
		TextBox2->Text = "";
		TextBox2->ForeColor = BackColor.Black;
	}
}
private: System::Void TextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox1->Text == "") {
		TextBox1->Text = "Enter Username";
		TextBox1->ForeColor = BackColor.Silver;
	}
}
private: System::Void TextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox2->Text == "") {
		TextBox2->Text = "Enter Username";
		TextBox2->ForeColor = BackColor.Silver;
	}
}
private: System::Void TextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	
}
};
}

