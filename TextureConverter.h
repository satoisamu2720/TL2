#pragma once
#include <string>
#include <Windows.h>
#include "DirectXTex/DirectXTex.h"
class TextureConverter
{
public:
	void ConvertTextureWICToDDS(const std::string& filePath);
private:
	void LoadWICTextureFromFile(const std::string& filePath);

	void SeparateFilePath(const std::wstring& filePath);

	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	DirectX::TexMetadata metadata_;

	DirectX::ScratchImage scratchImage_;
private:
	std::wstring directoryPath;

	std::wstring fileName;

	std::wstring fileExt;

};

