#pragma once
#include"gameplay.h"

#using<system.dll>
using namespace System;
using namespace System::Text::RegularExpressions;
using namespace System::IO;



namespace fireemblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for registro
	/// </summary>
	public ref class registro : public System::Windows::Forms::Form
	{
	public:
		registro(void)
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
		~registro()
		{
			if (components)
			{
				delete components;
			}
		}












	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;





	private: System::Windows::Forms::PictureBox^  pictureBox1d;











	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox12;

	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label1;











	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox2d;

	private: System::Windows::Forms::PictureBox^  pictureBox3d;
	private: System::Windows::Forms::PictureBox^  pictureBox4d;
	private: System::Windows::Forms::PictureBox^  pictureBox5d;





















	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
private: System::Windows::Forms::PictureBox^  pictureBox5a;


private: System::Windows::Forms::PictureBox^  pictureBox4a;


private: System::Windows::Forms::PictureBox^  pictureBox3a;


private: System::Windows::Forms::PictureBox^  pictureBox2a;


private: System::Windows::Forms::PictureBox^  pictureBox1a;


private: System::Windows::Forms::PictureBox^  seleccion3d;
private: System::Windows::Forms::PictureBox^  seleccion1d;
private: System::Windows::Forms::PictureBox^  seleccion2d;



private: System::Windows::Forms::PictureBox^  seleccion4d;
private: System::Windows::Forms::PictureBox^  seleccion5d;
private: System::Windows::Forms::PictureBox^  seleccion5a;








private: System::Windows::Forms::PictureBox^  seleccion4a;


private: System::Windows::Forms::PictureBox^  seleccion3a;

private: System::Windows::Forms::PictureBox^  seleccion2a;

private: System::Windows::Forms::PictureBox^  seleccion1a;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::PictureBox^  espada1;
private: System::Windows::Forms::PictureBox^  hacha1;
private: System::Windows::Forms::PictureBox^  lanza1;




private: System::Windows::Forms::PictureBox^  lanza2;

private: System::Windows::Forms::PictureBox^  hacha2;
private: System::Windows::Forms::PictureBox^  espada2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;





















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(registro::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1d = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2d = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3d = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4d = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5d = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5a = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4a = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3a = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2a = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1a = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion3d = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion1d = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion2d = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion4d = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion5d = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion5a = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion4a = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion3a = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion2a = (gcnew System::Windows::Forms::PictureBox());
			this->seleccion1a = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->espada1 = (gcnew System::Windows::Forms::PictureBox());
			this->hacha1 = (gcnew System::Windows::Forms::PictureBox());
			this->lanza1 = (gcnew System::Windows::Forms::PictureBox());
			this->lanza2 = (gcnew System::Windows::Forms::PictureBox());
			this->hacha2 = (gcnew System::Windows::Forms::PictureBox());
			this->espada2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion3d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion1d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion2d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion4d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion5d))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion5a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion4a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion3a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion2a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion1a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espada1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hacha1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lanza1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lanza2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hacha2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espada2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(556, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 26);
			this->label2->TabIndex = 12;
			this->label2->Text = L"PLAYER 2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(1, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(141, 105);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(700, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(141, 105);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1d
			// 
			this->pictureBox1d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1d.BackgroundImage")));
			this->pictureBox1d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1d->Location = System::Drawing::Point(66, 194);
			this->pictureBox1d->Name = L"pictureBox1d";
			this->pictureBox1d->Size = System::Drawing::Size(38, 32);
			this->pictureBox1d->TabIndex = 23;
			this->pictureBox1d->TabStop = false;
			this->pictureBox1d->Click += gcnew System::EventHandler(this, &registro::pictureBox1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(320, 536);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(227, 54);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 33;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &registro::pictureBox5_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Location = System::Drawing::Point(522, 55);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(183, 44);
			this->pictureBox12->TabIndex = 34;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(152, 55);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(183, 44);
			this->pictureBox6->TabIndex = 20;
			this->pictureBox6->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(176, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 26);
			this->label1->TabIndex = 11;
			this->label1->Text = L"PLAYER 1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &registro::label1_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.ErrorImage")));
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(283, 15);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(41, 37);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 46;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.ErrorImage")));
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(522, 15);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(41, 37);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 47;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox20->Location = System::Drawing::Point(120, 181);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(72, 55);
			this->pictureBox20->TabIndex = 48;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox2d
			// 
			this->pictureBox2d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2d.BackgroundImage")));
			this->pictureBox2d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2d->Location = System::Drawing::Point(66, 242);
			this->pictureBox2d->Name = L"pictureBox2d";
			this->pictureBox2d->Size = System::Drawing::Size(38, 32);
			this->pictureBox2d->TabIndex = 50;
			this->pictureBox2d->TabStop = false;
			this->pictureBox2d->Click += gcnew System::EventHandler(this, &registro::pictureBox2d_Click);
			// 
			// pictureBox3d
			// 
			this->pictureBox3d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3d.BackgroundImage")));
			this->pictureBox3d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3d->Location = System::Drawing::Point(66, 287);
			this->pictureBox3d->Name = L"pictureBox3d";
			this->pictureBox3d->Size = System::Drawing::Size(38, 32);
			this->pictureBox3d->TabIndex = 52;
			this->pictureBox3d->TabStop = false;
			this->pictureBox3d->Click += gcnew System::EventHandler(this, &registro::pictureBox3d_Click);
			// 
			// pictureBox4d
			// 
			this->pictureBox4d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4d.BackgroundImage")));
			this->pictureBox4d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4d->Location = System::Drawing::Point(66, 333);
			this->pictureBox4d->Name = L"pictureBox4d";
			this->pictureBox4d->Size = System::Drawing::Size(38, 32);
			this->pictureBox4d->TabIndex = 54;
			this->pictureBox4d->TabStop = false;
			this->pictureBox4d->Click += gcnew System::EventHandler(this, &registro::pictureBox4d_Click);
			// 
			// pictureBox5d
			// 
			this->pictureBox5d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5d.BackgroundImage")));
			this->pictureBox5d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5d->Location = System::Drawing::Point(66, 382);
			this->pictureBox5d->Name = L"pictureBox5d";
			this->pictureBox5d->Size = System::Drawing::Size(38, 32);
			this->pictureBox5d->TabIndex = 56;
			this->pictureBox5d->TabStop = false;
			this->pictureBox5d->Click += gcnew System::EventHandler(this, &registro::pictureBox5d_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(110, 228);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 55);
			this->pictureBox16->TabIndex = 68;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Location = System::Drawing::Point(116, 274);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 59);
			this->pictureBox17->TabIndex = 69;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->Location = System::Drawing::Point(116, 323);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 55);
			this->pictureBox21->TabIndex = 70;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox22->Location = System::Drawing::Point(110, 373);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 60);
			this->pictureBox22->TabIndex = 71;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox23->Location = System::Drawing::Point(528, 373);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 60);
			this->pictureBox23->TabIndex = 86;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->Location = System::Drawing::Point(534, 323);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 55);
			this->pictureBox24->TabIndex = 85;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox25->Location = System::Drawing::Point(534, 274);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 59);
			this->pictureBox25->TabIndex = 84;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox26->Location = System::Drawing::Point(528, 228);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 55);
			this->pictureBox26->TabIndex = 83;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Location = System::Drawing::Point(538, 187);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(72, 55);
			this->pictureBox27->TabIndex = 73;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox5a
			// 
			this->pictureBox5a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5a.BackgroundImage")));
			this->pictureBox5a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5a->Location = System::Drawing::Point(484, 382);
			this->pictureBox5a->Name = L"pictureBox5a";
			this->pictureBox5a->Size = System::Drawing::Size(38, 32);
			this->pictureBox5a->TabIndex = 81;
			this->pictureBox5a->TabStop = false;
			this->pictureBox5a->Click += gcnew System::EventHandler(this, &registro::pictureBox5a_Click);
			// 
			// pictureBox4a
			// 
			this->pictureBox4a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4a.BackgroundImage")));
			this->pictureBox4a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4a->Location = System::Drawing::Point(484, 333);
			this->pictureBox4a->Name = L"pictureBox4a";
			this->pictureBox4a->Size = System::Drawing::Size(38, 32);
			this->pictureBox4a->TabIndex = 79;
			this->pictureBox4a->TabStop = false;
			this->pictureBox4a->Click += gcnew System::EventHandler(this, &registro::pictureBox4a_Click);
			// 
			// pictureBox3a
			// 
			this->pictureBox3a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3a.BackgroundImage")));
			this->pictureBox3a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3a->Location = System::Drawing::Point(484, 287);
			this->pictureBox3a->Name = L"pictureBox3a";
			this->pictureBox3a->Size = System::Drawing::Size(38, 32);
			this->pictureBox3a->TabIndex = 77;
			this->pictureBox3a->TabStop = false;
			this->pictureBox3a->Click += gcnew System::EventHandler(this, &registro::pictureBox3a_Click);
			// 
			// pictureBox2a
			// 
			this->pictureBox2a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2a.BackgroundImage")));
			this->pictureBox2a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2a->Location = System::Drawing::Point(484, 242);
			this->pictureBox2a->Name = L"pictureBox2a";
			this->pictureBox2a->Size = System::Drawing::Size(38, 32);
			this->pictureBox2a->TabIndex = 75;
			this->pictureBox2a->TabStop = false;
			this->pictureBox2a->Click += gcnew System::EventHandler(this, &registro::pictureBox2a_Click);
			// 
			// pictureBox1a
			// 
			this->pictureBox1a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1a.BackgroundImage")));
			this->pictureBox1a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1a->Location = System::Drawing::Point(484, 194);
			this->pictureBox1a->Name = L"pictureBox1a";
			this->pictureBox1a->Size = System::Drawing::Size(38, 32);
			this->pictureBox1a->TabIndex = 72;
			this->pictureBox1a->TabStop = false;
			this->pictureBox1a->Click += gcnew System::EventHandler(this, &registro::pictureBox1a_Click);
			// 
			// seleccion3d
			// 
			this->seleccion3d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion3d.BackgroundImage")));
			this->seleccion3d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion3d->Location = System::Drawing::Point(66, 287);
			this->seleccion3d->Name = L"seleccion3d";
			this->seleccion3d->Size = System::Drawing::Size(38, 32);
			this->seleccion3d->TabIndex = 87;
			this->seleccion3d->TabStop = false;
			this->seleccion3d->Click += gcnew System::EventHandler(this, &registro::seleccion3d_Click);
			// 
			// seleccion1d
			// 
			this->seleccion1d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion1d.BackgroundImage")));
			this->seleccion1d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion1d->Location = System::Drawing::Point(66, 194);
			this->seleccion1d->Name = L"seleccion1d";
			this->seleccion1d->Size = System::Drawing::Size(38, 32);
			this->seleccion1d->TabIndex = 88;
			this->seleccion1d->TabStop = false;
			this->seleccion1d->Click += gcnew System::EventHandler(this, &registro::seleccion1d_Click);
			// 
			// seleccion2d
			// 
			this->seleccion2d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion2d.BackgroundImage")));
			this->seleccion2d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion2d->Location = System::Drawing::Point(66, 242);
			this->seleccion2d->Name = L"seleccion2d";
			this->seleccion2d->Size = System::Drawing::Size(38, 32);
			this->seleccion2d->TabIndex = 89;
			this->seleccion2d->TabStop = false;
			this->seleccion2d->Click += gcnew System::EventHandler(this, &registro::seleccion2d_Click);
			// 
			// seleccion4d
			// 
			this->seleccion4d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion4d.BackgroundImage")));
			this->seleccion4d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion4d->Location = System::Drawing::Point(66, 333);
			this->seleccion4d->Name = L"seleccion4d";
			this->seleccion4d->Size = System::Drawing::Size(38, 32);
			this->seleccion4d->TabIndex = 90;
			this->seleccion4d->TabStop = false;
			this->seleccion4d->Click += gcnew System::EventHandler(this, &registro::seleccion4d_Click);
			// 
			// seleccion5d
			// 
			this->seleccion5d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion5d.BackgroundImage")));
			this->seleccion5d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion5d->Location = System::Drawing::Point(66, 382);
			this->seleccion5d->Name = L"seleccion5d";
			this->seleccion5d->Size = System::Drawing::Size(38, 32);
			this->seleccion5d->TabIndex = 91;
			this->seleccion5d->TabStop = false;
			this->seleccion5d->Click += gcnew System::EventHandler(this, &registro::seleccion5d_Click);
			// 
			// seleccion5a
			// 
			this->seleccion5a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion5a.BackgroundImage")));
			this->seleccion5a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion5a->Location = System::Drawing::Point(484, 382);
			this->seleccion5a->Name = L"seleccion5a";
			this->seleccion5a->Size = System::Drawing::Size(38, 32);
			this->seleccion5a->TabIndex = 96;
			this->seleccion5a->TabStop = false;
			this->seleccion5a->Click += gcnew System::EventHandler(this, &registro::seleccion5a_Click);
			// 
			// seleccion4a
			// 
			this->seleccion4a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion4a.BackgroundImage")));
			this->seleccion4a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion4a->Location = System::Drawing::Point(484, 333);
			this->seleccion4a->Name = L"seleccion4a";
			this->seleccion4a->Size = System::Drawing::Size(38, 32);
			this->seleccion4a->TabIndex = 95;
			this->seleccion4a->TabStop = false;
			this->seleccion4a->Click += gcnew System::EventHandler(this, &registro::seleccion4a_Click);
			// 
			// seleccion3a
			// 
			this->seleccion3a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion3a.BackgroundImage")));
			this->seleccion3a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion3a->Location = System::Drawing::Point(484, 287);
			this->seleccion3a->Name = L"seleccion3a";
			this->seleccion3a->Size = System::Drawing::Size(38, 32);
			this->seleccion3a->TabIndex = 94;
			this->seleccion3a->TabStop = false;
			this->seleccion3a->Click += gcnew System::EventHandler(this, &registro::seleccion3a_Click);
			// 
			// seleccion2a
			// 
			this->seleccion2a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion2a.BackgroundImage")));
			this->seleccion2a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion2a->Location = System::Drawing::Point(484, 242);
			this->seleccion2a->Name = L"seleccion2a";
			this->seleccion2a->Size = System::Drawing::Size(38, 32);
			this->seleccion2a->TabIndex = 93;
			this->seleccion2a->TabStop = false;
			this->seleccion2a->Click += gcnew System::EventHandler(this, &registro::seleccion2a_Click);
			// 
			// seleccion1a
			// 
			this->seleccion1a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seleccion1a.BackgroundImage")));
			this->seleccion1a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->seleccion1a->Location = System::Drawing::Point(484, 194);
			this->seleccion1a->Name = L"seleccion1a";
			this->seleccion1a->Size = System::Drawing::Size(38, 32);
			this->seleccion1a->TabIndex = 92;
			this->seleccion1a->TabStop = false;
			this->seleccion1a->Click += gcnew System::EventHandler(this, &registro::seleccion1a_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(163, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 21);
			this->comboBox1->TabIndex = 97;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &registro::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(533, 66);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(161, 21);
			this->comboBox2->TabIndex = 98;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &registro::comboBox2_SelectedIndexChanged);
			// 
			// espada1
			// 
			this->espada1->BackColor = System::Drawing::Color::Transparent;
			this->espada1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"espada1.BackgroundImage")));
			this->espada1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->espada1->Location = System::Drawing::Point(143, 442);
			this->espada1->Name = L"espada1";
			this->espada1->Size = System::Drawing::Size(43, 39);
			this->espada1->TabIndex = 99;
			this->espada1->TabStop = false;
			this->espada1->Click += gcnew System::EventHandler(this, &registro::pictureBox1_Click_1);
			// 
			// hacha1
			// 
			this->hacha1->BackColor = System::Drawing::Color::Transparent;
			this->hacha1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hacha1.BackgroundImage")));
			this->hacha1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hacha1->Location = System::Drawing::Point(198, 442);
			this->hacha1->Name = L"hacha1";
			this->hacha1->Size = System::Drawing::Size(43, 39);
			this->hacha1->TabIndex = 100;
			this->hacha1->TabStop = false;
			this->hacha1->Click += gcnew System::EventHandler(this, &registro::hacha1_Click);
			// 
			// lanza1
			// 
			this->lanza1->BackColor = System::Drawing::Color::Transparent;
			this->lanza1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lanza1.BackgroundImage")));
			this->lanza1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lanza1->Location = System::Drawing::Point(256, 442);
			this->lanza1->Name = L"lanza1";
			this->lanza1->Size = System::Drawing::Size(43, 39);
			this->lanza1->TabIndex = 101;
			this->lanza1->TabStop = false;
			this->lanza1->Click += gcnew System::EventHandler(this, &registro::lanza1_Click);
			// 
			// lanza2
			// 
			this->lanza2->BackColor = System::Drawing::Color::Transparent;
			this->lanza2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lanza2.BackgroundImage")));
			this->lanza2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lanza2->Location = System::Drawing::Point(561, 442);
			this->lanza2->Name = L"lanza2";
			this->lanza2->Size = System::Drawing::Size(43, 39);
			this->lanza2->TabIndex = 108;
			this->lanza2->TabStop = false;
			this->lanza2->Click += gcnew System::EventHandler(this, &registro::lanza2_Click);
			// 
			// hacha2
			// 
			this->hacha2->BackColor = System::Drawing::Color::Transparent;
			this->hacha2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hacha2.BackgroundImage")));
			this->hacha2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hacha2->Location = System::Drawing::Point(619, 442);
			this->hacha2->Name = L"hacha2";
			this->hacha2->Size = System::Drawing::Size(43, 39);
			this->hacha2->TabIndex = 107;
			this->hacha2->TabStop = false;
			this->hacha2->Click += gcnew System::EventHandler(this, &registro::hacha2_Click);
			// 
			// espada2
			// 
			this->espada2->BackColor = System::Drawing::Color::Transparent;
			this->espada2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"espada2.BackgroundImage")));
			this->espada2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->espada2->Location = System::Drawing::Point(677, 442);
			this->espada2->Name = L"espada2";
			this->espada2->Size = System::Drawing::Size(43, 39);
			this->espada2->TabIndex = 106;
			this->espada2->TabStop = false;
			this->espada2->Click += gcnew System::EventHandler(this, &registro::espada2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(191, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 42);
			this->label3->TabIndex = 109;
			this->label3->Text = L"Cavalier";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(192, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 42);
			this->label4->TabIndex = 110;
			this->label4->Text = L"Knight";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(191, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 42);
			this->label5->TabIndex = 111;
			this->label5->Text = L"Mercenary";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(190, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 42);
			this->label6->TabIndex = 112;
			this->label6->Text = L"Warrior";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(190, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 42);
			this->label7->TabIndex = 113;
			this->label7->Text = L"Myrmidon";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(609, 371);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 42);
			this->label8->TabIndex = 118;
			this->label8->Text = L"Myrmidon";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(609, 319);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 42);
			this->label9->TabIndex = 117;
			this->label9->Text = L"Warrior";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(610, 274);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(156, 42);
			this->label10->TabIndex = 116;
			this->label10->Text = L"Mercenary";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(611, 228);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 42);
			this->label11->TabIndex = 115;
			this->label11->Text = L"Knight";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(610, 180);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 42);
			this->label12->TabIndex = 114;
			this->label12->Text = L"Cavalier";
			// 
			// registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(864, 622);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lanza2);
			this->Controls->Add(this->hacha2);
			this->Controls->Add(this->espada2);
			this->Controls->Add(this->lanza1);
			this->Controls->Add(this->hacha1);
			this->Controls->Add(this->espada1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->seleccion5a);
			this->Controls->Add(this->seleccion4a);
			this->Controls->Add(this->seleccion3a);
			this->Controls->Add(this->seleccion2a);
			this->Controls->Add(this->seleccion1a);
			this->Controls->Add(this->seleccion5d);
			this->Controls->Add(this->seleccion4d);
			this->Controls->Add(this->seleccion2d);
			this->Controls->Add(this->seleccion1d);
			this->Controls->Add(this->seleccion3d);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox5a);
			this->Controls->Add(this->pictureBox4a);
			this->Controls->Add(this->pictureBox3a);
			this->Controls->Add(this->pictureBox2a);
			this->Controls->Add(this->pictureBox1a);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox5d);
			this->Controls->Add(this->pictureBox4d);
			this->Controls->Add(this->pictureBox3d);
			this->Controls->Add(this->pictureBox2d);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1d);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox4);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"registro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &registro::registro_FormClosed);
			this->Load += gcnew System::EventHandler(this, &registro::registro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion3d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion1d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion2d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion4d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion5d))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion5a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion4a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion3a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion2a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccion1a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espada1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hacha1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lanza1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lanza2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hacha2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espada2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		ref struct boolseleccion{
			bool op1 = false, op2 = false, op3 = false, op4 = false, op5 = false;
			int oparma = 0;
		};
		String ^nomjug1, ^nomjug2;
	
		gameplay^ g = gcnew gameplay();
		boolseleccion^ paramjug2 = gcnew boolseleccion();
		boolseleccion^ paramjug1 = gcnew boolseleccion();

		ref struct playerslist{
			String^ nombre;
		};
		String^ fileName = "players.txt";//crear el nombre del archivo


		bool boolNU(boolseleccion^ b){
			return ((b->op1 ? 1 : 0) + (b->op3 ? 1 : 0) + (b->op4 ? 1 : 0) + (b->op5 ? 1 : 0) + (b->op2 ? 1 : 0)) < 3;
		}

		void leerarchivo(String^ narchivo)
		{
		
			try
			{

				StreamReader^ din = File::OpenText(narchivo); //abrir el archivo en forma de lectura

				String^ str = din->ReadLine();

				while (str != nullptr)//valida que el archivo no este vacio
				{
					comboBox1->Items->Add(str);
					comboBox2->Items->Add(str);
					str = din->ReadLine();
				}
				din->Close();
			}
			catch (Exception^ e)
			{

			}
	
		}
		void llenararchivo(String^ narchivo, String^ nomjug){
			try{ 
				StreamWriter^ pwriter = gcnew StreamWriter(narchivo, true);//aqui se abre el archivo en forma de escritura
				pwriter->WriteLine(nomjug);//escribir el dato en la ultima linea
				pwriter->Close();
			} 
			catch (Exception^ e)
			{
				MessageBox::Show("No se pudo cargar la lista de usuarios!");
			}

			
		
		}
	
		bool nombreexistente(String^ narchivo, String^ nomjug){
			try
			{

				StreamReader^ din = File::OpenText(narchivo); //abrir el archivo en forma de lectura

				String^ str = din->ReadLine();

				while (str != nullptr)//valida que el archivo no este vacio
				{
					if (str == nomjug) return true;
					str = din->ReadLine();
				}
				din->Close();
				return false;
			}
			catch (Exception^ e)
			{
			}
		}
	private: System::Void registro_Load(System::Object^  sender, System::EventArgs^  e) {
	
		leerarchivo("players.txt");
		seleccion1a->Visible = false;
		seleccion2a->Visible = false;
		seleccion3a->Visible = false;
		seleccion4a->Visible = false;
		seleccion5a->Visible = false;

		seleccion1d->Visible = false;
		seleccion2d->Visible = false;
		seleccion3d->Visible = false;
		seleccion4d->Visible = false;
		seleccion5d->Visible = false;
	}


