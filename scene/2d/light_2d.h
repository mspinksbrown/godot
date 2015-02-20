#ifndef LIGHT_2D_H
#define LIGHT_2D_H

#include "scene/2d/node_2d.h"

class Light2D : public Node2D {

	OBJ_TYPE(Light2D,Node2D);
private:
	RID canvas_light;
	bool enabled;
	bool shadow;
	Color color;
	float height;
	int z_min;
	int z_max;
	int layer_min;
	int layer_max;
	int item_mask;
	bool subtract_mode;
	Ref<Texture> texture;
	Vector2 texture_offset;

protected:

	void _notification(int p_what);
	static void _bind_methods();
public:


	virtual void edit_set_pivot(const Point2& p_pivot);
	virtual Point2 edit_get_pivot() const;
	virtual bool edit_has_pivot() const;

	void set_enabled( bool p_enabled);
	bool is_enabled() const;

	void set_texture( const Ref<Texture>& p_texture);
	Ref<Texture> get_texture() const;

	void set_texture_offset( const Vector2& p_offset);
	Vector2 get_texture_offset() const;

	void set_color( const Color& p_color);
	Color get_color() const;

	void set_height( float p_height);
	float get_height() const;

	void set_z_range_min( int p_min_z);
	int get_z_range_min() const;

	void set_z_range_max( int p_max_z);
	int get_z_range_max() const;

	void set_layer_range_min( int p_min_layer);
	int get_layer_range_min() const;

	void set_layer_range_max( int p_max_layer);
	int get_layer_range_max() const;

	void set_item_mask( int p_mask);
	int get_item_mask() const;

	void set_subtract_mode( bool p_enable );
	bool get_subtract_mode() const;

	void set_shadow_enabled( bool p_enabled);
	bool is_shadow_enabled() const;

	virtual Rect2 get_item_rect() const;

	Light2D();
	~Light2D();
};


#endif // LIGHT_2D_H
