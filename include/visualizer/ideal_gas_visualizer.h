
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "core/particle_container.h"

// using namespace ci;
// using namespace ci::app;
using ci::Color;
using idealgas::ParticleContainer;
using ci::app::App;
using ci::app::MouseEvent;
using ci::app::KeyEvent;

namespace idealgas {

class IdealGasVisualizer : public App {
 public:
  /**
   * @brief Constructs a visualizer object and initializes its container.
   *
   */
  IdealGasVisualizer();
  void setup() override;
  void mouseDown(MouseEvent event) override;
  void update() override;
  void draw() override;
  void keyDown(KeyEvent event) override;

  void DrawContainer();
  void DrawMessage();
  void DrawParticles();

  size_t window_width_;
  size_t window_height_;
  size_t margin_;
  size_t stroke_;
  size_t box_width_;
  size_t box_height_;
  Color background_color_;
  Color stroke_color_;
  Color text_color_;
  string font_;

 private:
  ParticleContainer container_;
};

}  // namespace idealgas