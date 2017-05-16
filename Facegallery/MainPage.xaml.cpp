//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <iostream>
#include <filesystem>
using namespace Facegallery;
using namespace concurrency;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::Storage::Pickers;
using namespace Windows::Storage;
// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}




void Facegallery::MainPage::Grid_SizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e)
{
	FlipImage->Width = e->NewSize.Width;
	FlipImage->Height = e->NewSize.Height - 200;
}


void Facegallery::MainPage::ImportBtn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	FolderPicker ^ folderPicker = ref new FolderPicker();
	folderPicker->ViewMode = PickerViewMode::Thumbnail;
	folderPicker->SuggestedStartLocation = PickerLocationId::PicturesLibrary;
	folderPicker->FileTypeFilter->Append("*");
	create_task(folderPicker->PickSingleFolderAsync()).then([this](StorageFolder ^ folder) {
		if (folder) {
			String ^ path = folder->Path->ToString();
			
			create_task(folder->GetFilesAsync()).then([this](IVectorView<StorageFile ^> ^ files) {
				if (files->Size > 0) {
					String ^output = "";
					
					std::for_each(begin(files), end(files), [this, &output](StorageFile ^ file) {
						if (file->FileType == ".jpg") {
							ListItems->Items->Append(file->Name->ToString());
						}
						
					});
				}
			});
		}
	});
	
}
