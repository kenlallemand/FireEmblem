#pragma once
#include "finalgame.h"
#include<stdlib.h>

namespace fireemblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for gameplay
	/// </summary>
	public ref class gameplay : public System::Windows::Forms::Form
	{
	public:
		gameplay(void)
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
		~gameplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  jug1;
	private: System::Windows::Forms::Label^  jug2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gameplay::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->jug1 = (gcnew System::Windows::Forms::Label());
			this->jug2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(252, 10);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(600, 600);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gameplay::dataGridView1_CellContentClick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(53, 32);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(153, 116);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 25);
			this->label1->TabIndex = 22;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &gameplay::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(53, 342);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 116);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(95, 462);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 25);
			this->label2->TabIndex = 24;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &gameplay::label2_Click);
			// 
			// jug1
			// 
			this->jug1->AutoSize = true;
			this->jug1->BackColor = System::Drawing::Color::Transparent;
			this->jug1->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jug1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->jug1->Location = System::Drawing::Point(71, 7);
			this->jug1->Name = L"jug1";
			this->jug1->Size = System::Drawing::Size(130, 30);
			this->jug1->TabIndex = 25;
			this->jug1->Text = L"PLAYER 1";
			this->jug1->Click += gcnew System::EventHandler(this, &gameplay::jug1_Click);
			// 
			// jug2
			// 
			this->jug2->AutoSize = true;
			this->jug2->BackColor = System::Drawing::Color::Transparent;
			this->jug2->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jug2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->jug2->Location = System::Drawing::Point(66, 318);
			this->jug2->Name = L"jug2";
			this->jug2->Size = System::Drawing::Size(130, 30);
			this->jug2->TabIndex = 26;
			this->jug2->Text = L"PLAYER 2";
			this->jug2->Click += gcnew System::EventHandler(this, &gameplay::jug2_Click);
			// 
			// gameplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(864, 622);
			this->Controls->Add(this->jug2);
			this->Controls->Add(this->jug1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->dataGridView1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"gameplay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &gameplay::gameplay_FormClosed);
			this->Load += gcnew System::EventHandler(this, &gameplay::gameplay_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct NodoFila{
			int posx;
			int posy;
			NodoFila^ linkder;

		};
		ref struct Nodocolumna{

			NodoFila^ linkder;
			Nodocolumna^ linkab;
		};

		ref struct bonificaciones{
			int arbol = 4, arbusto = 2, castillo = 5, rio = 1;
		};
		
		ref struct Personaje{
			int defensa, vida, ataque, habilidad, velocidad, suerte, movimiento;

		};

		public:void parametrounidades(bool op1, bool op2, bool op3, bool op4, bool op5, int jug, int oparma){
			if (jug == 1){					
				if (op1) estadisticas(jinete1, 17, 5, 5, 5, 3, 6, 4);
				if (op2)estadisticas(caballero1, 22, 5, 3, 8, 2, 4, 1);
				if (op3)estadisticas(mercenario1, 19, 5, 5, 5, 2, 5, 2);
				if (op4)estadisticas(luchador1, 19, 4, 6, 3, 2, 7, 2);
				if (op5)estadisticas(myrmidon1, 15, 7, 8, 4, 0, 4, 3);
				arma1 = oparma;
			}
			else{
				if (op1) estadisticas(jinete2, 17, 5, 5, 5, 3, 6, 4);
				if (op2)estadisticas(caballero2, 22, 5, 3, 8, 2, 4, 1);
				if (op3)estadisticas(mercenario2, 19, 5, 5, 5, 2, 5, 2);
				if (op4)estadisticas(luchador2, 19, 4, 6, 3, 2, 7, 2);
				if (op5)estadisticas(myrmidon2, 15, 7, 8, 4, 0, 4, 3);
				arma2 = oparma;
			}	
		}
		public:void parametrojugador(String^ nomj1, String^ nomj2){
			jug1->Text = nomj1->ToUpper(); 
			jug2->Text = nomj2->ToUpper();
		
		}

		Nodocolumna^ PTR = nullptr;
		Personaje^ jinete1 = gcnew Personaje();
		Personaje^ caballero1 = gcnew Personaje();
		Personaje^ luchador1 = gcnew Personaje();
		Personaje^ mercenario1 = gcnew Personaje();
		Personaje^ myrmidon1 = gcnew Personaje();
		Personaje^ jugador1 = gcnew Personaje();
		Personaje^ jugador2 = gcnew Personaje();
		Personaje^ jinete2 = gcnew Personaje();
		Personaje^ caballero2 = gcnew Personaje();
		Personaje^ luchador2 = gcnew Personaje();
		Personaje^ mercenario2 = gcnew Personaje();
		Personaje^ myrmidon2 = gcnew Personaje();
		int arma1, arma2;
		


		void estadisticaslabel(Personaje^ jugador,Label^ label ){
			label->Text = "Hp: " + jugador->vida + "\n" + "Luck: " + jugador->suerte + "\n" + "Skill: " + jugador->habilidad
				+ "\n" + "Speed: " + jugador->velocidad + "\n" + "Attack: " + jugador->ataque + "\n" + "Defense: " + jugador->ataque;
				
		}
		bool condiciondoblegolpe(int velatac, int veldef){
			return abs(velatac - veldef) > 5;

		}
		bool TriArmaProb(int armapa, int armapn){
			//1 espada ; 2 hacha; 3 lanza
			//jugador ->contrincante
			float triangulo[3][3] = { { 1, 1.3, 0.7 },
			{ 0.7, 1, 1.3 },
			{ 1.3, 0.7, 1 } };

			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					if ((armapa == i) && (armapn == j)) return triangulo[i][j];
				}
			}
		}
		bool TriArmaDaño(int armapa, int armapn){
			float triangulo[3][3] = { { 1, 1.2, 0.8 },
			{ 0.8, 1, 1.2 },
			{ 1.2, 0.8, 1 } };
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					if ((armapa == i) && (armapn == j)) return triangulo[i][j];
				}
			}
		}
		double Probabilidadgolpe(int habatac, int suerteatac, int veldef, int suertedef, int bonoterreno){
			return (habatac * 2 + suerteatac) / (veldef * 2 + suertedef + bonoterreno);

		}
		int daño(int fuerzatac, int suerteatac, int defensadef, int bonoterreno){
			return fuerzatac + suerteatac - (defensadef + bonoterreno);
		}

		void llenarDG(){

			dataGridView1->GridColor = Color::LightGray;
			for (int i = 0; i < 20; i++){
				dataGridView1->Columns->Add(i + "", "");
				dataGridView1->Columns[i]->Width = dataGridView1->Width / 20;
				dataGridView1->Rows->Add("", "");
				dataGridView1->Rows[i]->Height = dataGridView1->Height / 20;
			}
			dataGridView1->ScrollBars = ScrollBars::None;
		}

		void llenarlista(Nodocolumna^ % PTR){

			Nodocolumna^ P;
			NodoFila^ Q;
			int posx = 0, posy = 0;
			P = PTR;

			while (P != nullptr){
				Q = P->linkder;
				while (Q != nullptr){
			
					Q->posy = posy;
					Q->posx = posx;
					posx++;
					Q = Q->linkder;

				}
				posx = 0;
				posy++;
				P = P->linkab;
			}
		}

		void crearlista(Nodocolumna^ % PTR){
			int j, i;
			NodoFila^ ult;
			Nodocolumna^ ult2;
			for (i = 0; i < 20; i++){

				Nodocolumna^ nw = gcnew Nodocolumna();

				for (j = 0; j < 20; j++){


					NodoFila^ f = gcnew NodoFila();
					if (j == 0){
						nw->linkder = f;
					}
					else{
						ult->linkder = f;
					}
					ult = f;
				}

				if (PTR == nullptr){
					PTR = nw;
				}
				else{
					ult2->linkab = nw;
				}
				ult2 = nw;
			}


		}

		void mostrarDG(Nodocolumna^ % PTR){
			Nodocolumna^ P;
			NodoFila^ Q;
			P = PTR;
			while (P != nullptr){

				Q = P->linkder;
				while (Q != nullptr){
					//code			
					dataGridView1->Rows[Q->posy]->Cells[Q->posx]->Value = Convert::ToString(Q->posy + "x" + Q->posx);

					Q = Q->linkder;
				}
				P = P->linkab;
			}
		}

		void estadisticas(Personaje^ per, int  vida, int  hab, int vel, int def, int suerte, int ataque, int mov){
			per->vida = vida;
			per->habilidad = hab;
			per->velocidad = vel;
			per->defensa = def;
			per->suerte = suerte;
			per->ataque = ataque;
			per->movimiento = mov;
		}

		void estadisticasunidades(Personaje^ % jinete, Personaje^ % caballero, Personaje^ % luchador, Personaje^ % mercenario, Personaje^ % myrmidon){
			//Crear personajes

			estadisticas(jinete, 17, 5, 5, 5, 3, 6, 4);
			estadisticas(caballero, 22, 5, 3, 8, 2, 4, 1);
			estadisticas(luchador, 19, 4, 6, 3, 2, 7, 2);
			estadisticas(mercenario, 19, 5, 5, 5, 2, 5, 2);
			estadisticas(myrmidon, 15, 7, 8, 4, 0, 4, 3);
		}
			
		void  estadisticasplayer(Personaje^ % jugador){
		
			jugador->vida = 10 + rand() % 10;
			jugador->ataque = 2 + rand() % 7;
			jugador->habilidad = 2 + rand() % 6;
			jugador->velocidad = 2 + rand() % 7;
			jugador->suerte = rand() % 7;
			jugador->movimiento = 3;
		}

		NodoFila^ retornarnodoconpos(int x, int y){
			Nodocolumna^P = PTR;
			int i;
			for ( i = 0; i < y; i++){
				P = P->linkab;
			}

			if (i == y){
				NodoFila^ Q = P->linkder;
				for (i = 0; i < x; i++){
					Q = Q->linkder;
				}
				if (i == x){
					return Q;
				}
			}
			return nullptr;
		}

	private: System::Void gameplay_Load(System::Object^  sender, System::EventArgs^  e) {

		estadisticasunidades(jinete1,caballero1,luchador1,mercenario1, myrmidon1);
		estadisticasplayer(jugador1);
		estadisticasplayer(jugador2);
		estadisticaslabel(jugador1, label1);	
		estadisticaslabel(jugador2, label2);
		
		llenarDG();
		crearlista(PTR);
		llenarlista(PTR);
		NodoFila^ Q = retornarnodoconpos(10, 12);
		mostrarDG(PTR);
		dataGridView1->Rows[Q->posy]->Cells[Q->posx]->Value = Convert::ToString(Q->posy + "x" + Q->posx);

		
	}
	private: System::Void gameplay_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void jug1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void jug2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
