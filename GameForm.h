#include <stdlib.h>
#pragma once
#include "ShopForm.h"

namespace MilkClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			shopform = gcnew ShopForm();
			shopform->Owner = this;
			shopform->Hide();
		}
		property String^ NickName;
		property double balancemoney;

	private: ShopForm^ shopform;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Timer^ StruyaTimer;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->StruyaTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"sprites\\bg-milkclicker-game.png";
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(635, 335);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"sprites\\line.png";
			this->pictureBox2->Location = System::Drawing::Point(631, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(21, 334);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"sprites\\bg-milkclicker.png";
			this->pictureBox3->Location = System::Drawing::Point(651, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(192, 334);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->ImageLocation = L"sprites\\milkclicker-something.png";
			this->pictureBox4->Location = System::Drawing::Point(211, 133);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(207, 78);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &GameForm::PictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->ImageLocation = L"sprites\\bucket.png";
			this->pictureBox5->Location = System::Drawing::Point(251, 217);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(128, 117);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(665, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выйти в главное меню";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(665, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 34);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Магазин";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(665, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 34);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Продать на базаре";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameForm::Button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(662, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Молоко: 0/10 литров";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(662, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Деньги: 0 рублей";
			// 
			// pictureBox6
			// 
			this->pictureBox6->ImageLocation = L"sprites\\struya.png";
			this->pictureBox6->Location = System::Drawing::Point(283, 188);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 67);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->ImageLocation = L"sprites\\struya.png";
			this->pictureBox7->Location = System::Drawing::Point(309, 188);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(10, 67);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->ImageLocation = L"sprites\\struya.png";
			this->pictureBox8->Location = System::Drawing::Point(335, 186);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(10, 69);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// StruyaTimer
			// 
			this->StruyaTimer->Interval = 500;
			this->StruyaTimer->Tick += gcnew System::EventHandler(this, &GameForm::StruyaTimer_Tick);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 333);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GameForm";
			this->Text = L"MilkClicker | Ферма";
			this->Activated += gcnew System::EventHandler(this, &GameForm::GameForm_Activated);
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double balancemilk = 0;
		int money = 0;
		int upgrade = 1;
		int randomsell = 0;
		int hour = 0;
		int backpack = 10;
	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Controls->Add(pictureBox4);
		pictureBox1->Controls->Add(pictureBox5);
		
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ menuform = this->Owner;
		menuform->Show();
		this->Hide();
	}
	private: System::Void GameForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Доярка: " + this->NickName;
	}
	private: System::Void PictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (balancemilk < backpack)
		{
			balancemilk = balancemilk + upgrade;
			this->label2->Text = "Молоко: " + Convert::ToString(balancemilk) + "/" + Convert::ToString(backpack) + " литров";
			pictureBox6->Visible = true;
			pictureBox7->Visible = true;
			pictureBox8->Visible = true;
			StruyaTimer->Start();
		}
		if (balancemilk >= backpack)
		{
			MessageBox::Show("Ведро переполнено!\nПродайте молоко или купите ведро лучше.", "MilkClicker", MessageBoxButtons::OK, MessageBoxIcon::Error);
			balancemilk = backpack;
			this->label2->Text = "Молоко: " + Convert::ToString(balancemilk) + "/" + Convert::ToString(backpack) + " литров";
		}

	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		randomsell = rand() % 3 + 1;
		hour = rand() % 10 + 1;
		if (balancemilk > 0)
		{
			if (randomsell == 1)
			{
				MessageBox::Show("Спустя " + Convert::ToString(hour) + " часов на базаре...\nМолоко продалось нормально.\nВы продали его по цене 1 рубль за литр.", "MilkClicker", MessageBoxButtons::OK, MessageBoxIcon::Information);
				balancemoney = balancemoney + balancemilk;
				balancemilk = 0;
				this->label2->Text = "Молоко: " + Convert::ToString(balancemilk) + "/" + Convert::ToString(backpack) + " литров";
				this->label3->Text = "Деньги: " + Convert::ToString(balancemoney) + " рублей";
			}
			else if (randomsell == 2)
			{
				MessageBox::Show("Спустя " + Convert::ToString(hour) + " часов на базаре...\nМолоко продалось замечательно, разобрали мгновенно.\nВы продали его по цене 2 рубля за литр.", "MilkClicker", MessageBoxButtons::OK, MessageBoxIcon::Information);
				balancemoney = balancemoney + (balancemilk * 2);
				balancemilk = 0;
				this->label2->Text = "Молоко: " + Convert::ToString(balancemilk) + "/" + Convert::ToString(backpack) + " литров";
				this->label3->Text = "Деньги: " + Convert::ToString(balancemoney) + " рублей";
			}
			else if (randomsell == 3)
			{
				MessageBox::Show("Спустя " + Convert::ToString(hour) + " часов на базаре...\nМолоко продалось очень плохо.\nВы продали его по цене 0.5 рубля за литр.", "MilkClicker", MessageBoxButtons::OK, MessageBoxIcon::Information);
				balancemoney = balancemoney + (balancemilk * 0.5);
				balancemilk = 0;
				this->label2->Text = "Молоко: " + Convert::ToString(balancemilk) + "/" + Convert::ToString(backpack) + " литров";
				this->label3->Text = "Деньги: " + Convert::ToString(balancemoney) + " рублей";
			}
		}
		else
		{
			MessageBox::Show("Ведро пусто!\nВам нечего продать.", "MilkClicker", MessageBoxButtons::OK, MessageBoxIcon::Error);
			balancemilk = 0;
		}
	}
private: System::Void StruyaTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox6->Visible = false;
	pictureBox7->Visible = false;
	pictureBox8->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	shopform->balancemoney = this->balancemoney;
	shopform->label1->Text = "Деньги: " + Convert::ToString(balancemoney) + " рублей";
	shopform->Show();
	this->Hide();
}
};
}