private: System::Void registro_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 //AQUI ESTA EL BOTON DE START
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	nomjug1 = comboBox1->Text;
	nomjug2 = comboBox2->Text;

		if (nomjug1 == nomjug2){
			MessageBox::Show("Both usernames are the same!");
		}
		else{
			
				if (( Regex::IsMatch(nomjug1, "^([a-zA-Z0-9]){1,8}$") ) && (Regex::IsMatch(nomjug2, "^([a-zA-Z0-9]){1,8}$")) ){
					
					
					if ((boolNU(paramjug1) == false)  && (boolNU(paramjug2) == false)){
						
						if ((paramjug1->oparma != 0) && (paramjug2->oparma != 0)){
							llenararchivo("players.txt", nomjug1);
							llenararchivo("players.txt", nomjug2);
							
							g->parametrounidades(paramjug1->op1, paramjug1->op2, paramjug1->op3, paramjug1->op4, paramjug1->op5, 1, paramjug1->oparma);
							g->parametrounidades(paramjug2->op1, paramjug2->op2, paramjug2->op3, paramjug2->op4, paramjug2->op5, 1, paramjug2->oparma);
							g->parametrojugador(nomjug1, nomjug2);
							this->Hide();
							g->Show();
						}
						else{
							MessageBox::Show("Chose a weapon!");
						}
					}
					else{
						MessageBox::Show("Not enough units!");
			
					}

				}
				else{
					MessageBox::Show("Invalid username (Max. 8 letters or digits)!");
				}
			
			
		}
		
	
}

		



