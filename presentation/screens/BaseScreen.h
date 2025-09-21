//
// Created by Dan Gerchcovich on 21/9/2025.
//

#pragma once

struct BaseScreen {
   virtual void onAppearing();
   virtual void onDisappearing();
   virtual void onAppeared();
   virtual void onDisappeared();
   virtual void onCleared();
   virtual void onDestroyed();
};
