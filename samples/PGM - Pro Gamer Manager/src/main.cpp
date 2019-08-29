#include <AppCore/App.h>
#include <AppCore/Window.h>
#include <AppCore/Overlay.h>
#include <AppCore/JSHelpers.h>

#include "API/PGM_API.h"
#include "ultralight/ultralight.h"

using namespace ultralight;

auto main(int argc, const char *argv[]) -> int
{
  auto ul = std::make_unique<UL::ultralight>();

  ul->run();

  return EXIT_SUCCESS;
}
