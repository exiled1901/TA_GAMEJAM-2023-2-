#pragma once
#include "Casita1.h"
#include "Casita2.h"
#include "Casita3.h"
namespace TAGAMEJAM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de JUEGO
	/// </summary>
	public ref class JUEGO : public System::Windows::Forms::Form
	{
	private:
		Casita1* c1;
		Casita2* c2;

	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
		   Casita3* c3;
	public:
		JUEGO(void)
		{
			InitializeComponent();
			Graphics^ gr = this->CreateGraphics();
			//
			//TODO: agregar código de constructor aquí
			//
			c1 = new Casita1(gr->VisibleClipBounds.Width - 600,gr->VisibleClipBounds.Height - 170);
			c2 = new Casita2(gr->VisibleClipBounds.Width - 400, gr->VisibleClipBounds.Height - 170);
			c3 = new Casita3(gr->VisibleClipBounds.Width - 200, gr->VisibleClipBounds.Height - 170);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~JUEGO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JUEGO::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 27);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CREATE HOUSES";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(55, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 52);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &JUEGO::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(153, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 52);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &JUEGO::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(252, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 52);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &JUEGO::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(372, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(272, 64);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &JUEGO::button4_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 50;
			this->timer2->Tick += gcnew System::EventHandler(this, &JUEGO::timer2_Tick);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &JUEGO::timer1_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &JUEGO::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &JUEGO::timer4_Tick);
			// 
			// JUEGO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(698, 477);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"JUEGO";
			this->Text = L"GAME";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer2->Start();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	timer3->Start();
}

private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ gr = this->CreateGraphics();
	c1->dibujarTodo(gr);

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ gr = this->CreateGraphics();
	c2->dibujarTodo(gr);
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ gr = this->CreateGraphics();
	c3->dibujarTodo(gr);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
	timer2->Stop();
	timer3->Stop();

	timer4->Start();
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ gr = this->CreateGraphics();
	c1->destruirTodo(gr);
	c2->destruirTodo(gr);
	c3->destruirTodo(gr);

}
};
}
