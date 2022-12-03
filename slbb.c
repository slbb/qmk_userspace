#include QMK_KEYBOARD_H

#ifdef KEYBOARD_mt
	#ifdef KEYBOARD_mt_split75
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case DF(0):
			if (record->event.pressed) {
				set_single_persistent_default_layer(0);
			}
			return false;
		case DF(1):
			if (record->event.pressed) {
				set_single_persistent_default_layer(1);
			}
			return false;
	}
	return true;
}
	#endif
#endif
