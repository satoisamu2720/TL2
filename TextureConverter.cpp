#include "TextureConverter.h"
#include <cassert>
using namespace DirectX;

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	LoadWICTextureFromFile(filePath);

	//2
}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filePath);

	HRESULT result = LoadFromWICFile(wfilePath.c_str(), WIC_FLAGS_NONE, &metadata_, scratchImage_);

	assert(SUCCEEDED(result));
}

void TextureConverter::SeparateFilePath(const std::wstring& filePath)
{
	size_t pos1;
	std::wstring exceptExt;

	pos1 = filePath.rfind(" . ");
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	std::wstring wString;
	wString.resize(filePathBufferSize);

	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);
	return wString;
}
