#include "ultralight.h"

#include <AppCore/App.h>
#include <AppCore/Window.h>
#include <AppCore/Overlay.h>

#include "../API/PGM_API.h"

using namespace ultralight;

namespace UL
{
ultralight::ultralight()
{
}

ultralight::~ultralight()
{
}

void ultralight::run()
{
    auto app = App::Create();

    auto window = Window::Create(app->main_monitor(), 1100, 600, false, kWindowFlags_Titled);

    window->SetTitle("PGM - Pro Gamer Manager");

    app->set_window(window);

    auto overlay = Overlay::Create(window, window->width(), window->height(), 0, 0);

    overlay->view()->LoadURL("file:///main.html");

    app->Run();
}
} // namespace UL