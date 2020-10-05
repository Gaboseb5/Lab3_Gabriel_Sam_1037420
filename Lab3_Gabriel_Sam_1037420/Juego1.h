#pragma once
#include <iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
#include<ctime>
#include<stdio.h>
#include<conio.h>

struct Nodo
{
	char valor;
	Nodo* siguiente;
};


namespace Lab3GabrielSam1037420 {
	void insertarLista(Nodo*&, char);
	void extraerdatos(Nodo*&, char);
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
		
	public:
		Juego(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ txtinsertar;
	private: System::Windows::Forms::TextBox^ txtextraaerlista;
	private: System::Windows::Forms::TextBox^ txtextraer;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->txtinsertar = (gcnew System::Windows::Forms::TextBox());
			this->txtextraaerlista = (gcnew System::Windows::Forms::TextBox());
			this->txtextraer = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(369, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 69);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Solitario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(632, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 17);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Grupo destino";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(632, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 17);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Grupo Origen";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(632, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Posicion";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(48, 464);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(434, 41);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Mostrar Tablero Inicial";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Juego::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(635, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 37);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Realizar movimiento";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Juego::button3_Click);
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Location = System::Drawing::Point(417, 137);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(65, 308);
			this->listBox7->TabIndex = 27;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(355, 137);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(65, 308);
			this->listBox6->TabIndex = 26;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(294, 137);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(65, 308);
			this->listBox5->TabIndex = 25;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(233, 137);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(65, 308);
			this->listBox4->TabIndex = 24;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(172, 137);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(65, 308);
			this->listBox3->TabIndex = 23;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(110, 137);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(65, 308);
			this->listBox2->TabIndex = 22;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(48, 137);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(65, 308);
			this->listBox1->TabIndex = 21;
			// 
			// txtinsertar
			// 
			this->txtinsertar->Location = System::Drawing::Point(775, 292);
			this->txtinsertar->Name = L"txtinsertar";
			this->txtinsertar->Size = System::Drawing::Size(100, 22);
			this->txtinsertar->TabIndex = 20;
			// 
			// txtextraaerlista
			// 
			this->txtextraaerlista->Location = System::Drawing::Point(775, 214);
			this->txtextraaerlista->Name = L"txtextraaerlista";
			this->txtextraaerlista->Size = System::Drawing::Size(100, 22);
			this->txtextraaerlista->TabIndex = 19;
			// 
			// txtextraer
			// 
			this->txtextraer->Location = System::Drawing::Point(775, 141);
			this->txtextraer->Name = L"txtextraer";
			this->txtextraer->Size = System::Drawing::Size(100, 22);
			this->txtextraer->TabIndex = 18;
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 550);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtinsertar);
			this->Controls->Add(this->txtextraaerlista);
			this->Controls->Add(this->txtextraer);
			this->Name = L"Juego";
			this->Text = L"Juego";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Mostrartablero();

	}
		   

		   int color;
		   char valor;
		   
		   void Mostrartablero() {
			   Nodo* lista = NULL;
			   char* Cartas[52] = { "1","1","1R","1R" ,"2R","2R" ,"2","2","3R","3R","3","3","4R","4R","4","4","5R","5R","5","5","6","6"
				,"6R","6R","7","7R" ,"7R","7","8","8R","8","8R" ,"9","9R" ,"9R","9","A","AR" ,"AR","A" ,"B","BR","BR","B"
				 ,"CR","CR" ,"C","C","DR","DR" ,"D","D" };
			   int i;
			   
			   srand(time(0));
			   int color;
			   for (int i = 0; i < 1; i++) {

				   
				   color=1+rand() % 2;
				   if (i == 0 || color==1) {

					   listBox1->Items->Add(Convert::ToChar(*Cartas[rand() % 52])+ "R");
					   
				   }
				   else 
				   {
					   listBox1->Items->Add(Convert::ToChar(*Cartas[rand() % 52])+"N");
					   
				   }
				   
				   
			   }
			   for (int i = 0; i < 2; i++) {

				   /*int n = 0;*/
				   
				   color = rand() % 2;
				   if (color == 1) {

					   listBox2->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
					   
				   }
				   else
				   {
					   listBox2->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				  

			   }
			   for (int i = 0; i < 3; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (color == 1) {

					   listBox3->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
					   
				   }
				   else 
				   {
					   listBox3->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				   

			   }
			   for (int i = 0; i < 4; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (color == 1) {

					   listBox4->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
					   
				   }
				   else 
				   {
					   listBox4->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				   

			   }
			   for (int i = 0; i < 5; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (color == 1) {

					   listBox5->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
					   
				   }
				   else 
				   {
					   listBox5->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				  

			   }
			   for (int i = 0; i < 6; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (color == 1) {

					   listBox6->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
					  
				   }
				   else
				   {
					   listBox6->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				   
			   }
			   for (int i = 0; i < 7; i++) {

				   /*int n = 0;*/
				   
				   color = rand() % 2;
				   if (color == 1) {

					   listBox7->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");
				   }
				   else
				   {
					   listBox7->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					   
				   }
				   
				   
			   }

			   insertarLista(lista, valor);
			   
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Nodo* lista = NULL;
		insertarLista(lista,valor);

		int posicion=Convert::ToInt32(txtextraer->Text);
		int grupoorigen=Convert::ToInt32(txtextraaerlista->Text);
		int grupodes = Convert::ToInt32(txtinsertar->Text);

		grupoorigen = ;

	}


		   

		   void insertarLista(Nodo*& lista, char value) {
			   Nodo* nuevo_nodo = new Nodo();
			   nuevo_nodo->valor = value;

			   Nodo* aux1 = lista;
			   Nodo* aux2;

			   while ((aux1 != NULL) && (aux1->valor < value))
			   {
				   aux2 = aux1;
				   aux1 = aux1->siguiente;
			   }

			   if (lista == aux1) {
				   lista = nuevo_nodo;
			   }
			   else
			   {
				   aux2->siguiente = aux1;
			   }

			   nuevo_nodo->siguiente = aux1;
		   }
		   
		   void extraerdatos(Nodo*& lista, char value) {
			   char guardar;
			   if (lista != NULL) {
				   Nodo* aux_extraer;
				   Nodo* anterior = NULL;

				   aux_extraer = lista;

				   while ((aux_extraer!=NULL)&&(aux_extraer->valor!=value))
				   {
					   anterior = aux_extraer;
					   aux_extraer = aux_extraer->siguiente;
				   }

				   if (aux_extraer == NULL) {
					   MessageBox::Show("El elemento no ha sido encontrado");
				   }
				   else if(anterior==NULL)
				   {
					   lista = lista->siguiente;
					   guardar = Convert::ToChar(aux_extraer);
					   delete aux_extraer;
				   }
				   else 
				   {
					   anterior->siguiente = aux_extraer->siguiente;
					   guardar = Convert::ToChar(aux_extraer);
					   delete aux_extraer;
				   }


			   }
		   }
};
	
	


}
