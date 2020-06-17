#pragma once
#include <vector>

namespace Творческая2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:



	private: System::Windows::Forms::TextBox^ textBox4;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox9;






	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;




	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button0;




private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button12;

















private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button13;




private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;



private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(29, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(29, 22);
			this->textBox3->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(236, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 22);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 19);
			this->label1->TabIndex = 12;
			this->label1->Text = L"x +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(122, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"y +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(197, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"z =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(197, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"z =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(122, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 19);
			this->label7->TabIndex = 21;
			this->label7->Text = L"y +";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(47, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"x +";
			// 
			// textBox8
			// 
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox8->Location = System::Drawing::Point(236, 40);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(29, 22);
			this->textBox8->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(87, 40);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(29, 22);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(162, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(29, 22);
			this->textBox7->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 40);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(29, 22);
			this->textBox5->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(197, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 19);
			this->label10->TabIndex = 30;
			this->label10->Text = L"z =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(122, 70);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 19);
			this->label11->TabIndex = 29;
			this->label11->Text = L"y +";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(47, 70);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 19);
			this->label12->TabIndex = 28;
			this->label12->Text = L"x +";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(236, 68);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(29, 22);
			this->textBox12->TabIndex = 27;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(87, 68);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(29, 22);
			this->textBox10->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(162, 68);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(29, 22);
			this->textBox11->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(12, 68);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(29, 22);
			this->textBox9->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(20, 380);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 19);
			this->label15->TabIndex = 36;
			this->label15->Text = L"x =";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(20, 408);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 19);
			this->label16->TabIndex = 37;
			this->label16->Text = L"y =";
			// 
			// textBox13
			// 
			this->textBox13->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(61, 433);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(65, 22);
			this->textBox13->TabIndex = 44;
			// 
			// textBox14
			// 
			this->textBox14->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(61, 406);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(65, 22);
			this->textBox14->TabIndex = 43;
			// 
			// textBox15
			// 
			this->textBox15->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(61, 378);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(65, 22);
			this->textBox15->TabIndex = 42;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(20, 435);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 19);
			this->label14->TabIndex = 46;
			this->label14->Text = L"z =";
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(18, 181);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 36);
			this->button7->TabIndex = 51;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(87, 181);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 36);
			this->button8->TabIndex = 52;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(156, 181);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 36);
			this->button9->TabIndex = 53;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(18, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 36);
			this->button4->TabIndex = 54;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(87, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 36);
			this->button5->TabIndex = 55;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(156, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 36);
			this->button6->TabIndex = 56;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(18, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 36);
			this->button1->TabIndex = 57;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(87, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 36);
			this->button2->TabIndex = 58;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(156, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 36);
			this->button3->TabIndex = 59;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button0
			// 
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(87, 310);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(49, 36);
			this->button0->TabIndex = 61;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(18, 310);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 38);
			this->button10->TabIndex = 77;
			this->button10->Text = L"C";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(156, 310);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 36);
			this->button12->TabIndex = 79;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(0, 4);
			this->listBox1->TabIndex = 80;
			this->listBox1->Visible = false;
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(32, 123);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 36);
			this->button13->TabIndex = 81;
			this->button13->Text = L"<--";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(131, 123);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 36);
			this->button14->TabIndex = 82;
			this->button14->Text = L"-->";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(280, 126);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 36);
			this->button15->TabIndex = 83;
			this->button15->Text = L"Ячейка 1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(280, 176);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(62, 36);
			this->button16->TabIndex = 84;
			this->button16->Text = L"Ячейка 2";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(348, 126);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(62, 36);
			this->button17->TabIndex = 85;
			this->button17->Text = L"Ячейка 3";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(348, 176);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(62, 36);
			this->button18->TabIndex = 86;
			this->button18->Text = L"Ячейка 4";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click_1);
			// 
			// button22
			// 
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(348, 331);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(62, 36);
			this->button22->TabIndex = 90;
			this->button22->Text = L"Ячейка 4";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(348, 281);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(62, 36);
			this->button21->TabIndex = 89;
			this->button21->Text = L"Ячейка 3";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(280, 331);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 36);
			this->button20->TabIndex = 88;
			this->button20->Text = L"Ячейка 2";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(280, 281);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 36);
			this->button19->TabIndex = 87;
			this->button19->Text = L"Ячейка 1";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(269, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 19);
			this->label4->TabIndex = 91;
			this->label4->Text = L"Ячейки сохранения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(249, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 19);
			this->label5->TabIndex = 92;
			this->label5->Text = L"Ячейки восстановления";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(441, 482);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	textBox10->Text = "";
	textBox11->Text = "";
	textBox12->Text = "";
	textBox13->Text = "";
	textBox14->Text = "";
	textBox15->Text = "";
}
int i = 1;
int j = 0;
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i > 1)
	{
		j = i;
		for (i; i + 1 > j; i--)
		{
			Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "";
		}
	}
	else
	{
		i = 12;
		System::Void button13_Click(System::Object ^ sender, System::EventArgs ^ e);
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i < 12)
	{
		j = i;
		for (i; i < j + 1; i++)
		{
			Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "";
		}
	}
	else
	{
		i = 1;
		System::Void button14_Click(System::Object ^ sender, System::EventArgs ^ e);
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "9";
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls["textBox" + Convert::ToString(i)]->Text = Controls["textBox" + Convert::ToString(i)]->Text + "0";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		if ((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)) != 0)
		{
			textBox15->Text = Convert::ToString((Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
			textBox14->Text = Convert::ToString((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
			textBox13->Text = Convert::ToString((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
		}
		else
		{
			MessageBox::Show("Определитель равен 0\nСистема не имеет решений, либо имеет бесконечное множество решений", "Ошибка");
		}
	}
	else
	{
		MessageBox::Show("Не все поля заполнены", "Ошибка");
	}
}
static array<double>^ arr = gcnew array<double>(48);
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		for (int i = 0; i < 12; i++)
		{
			arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i + 1)]->Text);
		}
	}
	else
	{
		MessageBox::Show("Не все поля заполнены", "Ошибка");
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		for (int i = 12; i < 24; i++)
		{
			arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 11)]->Text);
		}
	}
	else
	{
		MessageBox::Show("Не все поля заполнены", "Ошибка");
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		for (int i = 24; i < 36; i++)
		{
			arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 23)]->Text);
		}
	}
	else
	{
		MessageBox::Show("Не все поля заполнены", "Ошибка");
	}
}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		for (int i = 36; i < 48; i++)
		{
			arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 35)]->Text);
		}
	}
	else
	{
		MessageBox::Show("Не все поля заполнены", "Ошибка");
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 12; i++)
	{
		Controls["textBox" + Convert::ToString(i + 1)]->Text = Convert::ToString(arr[i]);
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 12; i < 24; i++)
	{
		Controls["textBox" + Convert::ToString(i - 11)]->Text = Convert::ToString(arr[i]);
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 24; i < 36; i++)
	{
		Controls["textBox" + Convert::ToString(i - 23)]->Text = Convert::ToString(arr[i]);
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 36; i < 48; i++)
	{
		Controls["textBox" + Convert::ToString(i - 35)]->Text = Convert::ToString(arr[i]);
	}
}
};
};