private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug1)){
		paramjug1->op1 = true;
		seleccion1d->Visible = true;
	}
}
private: System::Void seleccion1d_Click(System::Object^  sender, System::EventArgs^  e) {
	    paramjug1->op1 = false;
		seleccion1d->Visible = false;

}
private: System::Void pictureBox2d_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug1)){
		paramjug1->op2 = true;
		seleccion2d->Visible = true;
	}
}
private: System::Void seleccion2d_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->op2 = false;
	seleccion2d->Visible = false;
}
private: System::Void pictureBox3d_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug1)){
		paramjug1->op3 = true;
		seleccion3d->Visible = true;
	}
}
private: System::Void seleccion3d_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->op3 = false;
	seleccion3d->Visible = false;
}
private: System::Void pictureBox4d_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug1)){
		paramjug1->op4 = true;
		seleccion4d->Visible = true;
	}
}
private: System::Void seleccion4d_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->op4 = false;
	seleccion4d->Visible = false;
}
private: System::Void pictureBox5d_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug1)){
		paramjug1->op5 = true;
		seleccion5d->Visible = true;
	}
}
private: System::Void seleccion5d_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->op5 = false;
	seleccion5d->Visible = false;
}
private: System::Void pictureBox1a_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug2)){
		paramjug2->op1 = true;
		seleccion1a->Visible = true;
	}
	
}
private: System::Void seleccion1a_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->op1 = false;
	seleccion1a->Visible = false;
}
private: System::Void pictureBox2a_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug2)){
		paramjug2->op2 = true;
		seleccion2a->Visible = true;
	}

}
private: System::Void seleccion2a_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->op2 = false;
	seleccion2a->Visible =false;
}
private: System::Void pictureBox3a_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug2)){
		paramjug2->op3 = true;
		seleccion3a->Visible = true;
	}
}
private: System::Void seleccion3a_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->op3 = false;
	seleccion3a->Visible = false;
}
private: System::Void pictureBox4a_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug2)){
		paramjug2->op4 = true;
		seleccion4a->Visible = true;
	}
}
private: System::Void seleccion4a_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->op4 = false;
	seleccion4a->Visible = false;
}
private: System::Void pictureBox5a_Click(System::Object^  sender, System::EventArgs^  e) {
	if (boolNU(paramjug2)){
		paramjug2->op5 = true;
		seleccion5a->Visible = true;
	}
}
private: System::Void seleccion5a_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->op5 = false;
	seleccion5a->Visible = false;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	

}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->oparma = 1;// espada
	espada1->Width = 49;
	espada1->Height = 45;
	hacha1->Width = 43;
	hacha1->Height = 39;
	lanza1->Width = 43;
	lanza1->Height = 39;
}
private: System::Void hacha1_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->oparma = 2;// hacha
	espada1->Width = 43;
	espada1->Height = 39;
	hacha1->Width = 49;
	hacha1->Height = 45;
	lanza1->Width = 43;
	lanza1->Height = 39;

}
private: System::Void lanza1_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug1->oparma = 3;// lanza
	espada1->Width = 43;
	espada1->Height = 39;
	hacha1->Width = 43;
	hacha1->Height = 39;
	lanza1->Width = 49;
	lanza1->Height = 45;

}

private: System::Void espada2_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->oparma = 1;// espada
	espada2->Width = 49;
	espada2->Height = 45;
	hacha2->Width = 43;
	hacha2->Height = 39;
	lanza2->Width = 43;
	lanza2->Height = 39;
}
private: System::Void hacha2_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->oparma = 2;// hacha
	espada2->Width = 43;
	espada2->Height = 39;
	hacha2->Width = 49;
	hacha2->Height = 45;
	lanza2->Width = 43;
	lanza2->Height = 39;
}

private: System::Void lanza2_Click(System::Object^  sender, System::EventArgs^  e) {
	paramjug2->oparma = 3;// lanza
	espada2->Width = 43;
	espada2->Height = 39;
	hacha2->Width = 43;
	hacha2->Height = 39;
	lanza2->Width = 49;
	lanza2->Height = 45;

}
};
}
