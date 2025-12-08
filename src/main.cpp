#include <gtkmm.h>


class win : public Gtk::Window {
  public: Gtk::Window win {
  };
};

int main(int argc, char **argv) {
  auto app = Gtk::Application::create();

  return app->make_window_and_run<win>(argc, argv);
}
