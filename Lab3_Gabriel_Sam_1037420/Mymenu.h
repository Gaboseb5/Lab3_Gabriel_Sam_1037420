#pragma once
#include"Juego1.h"
namespace Lab3GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mymenu
	/// </summary>
	public ref class Mymenu : public System::Windows::Forms::Form
	{
	public:
		Mymenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Mymenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;

	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cargar juego";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nueva Partida";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Mymenu::button1_Click);
			// 
			// Mymenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 375);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Mymenu";
			this->Text = L"Mymenu";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Juego^ Formulario_Juego = gcnew Juego();
		Formulario_Juego->ShowDialog();
	}
	};

}




