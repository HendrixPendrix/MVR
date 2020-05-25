#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include<vector>
using namespace std;
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage2;
	protected:
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;





	protected:

































	protected:

























	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox35);
			this->tabPage2->Controls->Add(this->textBox33);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBox34);
			this->tabPage2->Controls->Add(this->textBox32);
			this->tabPage2->Controls->Add(this->textBox31);
			this->tabPage2->Controls->Add(this->textBox27);
			this->tabPage2->Controls->Add(this->textBox28);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->textBox24);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(950, 508);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 26);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Установить оптимальное значение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(224, 261);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(560, 241);
			this->dataGridView3->TabIndex = 41;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 407);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 95);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Решение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(793, 386);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(149, 20);
			this->textBox35->TabIndex = 38;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(793, 358);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(149, 20);
			this->textBox33->TabIndex = 37;
			this->textBox33->Text = L"Достигнутая точность:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(796, 412);
			this->label4->MaximumSize = System::Drawing::Size(150, 20);
			this->label4->MinimumSize = System::Drawing::Size(150, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 40);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Максимальная разность двух приближений\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(790, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Половинный шаг";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(793, 455);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(149, 20);
			this->textBox34->TabIndex = 34;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(793, 332);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(149, 20);
			this->textBox32->TabIndex = 32;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(793, 295);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(149, 20);
			this->textBox31->TabIndex = 31;
			this->textBox31->Text = L"Число затраченных шагов:";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(135, 332);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(68, 20);
			this->textBox27->TabIndex = 30;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(7, 332);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(125, 20);
			this->textBox28->TabIndex = 29;
			this->textBox28->Text = L"Параметр w";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(790, 120);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(149, 20);
			this->textBox13->TabIndex = 27;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(790, 49);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(149, 20);
			this->textBox14->TabIndex = 26;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(790, 85);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(149, 18);
			this->textBox15->TabIndex = 25;
			this->textBox15->Text = L"Точность на выходе:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(790, 15);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(149, 20);
			this->textBox16->TabIndex = 24;
			this->textBox16->Text = L"Число затраченных шагов:";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(7, 295);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(125, 20);
			this->textBox17->TabIndex = 23;
			this->textBox17->Text = L"Точность метода";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(7, 261);
			this->textBox18->Margin = System::Windows::Forms::Padding(2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(125, 20);
			this->textBox18->TabIndex = 22;
			this->textBox18->Text = L"Ограничение шагов";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(7, 225);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(125, 20);
			this->textBox19->TabIndex = 21;
			this->textBox19->Text = L"Число разбиений по y:";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(7, 191);
			this->textBox20->Margin = System::Windows::Forms::Padding(2);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(125, 20);
			this->textBox20->TabIndex = 20;
			this->textBox20->Text = L"Число разбиений по x:";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(135, 295);
			this->textBox21->Margin = System::Windows::Forms::Padding(2);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(68, 20);
			this->textBox21->TabIndex = 19;
			this->textBox21->Text = L"1e-008";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(135, 261);
			this->textBox22->Margin = System::Windows::Forms::Padding(2);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(68, 20);
			this->textBox22->TabIndex = 18;
			this->textBox22->Text = L"500";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(135, 225);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(68, 20);
			this->textBox23->TabIndex = 17;
			this->textBox23->Text = L"3";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(135, 191);
			this->textBox24->Margin = System::Windows::Forms::Padding(2);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(68, 20);
			this->textBox24->TabIndex = 16;
			this->textBox24->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 180);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Вариант 10\r\n∆u(x,y)=-f(x,y)\t\t\r\nx∈(a,b), y∈(c,d)\r\na=-1   b=0   c=0   d=1\r\nu(a,y)=s"
				L"in(πy)\t\r\nu(b,y)=|sin(2πy)|\r\nu(x,c)=-x*(x+1)\t\r\nu(x,d)=-x*(x+1)\t\r\nf(x,y)=cosh(x2y)"
				L"\r\n\r\n";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(224, 9);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(562, 236);
			this->dataGridView2->TabIndex = 14;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox30);
			this->tabPage1->Controls->Add(this->textBox29);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox26);
			this->tabPage1->Controls->Add(this->textBox25);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(950, 508);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 26);
			this->button4->TabIndex = 43;
			this->button4->Text = L"Установить оптимальное значение";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox30
			// 
			this->textBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox30->Location = System::Drawing::Point(794, 211);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(149, 20);
			this->textBox30->TabIndex = 33;
			// 
			// textBox29
			// 
			this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox29->Location = System::Drawing::Point(794, 175);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(149, 20);
			this->textBox29->TabIndex = 32;
			this->textBox29->Text = L"Точность решения:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 90);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Вариант 10\r\n∆u(x,y)=-f(x,y)\t\t\r\nx∈(a,b), y∈((c,d)\r\na=1   b=0   c=0   d=1\r\nuтест(x,"
				L"y)=exp(xy)\r\n";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(135, 280);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(68, 20);
			this->textBox26->TabIndex = 15;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(7, 280);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(125, 20);
			this->textBox25->TabIndex = 14;
			this->textBox25->Text = L"Параметр w";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &Form1::textBox25_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox12->Location = System::Drawing::Point(794, 141);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(149, 20);
			this->textBox12->TabIndex = 13;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->Location = System::Drawing::Point(796, 71);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(147, 20);
			this->textBox11->TabIndex = 12;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->Location = System::Drawing::Point(794, 107);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(149, 18);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"Точность на выходе:";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->Location = System::Drawing::Point(794, 37);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(149, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"Число затраченных шагов:";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 245);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(125, 20);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"Точность метода";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 211);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"Ограничение шагов";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 175);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Число разбиений по y:";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 141);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"Число разбиений по x:";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 245);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"1e-008";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(135, 211);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"500";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 175);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"3";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(135, 141);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"3";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 390);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(228, 10);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(562, 494);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(958, 534);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Tag = L"";
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 536);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Решение задачи Дирихле для уравнения Пуассона";
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		double test(double x, double y)
		{
			return exp(x*y);
		}
		double func(double x, double y)
		{
			return cosh(x*x*y);
		}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		const double PI = 3.141592653589793238463;
		double w = Convert::ToDouble(textBox26->Text);
		/*if ((w >= 2) || (w <= 0))
		{
			return;
		}
		*/
		int Nmax = Convert::ToDouble(textBox3->Text);
		int S = 0;
		double eps = Convert::ToDouble(textBox4->Text);
		double eps_max = 0;
		double eps_cur = 0;
		double a2, k2, h2;
		double l;
		int n = Convert::ToDouble(textBox1->Text);
		int m = Convert::ToDouble(textBox2->Text);
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		double v[200][200];
		double f[200][200];
		double a = -1.0, b = 0.0, c = 0.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old;
		double v_new;
		bool ff = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		//l = 2 * pow(asin(PI / (2 * n)), 2);
		//w = 2 / (1 + pow(l*(2 - l), 0.5));

		if ((w >= 2) || (w <= 0))
		{
			return;
		}
		h2 = (n / (b - a)) * (n / (b - a));
		k2 = (m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		//x=i*h-1
		//y=j*k
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = (pow((i*h - 1), 2) + pow(j*k, 2))*exp((i*h - 1)*(j*k));
			}
		}
		for (int j = 0; j < m + 1; j++)
		{
			v[0][j] = exp(-j * k);
			v[n][j] = 1;
		}
		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = 1;
			v[i][m] = exp(i*h - 1);
		}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * ((h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
					v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];;
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
		double x = 0, y = 0;
		double maxeps = 0;
		double cureps = 0;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				y = j * k;
				x = i * h - 1;
				cureps = fabs(test(x, y) - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
				}
			}
		}
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		dataGridView1->Columns[0]->HeaderText = "i";
		dataGridView1->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView1->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 1000) / 1000;
			dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);

		}
		dataGridView1->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{

			dataGridView1->Rows[p]->Cells[0]->Value = round(((j - 1) * k) * 1000) / 1000;
			dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}

		dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";

		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{

				dataGridView1->Rows[j]->Cells[i]->Value = round(v[i - 1][m + 1 - j] * 1000) / 1000;
			}

		}
		this->textBox11->Text = Convert::ToString(S);
		this->textBox12->Text = Convert::ToString(eps_max);
		this->textBox30->Text = Convert::ToString(maxeps);
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));

	}






	private: System::Void DataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //Основная
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		const double PI = 3.141592653589793238463;
		double w= Convert::ToDouble(textBox27->Text);
		double w2; // Convert::ToDouble(textBox15->Text);
		int Nmax = Convert::ToDouble(textBox22->Text);
		int S = 0, SS = 0;
		double eps = Convert::ToDouble(textBox21->Text);
		/*double eps2 = Convert::ToDouble(textBox16->Text);*/
		double eps_max = 0;
		double eps_cur = 0;
		double eps_max2 = 0;
		double eps_cur2 = 0;
		double a2, k2, h2, aa2, kk2, hh2;
		double l;
		double l1;
		int n = Convert::ToDouble(textBox24->Text);
		int m = Convert::ToDouble(textBox23->Text);
		int N = 2 * n;
		int M = 2 * m;
		this->dataGridView2->ColumnCount = n + 2;
		this->dataGridView2->RowCount = m + 2;
		double v[100][100];
		double f[100][100];
		double v2[200][200];
		double f2[200][200];
		double a = -1.0, b = 0.0, c = 0.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old, v_old2;
		double v_new, v_new2;
		bool ff = false, ff2 = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		//l = 2 * pow(asin(PI / (2 * n)), 2);
		//w = 2 / (1 + pow(l * (2 - l), 0.5));
		//if ((w >= 2) || (w <= 0))
		//{
		//	return;
		//}
		double hh = h / 2;
		double kk = k / 2;
		l1 = 2 * pow(asin(PI / (2 * N)), 2);
		w2 = 2 / (1 + pow(l1 * (2 - l1), 0.5));
		if ((w2 >= 2) || (w2 <= 0))
		{
			return;
		}
		h2 = -(n / (b - a)) * (n / (b - a));
		k2 = -(m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		hh2 = -(1 / hh) * (1 / hh);
		kk2 = -(1 / kk) * (1 / kk);
		aa2 = -2 * (hh2 + kk2);
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = cosh((i*h - 1)*(i*h - 1)*j*k);
			}
		}
		for (int j = 0; j < M + 1; j++)
		{
			for (int i = 0; i < N + 1; i++)
			{
				f2[i][j] = cosh((i*hh - 1)*(i*hh - 1)*j*kk);
			}
		}
		for (int j = 0; j < m + 1; j++)
		{
			v[0][j] = sin(PI*j*k);
			v[n][j] = abs(sin(2 * PI*j*k));
		}
		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = -(i * h - 1)*(i*h);
			v[i][m] = -(i * h - 1)*(i*h);
		}
		for (int j = 0; j < M + 1; j++)
		{
			v2[0][j] = sin(PI*j*kk);
			v2[N][j] = abs(sin(2 * PI*j*kk));
		}
		for (int i = 0; i < N + 1; i++)
		{
			v2[i][0] = -(i * hh - 1)*(i*hh);
			v2[i][M] = -(i * hh - 1)*(i*hh);
		}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * ((h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
					v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
		while (!ff2)
		{
			eps_max2 = 0;
			for (j = 1; j < M; j++)
			{
				for (i = 1; i < N; i++)
				{
					v_old2 = v2[i][j];
					v_new2 = -w2 * ((hh2 * (v2[i + 1][j] + v2[i - 1][j]) + kk2 * (v2[i][j + 1] + v2[i][j - 1])));
					v_new2 = v_new2 + (1 - w2) * aa2 * v2[i][j] + w2 * f2[i][j];
					v_new2 = v_new2 / aa2;
					eps_cur2 = fabs(v_old2 - v_new2);
					if (eps_cur2 > eps_max2)
					{
						eps_max2 = eps_cur2;
					}
					v2[i][j] = v_new2;
				}
			}
			SS++;
			if (eps_max2 < eps || SS >= Nmax)
			{
				ff2 = true;
			}
		}
		double x = 0, y = 0;
		double maxeps = 0.0;
		double cureps = 0;
		int ii = 0, jj = 0;
		int s1, s2;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				//y = j * k - 1;
				//x = i * h - 1;
				ii = 2 * i;
				jj = 2 * j;
				cureps = fabs(v2[ii][jj] - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
				}
			}
		}
		this->dataGridView2->ColumnCount = n + 2;
		this->dataGridView2->RowCount = m + 2;
		dataGridView2->Columns[0]->HeaderText = "i";
		dataGridView2->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 1000) / 1000;
			dataGridView2->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView2->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{

			dataGridView2->Rows[p]->Cells[0]->Value = round(((j - 1) * k) * 1000) / 1000;
			dataGridView2->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		dataGridView2->Rows[0]->Cells[0]->Value = "Y/X";
		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{
				dataGridView2->Rows[j]->Cells[i]->Value = round(v[i - 1][m + 1 - j] * 1000) / 1000;
			}
		}

		this->dataGridView3->ColumnCount = N + 2;
		this->dataGridView3->RowCount = M + 2;
		dataGridView3->Columns[0]->HeaderText = "i";
		dataGridView3->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= N + 1; i++)
		{
			dataGridView3->Rows[0]->Cells[i]->Value = round(((i - 1) * hh - 1) * 1000) / 1000;
			dataGridView3->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView3->RowHeadersVisible = true;
		p = 1;
		for (int j = M + 1; j >= 1; j--)
		{
			dataGridView3->Rows[p]->Cells[0]->Value = round(((j - 1) * kk) * 1000) / 1000;
			dataGridView3->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		dataGridView3->Rows[0]->Cells[0]->Value = "Y/X";
		for (int j = 1; j < M + 2; j++)
		{
			for (int i = 1; i < N + 2; i++)
			{
				dataGridView3->Rows[j]->Cells[i]->Value = round((v2[i - 1][M + 1 - j]) * 1000) / 1000;
			}
		}
		this->textBox14->Text = Convert::ToString(S);
		this->textBox32->Text = Convert::ToString(SS);
		this->textBox13->Text = Convert::ToString(eps_max);
		this->textBox35->Text = Convert::ToString(eps_max2);
		this->textBox34->Text = Convert::ToString(maxeps);
		/*this->textBox14->Text = Convert::ToString(w);*/
		/*this->textBox15->Text = Convert::ToString(w2);*/
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));



		//int Nmax = Convert::ToDouble(textBox22->Text);
		//double w = Convert::ToDouble(textBox27->Text);
		//int S = 0;
		//double eps = Convert::ToDouble(textBox21->Text);
		//double eps_max = 0;
		//double eps_cur = 0;
		//double a2, k2, h2;
		//int n = Convert::ToDouble(textBox24->Text);
		//int m = Convert::ToDouble(textBox23->Text);
		//this->dataGridView1->ColumnCount = n + 2;
		//this->dataGridView1->RowCount = m + 2;
		//double v[200][200];
		//double f[200][200];
		//double a = -1.0, b = 0, c = 0, d = 1.0;
		//int i, j;
		//int p, r;
		//double pi = 3.141592;
		//double v_old;
		//double v_new;
		//bool ff = false;
		//double h = (b - a) / n;
		//double k = (d - c) / m;
		//h2 = -(n / (b - a)) * (n / (b - a));
		//k2 = -(m / (d - c)) * (m / (d - c));
		//a2 = -2 * (h2 + k2);
		////заполнение границ и тп
		//for (int j = 0; j < m + 1; j++)
		//{
		//	for (int i = 0; i < n + 1; i++)
		//	{
		//		f[i][j] = (exp(pow((i*h - 1), 2)*j*k) + exp(-pow((i*h - 1), 2)*j*k)) / 2;
		//	}
		//}
		//for (int j = 0; j < m + 1; j++)
		//{
		//	for (int i = 0; i < n + 1; i++)
		//	{
		//		v[i][j] = 0;
		//	}
		//}
		//for (int j = 0; j < m + 1; j++)
		//{
		//	v[0][j] = sin(pi*j*k);

		//	v[n][j] = abs(sin(2 * pi*j*k));

		//}

		////x = i * h - 1;
		////y = j * k ;
		//for (int i = 0; i < n + 1; i++)
		//{

		//	v[i][0] = -(i*h - 1)*(i*h - 1 + 1);
		//	v[i][m] = -(i*h - 1)*(i*h - 1 + 1);
		//}
		//int eps_n = 0;
		//while (!ff)
		//{
		//	eps_max = 0;
		//	for (j = 1; j < m; j++)
		//	{
		//		for (i = 1; i < n; i++)
		//		{
		//			v_old = v[i][j];
		//			v_new = -w * ((h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
		//			v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
		//			v_new = v_new / a2;
		//			eps_cur = fabs(v_old - v_new);
		//			if (eps_cur > eps_max)
		//			{
		//				eps_max = eps_cur;
		//			}
		//			v[i][j] = v_new;
		//		}
		//	}
		//	S++;
		//	if (eps_max < eps || S >= Nmax)
		//	{
		//		ff = true;
		//	}
		//}
		////Таблица
		//this->dataGridView2->ColumnCount = n + 2;
		//this->dataGridView2->RowCount = m + 2;
		//dataGridView2->Columns[0]->HeaderText = "i";
		//dataGridView2->Rows[0]->HeaderCell->Value = "j";
		//for (int i = 1; i <= n + 1; i++)
		//{
		//	dataGridView2->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 1000) / 1000;
		//	dataGridView2->Columns[i]->HeaderText = Convert::ToString(i - 1);

		//}
		//dataGridView2->RowHeadersVisible = true;
		//p = 1;
		//for (int j = m + 1; j >= 1; j--)
		//{

		//	dataGridView2->Rows[p]->Cells[0]->Value = round(((j - 1) * k) * 1000) / 1000;
		//	dataGridView2->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
		//	p++;
		//}

		//dataGridView2->Rows[0]->Cells[0]->Value = "Y/X";



		//for (int j = 1; j < m + 2; j++)
		//{
		//	for (int i = 1; i < n + 2; i++)
		//	{

		//		dataGridView2->Rows[j]->Cells[i]->Value = round(v[i - 1][m + 1 - j] * 1000) / 1000;
		//	}

		//}

		//this->textBox14->Text = Convert::ToString(S);
		//this->textBox13->Text = Convert::ToString(eps_max);
		//memset(v, 0, 40000 * sizeof(double));
		//memset(f, 0, 40000 * sizeof(double));
		//////Половинный шаг

		//S = 0;
		//eps_max = 0;
		//eps_cur = 0;
		//double v_old2;
		//double v_new2;
		//ff = false;
		//double v2[200][200];
		//n *= 2;
		//m *= 2;
		//h = (b - a) / n;
		//k = (d - c) / m;
		//h2 = -1 / pow(h, 2);
		//k2 = -1 / pow(k, 2);
		//a2 = -2 * (h2 + k2);
		////заполнение границ
		//for (int j = 0; j < m + 1; j++)
		//{
		//	v2[0][j] = sin(3.14*(j*k));
		//	v2[n][j] = abs(sin(2 * 3.14*(j*k)));
		//}

		//for (int i = 0; i < n + 1; i++)
		//{
		//	v2[i][0] = -1 * (i*h - 1)*((i*h - 1) + 1);
		//	v2[i][m] = -1 * (i*h - 1)*((i*h - 1) + 1);
		//}
		//eps_n = 0;
		//double eps_max_abs = 0;
		//while (!ff)
		//{
		//	eps_max = 0;
		//	eps_max_abs = 0;
		//	for (j = 1; j < m; j++)
		//	{
		//		for (i = 1; i < n; i++)
		//		{
		//			v_old2 = v2[i][j];
		//			v_new2 = -w * (h2 * (v2[i + 1][j] + v2[i - 1][j]) + k2 * (v2[i][j + 1] + v2[i][j - 1]));
		//			v_new2 = v_new2 + (1 - w) * a2 * v2[i][j] + w * func(i*h - 1, j*k);
		//			v_new2 = v_new2 / (a2);
		//			eps_cur = fabs(v_old2 - v_new2);
		//			if (eps_cur > eps_max_abs)
		//				eps_max_abs = eps_cur;
		//			eps_n = eps_cur;
		//			if (eps_cur > eps_max)
		//			{
		//				eps_max = eps_cur;
		//			}
		//			v2[i][j] = v_new2;
		//		}
		//	}
		//	S++;
		//	if (eps_max < eps || S >= Nmax)
		//	{
		//		ff = true;
		//	}
		//}
		////Вычисление максимального разности 2 приближений
		//n /= 2.0;
		//m /= 2.0;
		//double eps_max_abs1 = 0;
		//for (i = 0; i < n + 1; i++)
		//	for (j = 0; j < m + 1; j++) {
		//		eps_cur = fabs(v[i][j] - v2[i * 2][j * 2]);
		//		if (eps_cur >= eps_max_abs1)
		//			eps_max_abs1 = eps_cur;
		//	}
		////Таблица(половинный шаг)
		//this->dataGridView3->ColumnCount = n * 2 + 2;
		//this->dataGridView3->RowCount = m * 2 + 2;
		//dataGridView3->Columns[0]->HeaderText = "i";
		//dataGridView3->Rows[0]->HeaderCell->Value = "j";
		//for (int i = 1; i <= n * 2 + 1; i++)
		//{
		//	dataGridView3->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 1000) / 1000;
		//	dataGridView3->Columns[i]->HeaderText = Convert::ToString(i - 1);
		//}
		//dataGridView3->RowHeadersVisible = true;
		//p = 1;
		//for (int j = m * 2 + 1; j >= 1; j--)
		//{
		//	dataGridView3->Rows[p]->Cells[0]->Value = round(((j - 1) * h) * 1000) / 1000;
		//	dataGridView3->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
		//	p++;
		//}

		//dataGridView3->Rows[0]->Cells[0]->Value = "Y/X";


		//for (int j = 1; j < m * 2 + 2; j++)
		//{
		//	for (int i = 1; i < n * 2 + 2; i++)
		//	{

		//		dataGridView3->Rows[j]->Cells[i]->Value = round(v2[i - 1][m * 2 + 1 - j] * 1000) / 1000;
		//	}

		//}

		//this->textBox32->Text = Convert::ToString(S);
		//this->textBox34->Text = Convert::ToString(eps_max_abs1);
		//this->textBox35->Text = Convert::ToString(eps_max_abs);
		//memset(v, 0, 40000 * sizeof(double));
		//memset(f, 0, 40000 * sizeof(double));
	}
	private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double w = 0;
		int n = Convert::ToDouble(textBox24->Text);
		double h = 1.0 / (2 * n);
		double nu = 0;
		double pi = 3.14159;
		nu = pi * h / 2.0;
		nu = sin(nu);
		nu = pow(nu, 2);
		nu = 4 * nu;
		w = (double)(2 / (1 + sqrt(nu)));
		textBox27->Text = Convert::ToString(w);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		double w = 0;
		int n = Convert::ToDouble(textBox1->Text);
		double h = 1.0 / n;
		double nu = 0;
		double pi = 3.14159;
		nu = pi * h / 2.0;
		nu = sin(nu);
		nu = pow(nu, 2);
		nu = 4 * nu;
		w = (double)(2 / (1 + sqrt(nu)));
		textBox26->Text = Convert::ToString(w);
	}
	};
}
