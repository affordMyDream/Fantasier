#include <iostream>
#include "Renderer.hpp"


int main()
{
	Renderer::GetInstance()->InitializeScene("default");
	Renderer::GetInstance()->InitializeBuffer();
	Renderer::GetInstance()->RenderScene();
	std::cout << "��Ⱦ��������ɡ�" << std::endl;


	return 0;
}