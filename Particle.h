#pragma once

namespace sdl_basic {

	struct Particle{

	private:
		double m_speed;
		double m_direction;

	private:
		void init();

	public:
		double m_x;
		double m_y;

	public:
		Particle();
		virtual ~Particle();
		void update(int interval);
	};

}