#pragma once

//#include "ListaIngredientes.h"
using namespace Recetaslibrary;
using namespace System;
using namespace System::Collections::Generic;
using namespace std;

namespace LAB5Estructura {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		listaCategorias^ lista = gcnew listaCategorias();
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNombre;

	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Label^ labelEstado;







	private: System::Windows::Forms::Label^ label11;





	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ bttnGuardar;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textca;

	private: System::Windows::Forms::TextBox^ textp;

	private: System::Windows::Forms::TextBox^ textg;

	private: System::Windows::Forms::TextBox^ textc;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListBox^ boxCategorias;



	private: System::Windows::Forms::ComboBox^ ComboEstado;
	private: System::Windows::Forms::ListBox^ boxRecetas;

	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ boxIngredientes;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::ComboBox^ comboBox3;



	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::TextBox^ textBox15;


	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ErrorProvider^ errorProvider1;
private: System::Windows::Forms::TextBox^ textingrediente;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ListBox^ listIngredientes;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::ListBox^ listrapida;
private: System::Windows::Forms::Label^ label21;




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textca = (gcnew System::Windows::Forms::TextBox());
			this->ComboEstado = (gcnew System::Windows::Forms::ComboBox());
			this->textp = (gcnew System::Windows::Forms::TextBox());
			this->textg = (gcnew System::Windows::Forms::TextBox());
			this->textc = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->bttnGuardar = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelEstado = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->boxCategorias = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->boxRecetas = (gcnew System::Windows::Forms::ListBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->boxIngredientes = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textingrediente = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->listIngredientes = (gcnew System::Windows::Forms::ListBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->listrapida = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textca);
			this->panel1->Controls->Add(this->ComboEstado);
			this->panel1->Controls->Add(this->textp);
			this->panel1->Controls->Add(this->textg);
			this->panel1->Controls->Add(this->textc);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->bttnGuardar);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->labelEstado);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textNombre);
			this->panel1->Location = System::Drawing::Point(673, 127);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(278, 457);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::MediumTurquoise;
			this->label4->Location = System::Drawing::Point(156, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 20);
			this->label4->TabIndex = 35;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->Location = System::Drawing::Point(86, 379);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 34;
			this->button6->Text = L"ELIMINAR";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 264);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"CANTIDAD:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"kl", L"gr", L"g", L"ch", L"Ch" });
			this->comboBox1->Location = System::Drawing::Point(158, 304);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(41, 21);
			this->comboBox1->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"UNIDAD:";
			// 
			// textca
			// 
			this->textca->Location = System::Drawing::Point(156, 226);
			this->textca->Name = L"textca";
			this->textca->Size = System::Drawing::Size(42, 20);
			this->textca->TabIndex = 29;
			// 
			// ComboEstado
			// 
			this->ComboEstado->FormattingEnabled = true;
			this->ComboEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"liquido", L"polvo" });
			this->ComboEstado->Location = System::Drawing::Point(157, 67);
			this->ComboEstado->Name = L"ComboEstado";
			this->ComboEstado->Size = System::Drawing::Size(91, 21);
			this->ComboEstado->TabIndex = 27;
			this->ComboEstado->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboEstado_SelectedIndexChanged);
			// 
			// textp
			// 
			this->textp->Location = System::Drawing::Point(156, 206);
			this->textp->Name = L"textp";
			this->textp->Size = System::Drawing::Size(42, 20);
			this->textp->TabIndex = 28;
			// 
			// textg
			// 
			this->textg->Location = System::Drawing::Point(156, 186);
			this->textg->Name = L"textg";
			this->textg->Size = System::Drawing::Size(42, 20);
			this->textg->TabIndex = 27;
			// 
			// textc
			// 
			this->textc->Location = System::Drawing::Point(156, 166);
			this->textc->Name = L"textc";
			this->textc->Size = System::Drawing::Size(42, 20);
			this->textc->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"#ID";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(41, 229);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"CARBOHIDRATOS";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(157, 8);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 20);
			this->textBox3->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(41, 209);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"PROTEINAS";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(41, 190);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"GRASAS";
			// 
			// bttnGuardar
			// 
			this->bttnGuardar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->bttnGuardar->Location = System::Drawing::Point(86, 415);
			this->bttnGuardar->Name = L"bttnGuardar";
			this->bttnGuardar->Size = System::Drawing::Size(75, 23);
			this->bttnGuardar->TabIndex = 20;
			this->bttnGuardar->Text = L"GUARDAR";
			this->bttnGuardar->UseVisualStyleBackColor = false;
			this->bttnGuardar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(41, 173);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"CALORIAS";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"VALOR NUTRICIONAL";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 104);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"ORIGEN";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// labelEstado
			// 
			this->labelEstado->AutoSize = true;
			this->labelEstado->Location = System::Drawing::Point(22, 67);
			this->labelEstado->Name = L"labelEstado";
			this->labelEstado->Size = System::Drawing::Size(54, 13);
			this->labelEstado->TabIndex = 6;
			this->labelEstado->Text = L"ESTADO:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"NOMBRE:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(157, 37);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(91, 20);
			this->textNombre->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(298, 38);
			this->label1->MaximumSize = System::Drawing::Size(500, 500);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RECETAS v2.1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->boxCategorias);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(56, 127);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(202, 457);
			this->panel3->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(63, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"CATEGORIAS";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button5->Location = System::Drawing::Point(57, 261);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 36;
			this->button5->Text = L"BUSCAR";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Location = System::Drawing::Point(57, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 34;
			this->button3->Text = L"GUARDAR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Location = System::Drawing::Point(57, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 35;
			this->button4->Text = L"ELIMINAR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(45, 173);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(103, 20);
			this->textBox4->TabIndex = 34;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// boxCategorias
			// 
			this->boxCategorias->BackColor = System::Drawing::SystemColors::MenuBar;
			this->boxCategorias->FormattingEnabled = true;
			this->boxCategorias->Location = System::Drawing::Point(41, 320);
			this->boxCategorias->Name = L"boxCategorias";
			this->boxCategorias->Size = System::Drawing::Size(107, 82);
			this->boxCategorias->TabIndex = 3;
			this->boxCategorias->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listReceta_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(147, 130);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// boxRecetas
			// 
			this->boxRecetas->BackColor = System::Drawing::SystemColors::MenuBar;
			this->boxRecetas->FormattingEnabled = true;
			this->boxRecetas->Location = System::Drawing::Point(560, 410);
			this->boxRecetas->Name = L"boxRecetas";
			this->boxRecetas->Size = System::Drawing::Size(107, 108);
			this->boxRecetas->TabIndex = 4;
			this->boxRecetas->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::boxRecetas_SelectedIndexChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(582, 390);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"RECETAS";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button7->Location = System::Drawing::Point(580, 550);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 38;
			this->button7->Text = L"BUSCAR";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(560, 524);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(107, 20);
			this->textBox9->TabIndex = 37;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(972, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 13);
			this->label9->TabIndex = 40;
			this->label9->Text = L"INGREDIENTES";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click_1);
			// 
			// boxIngredientes
			// 
			this->boxIngredientes->BackColor = System::Drawing::SystemColors::MenuBar;
			this->boxIngredientes->FormattingEnabled = true;
			this->boxIngredientes->Location = System::Drawing::Point(966, 176);
			this->boxIngredientes->Name = L"boxIngredientes";
			this->boxIngredientes->Size = System::Drawing::Size(107, 342);
			this->boxIngredientes->TabIndex = 39;
			this->boxIngredientes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textingrediente);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->listIngredientes);
			this->panel2->Controls->Add(this->textBox19);
			this->panel2->Controls->Add(this->textBox18);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->textBox16);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->textBox17);
			this->panel2->Location = System::Drawing::Point(264, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(278, 457);
			this->panel2->TabIndex = 36;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Location = System::Drawing::Point(25, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textingrediente
			// 
			this->textingrediente->Location = System::Drawing::Point(122, 337);
			this->textingrediente->Name = L"textingrediente";
			this->textingrediente->Size = System::Drawing::Size(91, 20);
			this->textingrediente->TabIndex = 40;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(70, 320);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 13);
			this->label20->TabIndex = 39;
			this->label20->Text = L"mismo Ingrediente";
			// 
			// listIngredientes
			// 
			this->listIngredientes->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listIngredientes->FormattingEnabled = true;
			this->listIngredientes->Location = System::Drawing::Point(24, 368);
			this->listIngredientes->Name = L"listIngredientes";
			this->listIngredientes->Size = System::Drawing::Size(207, 82);
			this->listIngredientes->TabIndex = 37;
			this->listIngredientes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_2);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(156, 118);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(91, 20);
			this->textBox19->TabIndex = 38;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(156, 94);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(91, 20);
			this->textBox18->TabIndex = 37;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(22, 121);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 13);
			this->label28->TabIndex = 36;
			this->label28->Text = L"PORCIONES:";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::MediumTurquoise;
			this->label10->Location = System::Drawing::Point(154, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 20);
			this->label10->TabIndex = 35;
			this->label10->Text = L"0";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button8->Location = System::Drawing::Point(25, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 34;
			this->button8->Text = L"ELIMINAR";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(156, 183);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(91, 20);
			this->textBox10->TabIndex = 33;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(22, 186);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"ORIGEN:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(21, 154);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"DIFICULTAD";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(157, 146);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(91, 21);
			this->comboBox3->TabIndex = 27;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(22, 15);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"#ID";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(156, 38);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(91, 20);
			this->textBox15->TabIndex = 21;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button9->Location = System::Drawing::Point(156, 283);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"GUARDAR";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(157, 68);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(91, 20);
			this->textBox16->TabIndex = 19;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(21, 242);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(119, 13);
			this->label24->TabIndex = 21;
			this->label24->Text = L"VALOR NUTRICIONAL";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(22, 97);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 13);
			this->label25->TabIndex = 15;
			this->label25->Text = L"COCCION:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(21, 71);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(87, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"PREPARACION:";
			this->label26->Click += gcnew System::EventHandler(this, &MyForm::label26_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(22, 44);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(57, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"NOMBRE:";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(157, 11);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(91, 20);
			this->textBox17->TabIndex = 2;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(557, 199);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 13);
			this->label21->TabIndex = 42;
			this->label21->Text = L"RECETAS RAPIDAS";
			// 
			// listrapida
			// 
			this->listrapida->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listrapida->FormattingEnabled = true;
			this->listrapida->Location = System::Drawing::Point(557, 224);
			this->listrapida->Name = L"listrapida";
			this->listrapida->Size = System::Drawing::Size(107, 108);
			this->listrapida->TabIndex = 43;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(1139, 605);
			this->Controls->Add(this->listrapida);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->boxIngredientes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->boxRecetas);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//creando miembro de la clase receta
	Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
	if(cat != nullptr && boxRecetas->SelectedItem) {
		Receta^ rec = cat->buscarReceta(boxRecetas->SelectedItem->ToString());
		if (rec != nullptr) {
			int valornutricional = Convert::ToInt32(textc->Text) + Convert::ToInt32(textg->Text) 
				+ Convert::ToInt32(textp->Text) + Convert::ToInt32(textca->Text);
			rec->insertarIngrediente(textBox3->Text, textNombre->Text, ComboEstado->Text, textBox2->Text, Convert::ToInt32(label4->Text), Convert::ToInt32(textBox1->Text), comboBox1->Text);
			rec->mostrarIngredientes(boxIngredientes);
		}
	}
	else {
		MessageBox::Show("No hay receta seleccionada");
		errorProvider1->SetError(boxRecetas, "Seleccione una receta");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void domainUpDown5_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//listar elemetnos seleccionados
	
}
private: System::Void listReceta_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//boxCategoria
	Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
	if (cat != nullptr) {
		cat->mostrarRecetas(boxRecetas);
	}
	//limpiar todos los recuadros
	textNombre->Text = "";
	textc->Text = "";
	textg->Text = "";
	textp->Text = "";
	textca->Text = "";
	textBox3->Text = "";
	textBox2->Text = "";
	textBox1->Text = "";
	comboBox1->Text = "";
	ComboEstado->Text = "";
	textBox15->Text = "";
	textBox17->Text =  "";
	textBox18->Text = "";
	textBox19->Text =  "";
	comboBox3->Text =  "";
	textBox10->Text =  "";

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelEstado_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	lista->insertarCategoria(textBox4->Text);
	lista->mostrarCategoria(boxCategorias);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Categorias^ categoria = lista->buscarCategoria(textBox4->Text);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	lista->borrarCategoria(textBox4->Text);
	lista->mostrarCategoria(boxCategorias);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Receta^ rec = gcnew Receta();
	bool rapida = false;

	if(boxCategorias->SelectedItem!=nullptr) {
		Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
		//convertir el textbox18 a int
		if (cat != nullptr && textBox18->Text) {
			int aux = Convert::ToInt32(textBox18->Text);
			int coccionrapida = Convert::ToInt32(textBox16->Text);
			if (coccionrapida <= 60) {
				rapida = true;
			}
			cat->INSERTAReceta(textBox15->Text, textBox17->Text, textBox17->Text, aux, textBox19->Text, comboBox3->Text, textBox10->Text);
			cat->mostrarRecetas(boxRecetas);
			rec = cat->buscarReceta(textBox15->Text);
		}
	}
	else {
		MessageBox::Show("No hay categorias");
		errorProvider1->SetError(boxCategorias, "Seleccione una categoria");
	}

	if (rapida) {
		listrapida->Items->Add(rec->Nombre);
	}

	///agregando las recetas mas rapidas

}
private: System::Void boxRecetas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (boxCategorias->SelectedItem!=nullptr) {
		Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
		if (cat != nullptr && boxRecetas->SelectedItem!=nullptr) {
			Receta^ rec = cat->buscarReceta(boxRecetas->SelectedItem->ToString());
			if (rec != nullptr) {
				textBox15->Text = rec->Nombre;
				textBox17->Text = rec->preparacion;
				textBox18->Text = rec->coccion;
				textBox19->Text = rec->Porciones.ToString();
				comboBox3->Text = rec->dificultad;
				textBox10->Text = rec->Origen;
				rec->mostrarIngredientes(boxIngredientes);
			}
		}
	}
	else {
		MessageBox::Show("No hay recetas");
		errorProvider1->SetError(boxRecetas, "Seleccione una receta");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
	if (cat != nullptr) {
		Receta^ rec = cat->buscarReceta(textBox17->Text);
		if (rec != nullptr) {
			cat->eliminarReceta(rec->Nombre);
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (boxCategorias->SelectedItem !=nullptr) {
		Categorias^ cat = lista->buscarCategoria(boxCategorias->SelectedItem->ToString());
		if (cat != nullptr && textBox9->Text!=nullptr) {
			Receta^ rec = cat->buscarReceta(textBox9->Text);
			if (rec != nullptr) {
				textBox15->Text = rec->Nombre;
				textBox17->Text = rec->preparacion;
				textBox18->Text = rec->coccion;
				textBox19->Text = rec->Porciones.ToString();
				comboBox3->Text = rec->dificultad;
				textBox10->Text = rec->Origen;
				rec->mostrarIngredientes(boxIngredientes);
			}
			else {
				MessageBox::Show("No hay recetas");
				errorProvider1->SetError(boxRecetas, "Seleccione una receta");
			}
		}
	}
	
}
private: System::Void ComboEstado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//qeu recorra todas la categorias buscando esos ingredientes y subirlo a un list box
	//limpiar listingrediente
	listIngredientes->Items->Clear();
	listaCategorias^ listaux = lista;
	Categorias^ cat = listaux->cabeza;
	while (cat) {
		Receta^ rec = cat->recetaPrimaria;
		while (rec) {
			ingrediente^ ing = rec->cabeza;
			while (ing) {
				if (ing->getNombre() == textingrediente->Text) {
					listIngredientes->Items->Add(rec->Nombre);
				}
				ing = ing->siguiente;
			}
			rec = rec->siguiente;
		}
		cat = cat->siguiente;
	}
}
};
// Increase the size of the label
    
}
