/*#pragma once

namespace My1022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// c1 ժҪ
	/// </summary>
	public ref class c1 : public System::Windows::Forms::Form
	{
	public:
		c1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~c1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// c1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"c1";
			this->Text = L"c1";
			this->Load += gcnew System::EventHandler(this, &c1::c1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void c1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}*/
/*#include<stdio.h>
void main()
{
	printf("Hello everybody!");
}*/
#include<stdio.h>
void main() 
{
	printf("1+2=%d",1+2);
}

