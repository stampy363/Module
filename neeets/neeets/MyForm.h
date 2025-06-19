#pragma once

namespace neeets {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ файл1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ файл2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ timesNewRomanToolStripMenuItem;





	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ timesNewRomanToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ arialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consolasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ полужирныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ курсивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ подчеркнутыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выравниваниеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файл1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файл2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timesNewRomanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timesNewRomanToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consolasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->полужирныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->курсивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->подчеркнутыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выравниваниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 49);
			this->textBox1->MinimumSize = System::Drawing::Size(4, 200);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 200);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->загрузитьToolStripMenuItem,
					this->форматToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(454, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файл1ToolStripMenuItem,
					this->файл2ToolStripMenuItem
			});
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			// 
			// файл1ToolStripMenuItem
			// 
			this->файл1ToolStripMenuItem->Name = L"файл1ToolStripMenuItem";
			this->файл1ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->файл1ToolStripMenuItem->Text = L"Файл 1";
			this->файл1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файл1ToolStripMenuItem_Click);
			// 
			// файл2ToolStripMenuItem
			// 
			this->файл2ToolStripMenuItem->Name = L"файл2ToolStripMenuItem";
			this->файл2ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->файл2ToolStripMenuItem->Text = L"Файл 2";
			// 
			// форматToolStripMenuItem
			// 
			this->форматToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->timesNewRomanToolStripMenuItem,
					this->выравниваниеToolStripMenuItem
			});
			this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			this->форматToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->форматToolStripMenuItem->Text = L"Формат";
			// 
			// timesNewRomanToolStripMenuItem
			// 
			this->timesNewRomanToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->timesNewRomanToolStripMenuItem1,
					this->arialToolStripMenuItem, this->consolasToolStripMenuItem, this->полужирныйToolStripMenuItem, this->курсивToolStripMenuItem,
					this->подчеркнутыйToolStripMenuItem, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->timesNewRomanToolStripMenuItem->Name = L"timesNewRomanToolStripMenuItem";
			this->timesNewRomanToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->timesNewRomanToolStripMenuItem->Text = L"Шрифт";
			// 
			// timesNewRomanToolStripMenuItem1
			// 
			this->timesNewRomanToolStripMenuItem1->Name = L"timesNewRomanToolStripMenuItem1";
			this->timesNewRomanToolStripMenuItem1->Size = System::Drawing::Size(173, 22);
			this->timesNewRomanToolStripMenuItem1->Text = L"Times New Roman";
			this->timesNewRomanToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::timesNewRomanToolStripMenuItem1_Click);
			// 
			// arialToolStripMenuItem
			// 
			this->arialToolStripMenuItem->Name = L"arialToolStripMenuItem";
			this->arialToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->arialToolStripMenuItem->Text = L"Arial";
			// 
			// consolasToolStripMenuItem
			// 
			this->consolasToolStripMenuItem->Name = L"consolasToolStripMenuItem";
			this->consolasToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->consolasToolStripMenuItem->Text = L"Consolas";
			// 
			// полужирныйToolStripMenuItem
			// 
			this->полужирныйToolStripMenuItem->Name = L"полужирныйToolStripMenuItem";
			this->полужирныйToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->полужирныйToolStripMenuItem->Text = L"Полужирный";
			this->полужирныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::полужирныйToolStripMenuItem_Click);
			// 
			// курсивToolStripMenuItem
			// 
			this->курсивToolStripMenuItem->Name = L"курсивToolStripMenuItem";
			this->курсивToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->курсивToolStripMenuItem->Text = L"Курсив";
			// 
			// подчеркнутыйToolStripMenuItem
			// 
			this->подчеркнутыйToolStripMenuItem->Name = L"подчеркнутыйToolStripMenuItem";
			this->подчеркнутыйToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->подчеркнутыйToolStripMenuItem->Text = L"Подчеркнутый";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem5->Text = L"10";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem6->Text = L"12";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem7->Text = L"14";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem8->Text = L"16";
			// 
			// выравниваниеToolStripMenuItem
			// 
			this->выравниваниеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->выравниваниеToolStripMenuItem->Name = L"выравниваниеToolStripMenuItem";
			this->выравниваниеToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->выравниваниеToolStripMenuItem->Text = L"Выравнивание";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem2->Text = L"По ширине";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem3->Text = L"По правому краю";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem4->Text = L"По левому краю";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(292, 49);
			this->textBox2->MinimumSize = System::Drawing::Size(4, 200);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 200);
			this->textBox2->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 375);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void подчеркнутыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->TextAlign = HorizontalAlignment::Center;
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void файл1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamReader^ sr = gcnew
		System::IO::StreamReader("C:\\Users\\student\\Documents\\205 даааааа\\neeets\\text1.txt");
	System::String^ text = sr->ReadToEnd();
	textBox1->Text = text;
	sr->Close();
}

private: System::Void timesNewRomanToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font("Times New Roman", textBox1->Font->Size);
}
private: System::Void полужирныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, FontStyle::Bold);

	textBox1->Font = gcnew System::Drawing::Font(textBox2->Font->Name, textBox2->Font->Size, FontStyle::Bold);
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 10);
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
