// Copyright - SPXCEBXR GAMES

#pragma once

//https://unrealcommunity.wiki/logging-lgpidy6i#logging-using-ue_log

//Time all debugs are shown for
#define LOG_TIME 10.f

#define DEBUG_LOG(Category, Format, ...) DEBUG_LOG_K(Category, -1, Format, ##__VA_ARGS__);
#define DEBUG_LOG_K(Category, Key, Format, ...) UE_LOG(Category, Display, TEXT(Format), ##__VA_ARGS__); if(GEngine) GEngine->AddOnScreenDebugMessage(Key, LOG_TIME, FColor::Black, FString::Printf(TEXT("%s: "), *Category.GetCategoryName().ToString()) + FString::Printf(TEXT(Format), ##__VA_ARGS__), false);

#define DEBUG_WARN(Category, Format, ...) DEBUG_WARN_K(Category, -1, Format, ##__VA_ARGS__);
#define DEBUG_WARN_K(Category, Key, Format, ...) UE_LOG(Category, Warning, TEXT(Format), ##__VA_ARGS__); if(GEngine) GEngine->AddOnScreenDebugMessage(Key, LOG_TIME, FColor::Orange, FString::Printf(TEXT("%s: "), *Category.GetCategoryName().ToString()) + FString::Printf(TEXT(Format), ##__VA_ARGS__), false);

#define DEBUG_ERROR(Category, Format, ...) DEBUG_ERROR_K(Category, -1, Format, ##__VA_ARGS__);
#define DEBUG_ERROR_K(Category, Key, Format, ...) UE_LOG(Category, Error, TEXT(Format), ##__VA_ARGS__); if(GEngine) GEngine->AddOnScreenDebugMessage(Key, LOG_TIME, FColor::Red, FString::Printf(TEXT("%s: "), *Category.GetCategoryName().ToString()) + FString::Printf(TEXT(Format), ##__VA_ARGS__), false);

#define DEBUG_PASS(Category, Format, ...) DEBUG_PASS_K(Category, -1, Format, ##__VA_ARGS__);
#define DEBUG_PASS_K(Category, Key, Format, ...) UE_LOG(Category, Display, TEXT(Format), ##__VA_ARGS__); if(GEngine) GEngine->AddOnScreenDebugMessage(Key, LOG_TIME, FColor::Green, FString::Printf(TEXT("%s: "), *Category.GetCategoryName().ToString()) + FString::Printf(TEXT(Format), ##__VA_ARGS__), false);

#define LOG_INFO(Category, Format, ...) UE_LOG(Category, Verbose, TEXT(Format), ##__VA_ARGS__)
