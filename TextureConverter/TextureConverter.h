#pragma once
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include <filesystem>
#include<string>
#include<vector>
#include <future> 
#include<assert.h>

#pragma comment(lib,"d3d12.lib")
#pragma comment(lib,"dxgi.lib")
#pragma comment(lib,"dxguid.lib")
#pragma comment(lib,"dxcompiler.lib")
#include"../DirectXTex/DirectXTex.h"

class TextureConverter
{
public:
	void DDS(const std::string& filePath);

private:
	void SepateFilePath(const std::wstring&filePath);
	void LoadWCTextureFromFile(const std::string& filePath);
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage scratchImage_;
	std::wstring directoryPath_;
	std::wstring fileName_;
	std::wstring fileExt_;
};
