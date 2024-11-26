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

	static std::wstring ConvertMultiByteStringToWideSttring(const std::string& mString);

	DirectX::TexMetadata metadata_;

	DirectX::ScratchImage scratchImage_;

};

