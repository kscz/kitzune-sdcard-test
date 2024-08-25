BaseType_t player_set_playlist(playlist_operator_handle_t new_playlist, TickType_t ticksToWait);
esp_err_t player_playpause(void);
esp_err_t player_be_set_bt_hp(void);
esp_err_t player_next(void);
void player_be_init(esp_periph_handle_t bt_periph);
void player_set_shuffle(bool is_shuffle);
bool player_get_shuffle(void);
void player_main(void);
