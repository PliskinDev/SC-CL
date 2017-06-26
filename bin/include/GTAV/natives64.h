/*H**********************************************************************
* FILENAME :	natives64.h					START DATE :	10 Sept 16
*
* DESCRIPTION :
*		Native functions to be used with all 64 bit GTAV targets and platforms of SC-CL.
*
* NOTES :
*		This file is part of SC-CL's include library.
*
* LICENSE :
*
*		Copyright 2016 SC-CL
*
*		Redistribution and use in source and binary forms, with or without
*		modification, are permitted provided that the following conditions are met:
*
*		* Redistributions of source code must retain the above copyright
*		notice, this list of conditions and the following disclaimer.
*
*		* Redistributions in binary form must reproduce the above copyright
*		notice, this list of conditions and the following disclaimer in the
*		documentation and/or other materials provided with the distribution.
*
*		* Neither SC-CL nor its contributors may be used to endorse or promote products
*		derived from this software without specific prior written permission.
*
*		* Redistribution of this software in source or binary forms shall be free
*		of all charges or fees to the recipient of this software.
*
*		THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
*		ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
*		WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*		DISCLAIMED. IN NO EVENT SHALL SC-CL BE LIABLE FOR ANY
*		DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
*		(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*		LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
*		ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*		(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
*		SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* AUTHORS :
*		Rocko Tompkins
*		Nathan James
*H*/
#pragma once
#include "types.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshift-count-overflow"

//Fix for intellisense nonsense
#ifndef _MSC_VER
#define _native64(hash) __attribute((native(hash & 0xFFFFFFFF, hash >> 32)))
#define l ;
#else
#define l {}
#define _native64(hash)
#endif

#pragma region PLAYER //{
extern _native64(0x43A66C31C68491C0) Ped get_player_ped(Player player)l
extern _native64(0x50FAC3A3E030A6E1) Entity get_player_ped_script_index(Player player)l
extern _native64(0x00A1CADD00108836) void set_player_model(Player player, Hash model)l
extern _native64(0x048189FAC643DEEE) void change_player_ped(Player player, Ped ped, bool b2, bool b3)l
extern _native64(0xE902EF951DCE178F) void get_player_rgb_colour(Player player, int* r, int* g, int* b)l
extern _native64(0x407C7F91DDB46C16) int get_number_of_players()l
extern _native64(0x37039302F4E0A008) int get_player_team(Player player)l
extern _native64(0x0299FA38396A4940) void set_player_team(Player player, int team)l
extern _native64(0x6D0DE6A7B5DA71F8) const char* get_player_name(Player player)l
extern _native64(0x085DEB493BE80812) float get_wanted_level_radius(Player player)l
extern _native64(0x0C92BA89F1AF26F8) vector3 get_player_wanted_centre_position(Player player)l
extern _native64(0x520E541A97A13354) void set_player_wanted_centre_position(Player player, vector3* position, bool p2, bool p3)l
extern _native64(0xFDD179EAF45B556C) int get_wanted_level_threshold(int wantedLevel)l
extern _native64(0x39FF19C64EF7DA5B) void set_player_wanted_level(Player player, int wantedLevel, bool disableNoMission)l
extern _native64(0x340E61DE7F471565) void set_player_wanted_level_no_drop(Player player, int wantedLevel, bool p2)l
extern _native64(0xE0A7D1E497FFCD6F) void set_player_wanted_level_now(Player player, bool p1)l
extern _native64(0xAFAF86043E5874E9) bool are_player_flashing_stars_about_to_drop(Player player)l
extern _native64(0x0A6EB355EE14A2DB) bool are_player_stars_greyed_out(Player player)l
extern _native64(0xDB172424876553F4) void set_dispatch_cops_for_player(Player player, bool toggle)l
extern _native64(0x238DB2A2C23EE9EF) bool is_player_wanted_level_greater(Player player, int wantedLevel)l
extern _native64(0xB302540597885499) void clear_player_wanted_level(Player player)l
extern _native64(0x424D4687FA1E5652) bool is_player_dead(Player player)l
extern _native64(0xFA1E2BF8B10598F9) bool is_player_pressing_horn(Player player)l
extern _native64(0x8D32347D6D4C40A2) void set_player_control(Player player, bool toggle, int possiblyFlags)l
extern _native64(0xE28E54788CE8F12D) int get_player_wanted_level(Player player)l
extern _native64(0xAA5F02DB48D704B9) void set_max_wanted_level(int maxWantedLevel)l
extern _native64(0x43286D561B72B8BF) void set_police_radar_blips(bool toggle)l
extern _native64(0x32C62AA929C2DA6A) void set_police_ignore_player(Player player, bool toggle)l
extern _native64(0x5E9564D8246B909A) bool is_player_playing(Player player)l
extern _native64(0x8EEDA153AD141BA4) void set_everyone_ignore_player(Player player, bool toggle)l
extern _native64(0x056E0FE8534C2949) void set_all_random_peds_flee(Player player, bool toggle)l
extern _native64(0x471D2FF42A94B4F2) void set_all_random_peds_flee_this_frame(Player player)l
extern _native64(0xDE45D1A1EF45EE61) void unk_0xDE45D1A1EF45EE61(Player player, bool toggle)l
extern _native64(0xC3376F42B1FACCC6) void unk_0xC3376F42B1FACCC6(Player player)l
extern _native64(0x596976B02B6B5700) void set_ignore_low_priority_shocking_events(Player player, bool toggle)l
extern _native64(0x020E5F00CDA207BA) void set_wanted_level_multiplier(float multiplier)l
extern _native64(0x9B0BB33B04405E7A) void set_wanted_level_difficulty(Player player, float difficulty)l
extern _native64(0xB9D0DD990DC141DD) void reset_wanted_level_difficulty(Player player)l
extern _native64(0xBF9BD71691857E48) void start_firing_amnesty(int duration)l
extern _native64(0xE9B09589827545E7) void report_crime(Player player, int crimeType, int wantedLvlThresh)l
extern _native64(0x9A987297ED8BD838) void _switch_crime_type(Player player, int p1)l
extern _native64(0xBC9490CA15AEA8FB) void unk_0xBC9490CA15AEA8FB(Player player)l
extern _native64(0x4669B3ED80F24B4E) any unk_0x4669B3ED80F24B4E(Player player)l
extern _native64(0xAD73CE5A09E42D12) any unk_0xAD73CE5A09E42D12(Player player)l
extern _native64(0x36F1B38855F2A8DF) void unk_0x36F1B38855F2A8DF(Player player)l
extern _native64(0xDC64D2C53493ED12) void unk_0xDC64D2C53493ED12(Player player)l
extern _native64(0xB45EFF719D8427A6) void unk_0xB45EFF719D8427A6(float p0)l
extern _native64(0x0032A6DBA562C518) void unk_0x0032A6DBA562C518()l
extern _native64(0xDE7465A27D403C06) bool can_player_start_mission(Player player)l
extern _native64(0x908CBECC2CAA3690) bool is_player_ready_for_cutscene(Player player)l
extern _native64(0x7912F7FC4F6264B6) bool is_player_targetting_entity(Player player, Entity entity)l
extern _native64(0x13EDE1A5DBF797C9) bool get_player_target_entity(Player player, Entity* entity)l
extern _native64(0x2E397FD2ECD37C87) bool is_player_free_aiming(Player player)l
extern _native64(0x3C06B5C839B38F7B) bool is_player_free_aiming_at_entity(Player player, Entity entity)l
extern _native64(0x2975C866E6713290) bool get_entity_player_is_free_aiming_at(Player player, Entity* entity)l
extern _native64(0x29961D490E5814FD) void set_player_lockon_range_override(Player player, float range)l
extern _native64(0x6E8834B52EC20C77) void set_player_can_do_drive_by(Player player, bool toggle)l
extern _native64(0xD5E460AD7020A246) void set_player_can_be_hassled_by_gangs(Player player, bool toggle)l
extern _native64(0xD465A8599DFF6814) any set_player_can_use_cover(Player player, bool toggle)l
extern _native64(0x462E0DB9B137DC5F) int get_max_wanted_level()l
extern _native64(0x78CFE51896B6B8A4) bool is_player_targetting_anything(Player player)l
extern _native64(0xA01B8075D8B92DF4) void set_player_sprint(Player player, bool toggle)l
extern _native64(0xA6F312FCCE9C1DFE) void reset_player_stamina(Player player)l
extern _native64(0xA352C1B864CAFD33) void restore_player_stamina(Player player, float p1)l
extern _native64(0x3F9F16F8E65A7ED7) float get_player_sprint_stamina_remaining(Player player)l
extern _native64(0x1885BC9B108B4C99) float get_player_sprint_time_remaining(Player player)l
extern _native64(0xA1FCF8E6AF40B731) float get_player_underwater_time_remaining(Player player)l
extern _native64(0x0D127585F77030AF) int get_player_group(Player player)l
extern _native64(0x92659B4CE1863CB3) int get_player_max_armour(Player player)l
extern _native64(0x49C32D60007AFA47) bool is_player_control_on(Player player)l
extern _native64(0x7C814D2FB49F40C0) bool _is_player_cam_control_disabled()l
extern _native64(0x8A876A65283DD7D7) bool is_player_script_control_on(Player player)l
extern _native64(0x95E8F73DC65EFB9C) bool is_player_climbing(Player player)l
extern _native64(0x388A47C51ABDAC8E) bool is_player_being_arrested(Player player, bool atArresting)l
extern _native64(0x2D03E13C460760D6) void reset_player_arrest_state(Player player)l
extern _native64(0xB6997A7EB3F5C8C0) Vehicle get_players_last_vehicle()l
extern _native64(0xA5EDC40EF369B48D) Player get_player_index()l
extern _native64(0x41BD2A6B006AF756) Player int_to_playerindex(int value)l
extern _native64(0x9EC6603812C24710) int int_to_participantindex(int value)l
extern _native64(0x5D35ECF3A81A0EE0) int get_time_since_player_hit_vehicle(Player player)l
extern _native64(0xE36A25322DC35F42) int get_time_since_player_hit_ped(Player player)l
extern _native64(0xD559D2BE9E37853B) int get_time_since_player_drove_on_pavement(Player player)l
extern _native64(0xDB89591E290D9182) int get_time_since_player_drove_against_traffic(Player player)l
extern _native64(0xDCCFD3F106C36AB4) bool is_player_free_for_ambient_task(Player player)l
extern _native64(0x4F8644AF03D0E0D6) Player player_id()l
extern _native64(0xD80958FC74E988A6) Ped player_ped_id()l
extern _native64(0xEE68096F9F37341E) int network_player_id_to_int()l
extern _native64(0xC968670BFACE42D9) bool has_force_cleanup_occurred(int cleanupFlags)l
extern _native64(0xBC8983F38F78ED51) void force_cleanup(int cleanupFlags)l
extern _native64(0x4C68DDDDF0097317) void force_cleanup_for_all_threads_with_this_name(const char* name, int cleanupFlags)l
extern _native64(0xF745B37630DF176B) void force_cleanup_for_thread_with_this_id(int id, int cleanupFlags)l
extern _native64(0x9A41CF4674A12272) int get_cause_of_most_recent_force_cleanup()l
extern _native64(0x8026FF78F208978A) void set_player_may_only_enter_this_vehicle(Player player, Vehicle vehicle)l
extern _native64(0x1DE37BBF9E9CC14A) void set_player_may_not_enter_any_vehicle(Player player)l
extern _native64(0xBEC7076D64130195) bool give_achievement_to_player(int achievement)l
extern _native64(0xC2AFFFDABBDC2C5C) bool unk_0xC2AFFFDABBDC2C5C(any p0, any p1)l
extern _native64(0x1C186837D0619335) Cam unk_0x1C186837D0619335(any p0)l
extern _native64(0x867365E111A3B6EB) bool has_achievement_been_passed(int achievement)l
extern _native64(0xF25D331DC2627BBC) bool is_player_online()l
extern _native64(0x74556E1420867ECA) bool is_player_logging_in_np()l
extern _native64(0x94DD7888C10A979E) void display_system_signin_ui(bool unk)l
extern _native64(0x5D511E3867C87139) bool is_system_ui_being_displayed()l
extern _native64(0x239528EACDC3E7DE) void set_player_invincible(Player player, bool toggle)l
extern _native64(0xB721981B2B939E07) bool get_player_invincible(Player player)l
extern _native64(0xCAC57395B151135F) void unk_0xCAC57395B151135F(Player player, bool p1)l
extern _native64(0xF3AC26D3CC576528) any remove_player_helmet(Player player, bool p2)l
extern _native64(0x3C49C870E66F0A28) void give_player_ragdoll_control(Player player, bool toggle)l
extern _native64(0x5C8B2F450EE4328E) void set_player_lockon(Player player, bool toggle)l
extern _native64(0xB1906895227793F3) void set_player_targeting_mode(int targetMode)l
extern _native64(0x5702B917B99DB1CD) void unk_0x5702B917B99DB1CD(any p0)l
extern _native64(0xB9CF1F793A9F1BF1) any unk_0xB9CF1F793A9F1BF1()l
extern _native64(0xF0B67A4DE6AB5F98) void clear_player_has_damaged_at_least_one_ped(Player player)l
extern _native64(0x20CE80B0C2BF4ACC) bool has_player_damaged_at_least_one_ped(Player player)l
extern _native64(0x4AACB96203D11A31) void clear_player_has_damaged_at_least_one_non_animal_ped(Player player)l
extern _native64(0xE4B90F367BD81752) bool has_player_damaged_at_least_one_non_animal_ped(Player player)l
extern _native64(0xCA7DC8329F0A1E9E) void set_air_drag_multiplier_for_players_vehicle(Player player, float multiplier)l
extern _native64(0xA91C6F0FF7D16A13) void set_swim_multiplier_for_player(Player player, float multiplier)l
extern _native64(0x6DB47AA77FD94E09) void set_run_sprint_multiplier_for_player(Player player, float multiplier)l
extern _native64(0x5063F92F07C2A316) int get_time_since_last_arrest()l
extern _native64(0xC7034807558DDFCA) int get_time_since_last_death()l
extern _native64(0xAEBF081FFC0A0E5E) void assisted_movement_close_route()l
extern _native64(0x8621390F0CDCFE1F) void assisted_movement_flush_route()l
extern _native64(0x0FEE4F80AC44A726) void set_player_forced_aim(Player player, bool toggle)l
extern _native64(0x75E7D505F2B15902) void set_player_forced_zoom(Player player, bool toggle)l
extern _native64(0x7651BC64AE59E128) void set_player_force_skip_aim_intro(Player player, bool toggle)l
extern _native64(0x5E6CC07646BBEAB8) void disable_player_firing(Player player, bool toggle)l
extern _native64(0xB885852C39CC265D) void unk_0xB885852C39CC265D()l
extern _native64(0x2E8AABFA40A84F8C) void set_disable_ambient_melee_move(Player player, bool toggle)l
extern _native64(0x77DFCCF5948B8C71) void set_player_max_armour(Player player, int value)l
extern _native64(0xD6A953C6D1492057) void special_ability_deactivate(Player player)l
extern _native64(0x9CB5CE07A3968D5A) void special_ability_deactivate_fast(Player player)l
extern _native64(0x375F0E738F861A94) void special_ability_reset(Player player)l
extern _native64(0xC9A763D8FE87436A) void unk_0xC9A763D8FE87436A(Player player)l
extern _native64(0x2E7B9B683481687D) void special_ability_charge_small(Player player, bool p1, bool p2)l
extern _native64(0xF113E3AA9BC54613) void special_ability_charge_medium(Player player, bool p1, bool p2)l
extern _native64(0xF733F45FA4497D93) void special_ability_charge_large(Player player, bool p1, bool p2)l
extern _native64(0xED481732DFF7E997) void special_ability_charge_continuous(Player player, Ped p2)l
extern _native64(0xB7B0870EB531D08D) void special_ability_charge_absolute(Player player, int p1, bool p2)l
extern _native64(0xA0696A65F009EE18) void special_ability_charge_normalized(Player player, float normalizedValue, bool p2)l
extern _native64(0x3DACA8DDC6FD4980) void special_ability_fill_meter(Player player, bool p1)l
extern _native64(0x1D506DBBBC51E64B) void special_ability_deplete_meter(Player player, bool p1)l
extern _native64(0x6A09D0D590A47D13) void special_ability_lock(Hash playerModel)l
extern _native64(0xF145F3BE2EFA9A3B) void special_ability_unlock(Hash playerModel)l
extern _native64(0xC6017F6A6CDFA694) bool is_special_ability_unlocked(Hash playerModel)l
extern _native64(0x3E5F7FC85D854E15) bool is_special_ability_active(Player player)l
extern _native64(0x05A1FE504B7F2587) bool is_special_ability_meter_full(Player player)l
extern _native64(0x181EC197DAEFE121) void enable_special_ability(Player player, bool toggle)l
extern _native64(0xB1D200FE26AEF3CB) bool is_special_ability_enabled(Player player)l
extern _native64(0xA49C426ED0CA4AB7) void set_special_ability_multiplier(float multiplier)l
extern _native64(0xFFEE8FA29AB9A18E) void unk_0xFFEE8FA29AB9A18E(Player player)l
extern _native64(0x5FC472C501CCADB3) bool unk_0x5FC472C501CCADB3(Player player)l
extern _native64(0xF10B44FD479D69F3) bool unk_0xF10B44FD479D69F3(Player player, int p1)l
extern _native64(0xDD2620B7B9D16FF1) bool unk_0xDD2620B7B9D16FF1(Player player, float p1)l
extern _native64(0xAD15F075A4DA0FDE) void start_player_teleport(Player player, vector3 vec, float heading, bool p5, bool p6, bool p7)l
extern _native64(0xE23D5873C2394C61) bool _has_player_teleport_finished(Player player)l
extern _native64(0xC449EDED9D73009C) void stop_player_teleport()l
extern _native64(0x02B15662D7F8886F) bool is_player_teleport_active()l
extern _native64(0x2F395D61F3A1F877) float get_player_current_stealth_noise(Player player)l
extern _native64(0x5DB660B38DD98A31) void set_player_health_recharge_multiplier(Player player, float regenRate)l
extern _native64(0xCE07B9F7817AADA3) void set_player_weapon_damage_modifier(Player player, float damageAmount)l
extern _native64(0x2D83BC011CA14A3C) void set_player_weapon_defense_modifier(Player player, float modifier)l
extern _native64(0x4A3DC7ECCC321032) void set_player_melee_weapon_damage_modifier(Player player, float modifier, int p2)l
extern _native64(0xAE540335B4ABC4E2) void set_player_melee_weapon_defense_modifier(Player player, float modifier)l
extern _native64(0xA50E117CDDF82F0C) void set_player_vehicle_damage_modifier(Player player, float damageAmount)l
extern _native64(0x4C60E6EFDAFF2462) void set_player_vehicle_defense_modifier(Player player, float modifier)l
extern _native64(0xA3D0E54541D9A5E5) void set_player_parachute_tint_index(Player player, int tintIndex)l
extern _native64(0x75D3F7A1B0D9B145) void get_player_parachute_tint_index(Player player, int* tintIndex)l
extern _native64(0xAF04C87F5DC1DF38) void set_player_reserve_parachute_tint_index(Player player, int index)l
extern _native64(0xD5A016BC3C09CF40) void get_player_reserve_parachute_tint_index(Player player, int* index)l
extern _native64(0x93B0FB27C9A04060) void set_player_parachute_pack_tint_index(Player player, int tintIndex)l
extern _native64(0x6E9C742F340CE5A2) void get_player_parachute_pack_tint_index(Player player, int* tintIndex)l
extern _native64(0x7DDAB28D31FAC363) void set_player_has_reserve_parachute(Player player)l
extern _native64(0x5DDFE2FF727F3CA3) bool get_player_has_reserve_parachute(Player player)l
extern _native64(0xF401B182DBA8AF53) void set_player_can_leave_parachute_smoke_trail(Player player, bool enabled)l
extern _native64(0x8217FD371A4625CF) void set_player_parachute_smoke_trail_color(Player player, RGB colour)l
extern _native64(0xEF56DBABD3CD4887) void get_player_parachute_smoke_trail_color(Player player, int* r, int* g, int* b)l
extern _native64(0x11D5F725F0E780E0) void set_player_reset_flag_prefer_rear_seats(Player player, int flags)l
extern _native64(0xDB89EF50FF25FCE9) void set_player_noise_multiplier(Player player, float multiplier)l
extern _native64(0xB2C1A29588A9F47C) void set_player_sneaking_noise_multiplier(Player player, float multiplier)l
extern _native64(0xF297383AA91DCA29) bool can_ped_hear_player(Player player, Ped ped)l
extern _native64(0x477D5D63E63ECA5D) void simulate_player_input_gait(Player player, float amount, int gaitType, float speed, bool p4, bool p5)l
extern _native64(0x19531C47A2ABD691) void reset_player_input_gait(Player player)l
extern _native64(0x9F343285A00B4BB6) void set_auto_give_parachute_when_enter_plane(Player player, bool toggle)l
extern _native64(0xD2B315B6689D537D) void unk_0xD2B315B6689D537D(Player player, bool p1)l
extern _native64(0x4E9021C1FCDD507A) void set_player_stealth_perception_modifier(Player player, float value)l
extern _native64(0x690A61A6D13583F6) bool unk_0x690A61A6D13583F6(any p0)l
extern _native64(0x9EDD76E87D5D51BA) void unk_0x9EDD76E87D5D51BA(Player player)l
extern _native64(0xC54C95DA968EC5B5) void set_player_simulate_aiming(Player player, bool toggle)l
extern _native64(0x749FADDF97DFE930) void set_player_cloth_pin_frames(Player player, bool toggle)l
extern _native64(0x9F7BBA2EA6372500) void set_player_cloth_package_index(int index)l
extern _native64(0x14D913B777DFF5DA) void set_player_cloth_lock_counter(int value)l
extern _native64(0xED51733DC73AED51) void player_attach_virtual_bound(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7)l
extern _native64(0x1DD5897E2FA6E7C9) void player_detach_virtual_bound()l
extern _native64(0xD705740BB0A1CF4C) bool has_player_been_spotted_in_stolen_vehicle(Player player)l
extern _native64(0x38D28DA81E4E9BF9) bool unk_0x38D28DA81E4E9BF9(Player player)l
extern _native64(0xBC0753C9CA14B506) bool unk_0xBC0753C9CA14B506(Player player, int p1, bool p2)l
extern _native64(0x5006D96C995A5827) void _expand_world_limits(vector3 vec)l
extern _native64(0x4EC12697209F2196) bool is_player_riding_train(Player player)l
extern _native64(0xD55DDFB47991A294) bool has_player_left_the_world(Player player)l
extern _native64(0xFF300C7649724A0B) void unk_0xFF300C7649724A0B(Player player, bool p1)l
extern _native64(0xD9284A8C0D48352C) void set_player_parachute_variation_override(Player player, int p1, any p2, any p3, bool p4)l
extern _native64(0x0F4CC924CF8C7B21) void clear_player_parachute_variation_override(Player player)l
extern _native64(0x977DB4641F6FC3DB) void set_player_parachute_model_override(Player player, Hash model)l
extern _native64(0x8753997EB5F6EE3F) void clear_player_parachute_model_override(Player player)l
extern _native64(0xDC80A4C2F18A2B64) void set_player_parachute_pack_model_override(Player player, Hash model)l
extern _native64(0x10C54E4389C12B42) void clear_player_parachute_pack_model_override(Player player)l
extern _native64(0xC142BE3BB9CE125F) void disable_player_vehicle_rewards(Player player)l
extern _native64(0x2F7CEB6520288061) void unk_0x2F7CEB6520288061(bool p0)l
extern _native64(0x5DC40A8869C22141) void unk_0x5DC40A8869C22141(bool p0, ScrHandle p1)l
extern _native64(0x65FAEE425DE637B0) bool unk_0x65FAEE425DE637B0(Player p0)l
extern _native64(0x5501B7A5CDB79D37) void unk_0x5501B7A5CDB79D37(any p0)l
extern _native64(0x56105E599CAB0EFA) Player unk_0x56105E599CAB0EFA(int* p0)l
extern _native64(0x8BC515BAE4AAF8FF) float _get_player_health_recharge_limit(Player player)l
extern _native64(0xC388A0F065F5BC34) void _set_player_health_recharge_limit(Player player, float value)l
extern _native64(0x6BC97F4F4BB3C04B) void _set_player_invincible_keep_ragdoll_enabled(Player player, bool enabled)l
#pragma endregion //}
#pragma region ENTITY //{
extern _native64(0x7239B21A38F536BA) bool does_entity_exist(Entity entity)l
extern _native64(0xDDE6DF5AE89981D2) bool does_entity_belong_to_this_script(Entity entity, bool p1)l
extern _native64(0x060D6E96F8B8E48D) bool does_entity_have_drawable(Entity entity)l
extern _native64(0xDA95EA3317CC5064) bool does_entity_have_physics(Entity entity)l
extern _native64(0x20B711662962B472) bool has_entity_anim_finished(Entity entity, const char* animDict, const char* animName, int p3)l
extern _native64(0x95EB9964FF5C5C65) bool has_entity_been_damaged_by_any_object(Entity entity)l
extern _native64(0x605F5A140F202491) bool has_entity_been_damaged_by_any_ped(Entity entity)l
extern _native64(0xDFD5033FDBA0A9C8) bool has_entity_been_damaged_by_any_vehicle(Entity entity)l
extern _native64(0xC86D67D52A707CF8) bool has_entity_been_damaged_by_entity(Entity entity1, Entity entity2, bool p2)l
extern _native64(0xFCDFF7B72D23A1AC) bool has_entity_clear_los_to_entity(Entity entity1, Entity entity2, int traceType)l
extern _native64(0x0267D00AF114F17A) bool has_entity_clear_los_to_entity_in_front(Entity entity1, Entity entity2)l
extern _native64(0x8BAD02F0368D9E14) bool has_entity_collided_with_anything(Entity entity)l
extern _native64(0x5C3D0A935F535C4C) Hash get_last_material_hit_by_entity(Entity entity)l
extern _native64(0xE465D4AB7CA6AE72) vector3 get_collision_normal_of_last_hit_for_entity(Entity entity)l
extern _native64(0x40FDEDB72F8293B2) void force_entity_ai_and_animation_update(Entity entity)l
extern _native64(0x346D81500D088F42) float get_entity_anim_current_time(Entity entity, const char* animDict, const char* animName)l
extern _native64(0x50BD2730B191E360) float get_entity_anim_total_time(Entity entity, const char* animDict, const char* animName)l
extern _native64(0xFEDDF04D62B8D790) float get_anim_duration(const char* animDict, const char* animName)l
extern _native64(0x48C2BED9180FE123) Entity get_entity_attached_to(Entity entity)l
extern _native64(0x3FEF770D40960D5A) vector3 get_entity_coords(Entity entity, bool alive)l
extern _native64(0x0A794A5A57F8DF91) vector3 get_entity_forward_vector(Entity entity)l
extern _native64(0x8BB4EF4214E0E6D5) float get_entity_forward_x(Entity entity)l
extern _native64(0x866A4A5FAE349510) float get_entity_forward_y(Entity entity)l
extern _native64(0xE83D4F9BA2A38914) float get_entity_heading(Entity entity)l
extern _native64(0x846BF6291198A71E) float _get_entity_physics_heading(Entity entity)l
extern _native64(0xEEF059FAD016D209) int get_entity_health(Entity entity)l
extern _native64(0x15D757606D170C3C) int get_entity_max_health(Entity entity)l
extern _native64(0x166E7CF68597D8B5) void set_entity_max_health(Entity entity, int value)l
extern _native64(0x5A504562485944DD) float get_entity_height(Entity entity, vector3 vec, bool atTop, bool inWorldCoords)l
extern _native64(0x1DD55701034110E5) float get_entity_height_above_ground(Entity entity)l
extern _native64(0xECB2FC7235A7D137) void get_entity_matrix(Entity entity, vector3* rightVector, vector3* forwardVector, vector3* upVector, vector3* position)l
extern _native64(0x9F47B058362C84B5) Hash get_entity_model(Entity entity)l
extern _native64(0x2274BC1C4885E333) vector3 get_offset_from_entity_given_world_coords(Entity entity, vector3 pos)l
extern _native64(0x1899F328B0E12848) vector3 get_offset_from_entity_in_world_coords(Entity entity, vector3 offset)l
extern _native64(0xD45DC2893621E1FE) float get_entity_pitch(Entity entity)l
extern _native64(0x7B3703D2D32DFA18) void get_entity_quaternion(Entity entity, float* x, float* y, float* z, float* w)l
extern _native64(0x831E0242595560DF) float get_entity_roll(Entity entity)l
extern _native64(0xAFBD61CC738D9EB9) vector3 get_entity_rotation(Entity entity, int rotationOrder)l
extern _native64(0x213B91045D09B983) vector3 get_entity_rotation_velocity(Entity entity)l
extern _native64(0xA6E9C38DB51D7748) const char* get_entity_script(Entity entity, ScrHandle* script)l
extern _native64(0xD5037BA82E12416F) float get_entity_speed(Entity entity)l
extern _native64(0x9A8D700A51CB7B0D) vector3 get_entity_speed_vector(Entity entity, bool relative)l
extern _native64(0x95EED5A694951F9F) float get_entity_upright_value(Entity entity)l
extern _native64(0x4805D2B1D8CF94A9) vector3 get_entity_velocity(Entity entity)l
extern _native64(0xD7E3B9735C0F89D6) Object get_object_index_from_entity_index(Entity entity)l
extern _native64(0x04A2A40C73395041) Ped get_ped_index_from_entity_index(Entity entity)l
extern _native64(0x4B53F92932ADFAC0) Vehicle get_vehicle_index_from_entity_index(Entity entity)l
extern _native64(0x44A8FCB8ED227738) vector3 get_world_position_of_entity_bone(Entity entity, int boneIndex)l
extern _native64(0x7196842CB375CDB3) Player get_nearest_player_to_entity(Entity entity)l
extern _native64(0x4DC9A62F844D9337) Player get_nearest_player_to_entity_on_team(Entity entity, int team)l
extern _native64(0x8ACD366038D14505) int get_entity_type(Entity entity)l
extern _native64(0xF6F5161F4534EDFF) int get_entity_population_type(Entity entity)l
extern _native64(0x731EC8A916BD11A1) bool is_an_entity(int handle)l
extern _native64(0x524AC5ECEA15343E) bool is_entity_a_ped(Entity entity)l
extern _native64(0x0A7B270912999B3C) bool is_entity_a_mission_entity(Entity entity)l
extern _native64(0x6AC7003FA6E5575E) bool is_entity_a_vehicle(Entity entity)l
extern _native64(0x8D68C8FD0FACA94E) bool is_entity_an_object(Entity entity)l
extern _native64(0x20B60995556D004F) bool is_entity_at_coord(Entity entity, vector3 Pos, vector3 Size, bool p7, bool p8, int p9)l
extern _native64(0x751B70C3D034E187) bool is_entity_at_entity(Entity entity1, Entity entity2, vector3 Size, bool p5, bool p6, int p7)l
extern _native64(0xB346476EF1A64897) bool is_entity_attached(Entity entity)l
extern _native64(0xCF511840CEEDE0CC) bool is_entity_attached_to_any_object(Entity entity)l
extern _native64(0xB1632E9A5F988D11) bool is_entity_attached_to_any_ped(Entity entity)l
extern _native64(0x26AA915AD89BFB4B) bool is_entity_attached_to_any_vehicle(Entity entity)l
extern _native64(0xEFBE71898A993728) bool is_entity_attached_to_entity(Entity from, Entity to)l
extern _native64(0x5F9532F3B5CC2551) bool is_entity_dead(Entity entity)l
extern _native64(0x886E37EC497200B6) bool is_entity_in_air(Entity entity)l
extern _native64(0x51210CED3DA1C78A) bool is_entity_in_angled_area(Entity entity, vector3 origin, vector3 edge, float angle, bool p8, bool p9, any p10)l
extern _native64(0x54736AA40E271165) bool is_entity_in_area(Entity entity, vector3 vec_1, vector3 vec_2, bool p7, bool p8, any p9)l
extern _native64(0xB6463CF6AF527071) bool is_entity_in_zone(Entity entity, const char* zone)l
extern _native64(0xCFB0A0D8EDD145A3) bool is_entity_in_water(Entity entity)l
extern _native64(0xE81AFC1BC4CC41CE) float get_entity_submerged_level(Entity entity)l
extern _native64(0x694E00132F2823ED) void unk_0x694E00132F2823ED(Entity entity, bool p1)l
extern _native64(0xE659E47AF827484B) bool is_entity_on_screen(Entity entity)l
extern _native64(0x1F0B79228E461EC9) bool is_entity_playing_anim(Entity entity, const char* animDict, const char* animName, int p4)l
extern _native64(0x1218E6886D3D8327) bool is_entity_static(Entity entity)l
extern _native64(0x17FFC1B2BA35A494) bool is_entity_touching_entity(Entity entity, Entity targetEntity)l
extern _native64(0x0F42323798A58C8C) bool is_entity_touching_model(Entity entity, Hash modelHash)l
extern _native64(0x5333F526F6AB19AA) bool is_entity_upright(Entity entity, float angle)l
extern _native64(0x1DBD58820FA61D71) bool is_entity_upsidedown(Entity entity)l
extern _native64(0x47D6F43D77935C75) bool is_entity_visible(Entity entity)l
extern _native64(0xD796CB5BA8F20E32) bool is_entity_visible_to_script(Entity entity)l
extern _native64(0xE31C2C72B8692B64) bool is_entity_occluded(Entity entity)l
extern _native64(0xEE5D2A122E09EC42) bool would_entity_be_occluded(Hash entityModelHash, vector3 vec, bool p4)l
extern _native64(0xD05BFF0C0A12C68F) bool is_entity_waiting_for_world_collision(Entity entity)l
extern _native64(0x18FF00FC7EFF559E) void apply_force_to_entity_center_of_mass(Entity entity, int forceType, vector3 vec, bool p5, bool isRel, bool highForce, bool p8)l
extern _native64(0xC5F68BE9613E2D18) void apply_force_to_entity(Entity entity, int forceType, vector3 vec, vector3 Rot, int p8, bool isRel, bool p10, bool highForce, bool p12, bool p13)l
extern _native64(0x6B9BBD38AB0796DF) void attach_entity_to_entity(Entity entity1, Entity entity2, int boneIndex, vector3 Pos, vector3 Rot, bool p9, bool useSoftPinning, bool collision, bool isPed, int vertexIndex, bool fixedRot)l
extern _native64(0xC3675780C92F90F9) void attach_entity_to_entity_physically(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, vector3 Pos1, vector3 Pos2, vector3 Rot, float breakForce, bool fixedRot, bool p15, bool collision, bool p17, int p18)l
extern _native64(0xF4080490ADC51C6F) void process_entity_attachments(Entity entity)l
extern _native64(0xFB71170B7E76ACBA) int get_entity_bone_index_by_name(Entity entity, const char* boneName)l
extern _native64(0xA72CD9CA74A5ECBA) any clear_entity_last_damage_entity(Entity entity)l
extern _native64(0xAE3CBE5BF394C9C9) void delete_entity(Entity* entity)l
extern _native64(0x961AC54BF0613F5D) void detach_entity(Entity entity, bool p1, bool collision)l
extern _native64(0x428CA6DBD1094446) void freeze_entity_position(Entity entity, bool toggle)l
extern _native64(0x3910051CCECDB00C) void _set_entity_register(Entity entity, bool toggle)l
extern _native64(0x7FB218262B810701) bool play_entity_anim(Entity entity, const char* animName, const char* animDict, float p3, bool loop, bool stayInAnim, bool p6, float delta, any bitset)l
extern _native64(0xC77720A12FE14A86) bool play_synchronized_entity_anim(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, any p6, float p7)l
extern _native64(0xB9C54555ED30FBC4) bool play_synchronized_map_entity_anim(float p0, float p1, float p2, float p3, any p4, any p5, any* p6, any* p7, float p8, float p9, any p10, float p11)l
extern _native64(0x11E79CAB7183B6F5) bool stop_synchronized_map_entity_anim(float p0, float p1, float p2, float p3, any p4, float p5)l
extern _native64(0x28004F88151E03E0) any stop_entity_anim(Entity entity, const char* animation, const char* animGroup, float p3)l
extern _native64(0x43D3807C077261E3) bool stop_synchronized_entity_anim(Entity entity, float p1, bool p2)l
extern _native64(0xEAF4CD9EA3E7E922) bool has_anim_event_fired(Entity entity, Hash actionHash)l
extern _native64(0x07F1BE2BCCAA27A7) bool find_anim_event_phase(const char* animDictionary, const char* animName, const char* p2, any* p3, any* p4)l
extern _native64(0x4487C259F0F70977) void set_entity_anim_current_time(Entity entity, const char* animDictionary, const char* animName, float time)l
extern _native64(0x28D1A16553C51776) void set_entity_anim_speed(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier)l
extern _native64(0xAD738C3085FE7E11) void set_entity_as_mission_entity(Entity entity, bool p1, bool p2)l
extern _native64(0xB736A491E64A32CF) void set_entity_as_no_longer_needed(Entity* entity)l
extern _native64(0x2595DD4236549CE3) void set_ped_as_no_longer_needed(Ped* ped)l
extern _native64(0x629BFA74418D6239) void set_vehicle_as_no_longer_needed(Vehicle* vehicle)l
extern _native64(0x3AE22DEB5BA5A3E6) void set_object_as_no_longer_needed(Object* object)l
extern _native64(0x1760FFA8AB074D66) void set_entity_can_be_damaged(Entity entity, bool toggle)l
extern _native64(0xE22D8FDE858B8119) void set_entity_can_be_damaged_by_relationship_group(Entity entity, bool bCanBeDamaged, int relGroup)l
extern _native64(0xD3997889736FD899) void set_entity_can_be_targeted_without_los(Entity entity, bool toggle)l
extern _native64(0x1A9205C1B9EE827F) void set_entity_collision(Entity entity, bool toggle, bool keepPhysics)l
extern _native64(0xCCF1E97BEFDAE480) bool get_entity_collison_disabled(Entity entity)l
extern _native64(0x9EBC85ED0FFFE51C) void unk_0x9EBC85ED0FFFE51C(Entity entity, bool p1, bool p2)l
extern _native64(0x06843DA7060A026B) void set_entity_coords(Entity entity, vector3 Pos, bool xAxis, bool yAxis, bool zAxis, bool clearArea)l
extern _native64(0x621873ECE1178967) void _set_entity_coords_2(Entity entity, vector3 Pos, bool xAxis, bool yAxis, bool zAxis, bool clearArea)l
extern _native64(0x239A3351AC1DA385) void set_entity_coords_no_offset(Entity entity, vector3 Pos, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0x1718DE8E3F2823CA) void set_entity_dynamic(Entity entity, bool toggle)l
extern _native64(0x8E2530AA8ADA980E) void set_entity_heading(Entity entity, float heading)l
extern _native64(0x6B76DC1F3AE6E6A3) void set_entity_health(Entity entity, int health)l
extern _native64(0x3882114BDE571AD4) void set_entity_invincible(Entity entity, bool toggle)l
extern _native64(0xEA02E132F5C68722) void set_entity_is_target_priority(Entity entity, bool p1, float p2)l
extern _native64(0x7CFBA6A80BDF3874) void set_entity_lights(Entity entity, bool toggle)l
extern _native64(0x0DC7CABAB1E9B67E) void set_entity_load_collision_flag(Entity entity, bool toggle)l
extern _native64(0xE9676F61BC0B3321) bool has_collision_loaded_around_entity(Entity entity)l
extern _native64(0x0E46A3FCBDE2A1B1) void set_entity_max_speed(Entity entity, float speed)l
extern _native64(0x79F020FF9EDC0748) void set_entity_only_damaged_by_player(Entity entity, bool toggle)l
extern _native64(0x7022BD828FA0B082) void set_entity_only_damaged_by_relationship_group(Entity entity, bool p1, any p2)l
extern _native64(0xFAEE099C6F890BB8) void set_entity_proofs(Entity entity, bool bulletProof, bool fireProof, bool explosionProof, bool collisionProof, bool meleeProof, bool p6, bool p7, bool drownProof)l
extern _native64(0x77B21BE7AC540F07) void set_entity_quaternion(Entity entity, quaternion quat)l
extern _native64(0x0A50A1EEDAD01E65) void set_entity_records_collisions(Entity entity, bool toggle)l
extern _native64(0x8524A8B0171D5E07) void set_entity_rotation(Entity entity, vector3 rot, int rotationOrder, bool p5)l
extern _native64(0xEA1C610A04DB6BBB) void set_entity_visible(Entity entity, bool toggle, bool unk)l
extern _native64(0x1C99BB7B6E96D16F) void set_entity_velocity(Entity entity, vector3 vec)l
extern _native64(0x4A4722448F18EEF5) void set_entity_has_gravity(Entity entity, bool toggle)l
extern _native64(0x5927F96A78577363) void set_entity_lod_dist(Entity entity, int value)l
extern _native64(0x4159C2762B5791D6) int get_entity_lod_dist(Entity entity)l
extern _native64(0x44A0870B7E92D7C0) void set_entity_alpha(Entity entity, int alphaLevel, bool skin)l
extern _native64(0x5A47B3B5E63E94C6) int get_entity_alpha(Entity entity)l
extern _native64(0x9B1E824FFBB7027A) any reset_entity_alpha(Entity entity)l
extern _native64(0x5C3B791D580E0BC2) void unk_0x5C3B791D580E0BC2(Entity entity, float p1)l
extern _native64(0xACAD101E1FB66689) void set_entity_always_prerender(Entity entity, bool toggle)l
extern _native64(0x730F5F8D3F0F2050) void set_entity_render_scorched(Entity entity, bool toggle)l
extern _native64(0x57C5DB656185EAC4) void set_entity_trafficlight_override(Entity entity, int state)l
extern _native64(0x78E8E3A640178255) void unk_0x78E8E3A640178255(Entity entity)l
extern _native64(0x92C47782FDA8B2A3) void create_model_swap(vector3 vec, float radius, Hash originalModel, Hash newModel, bool p6)l
extern _native64(0x033C0F9A64E229AE) void remove_model_swap(vector3 vec, float radius, Hash originalModel, Hash newModel, bool p6)l
extern _native64(0x8A97BCA30A0CE478) void create_model_hide(vector3 vec, float radius, Hash model, bool p5)l
extern _native64(0x3A52AE588830BF7F) void create_model_hide_excluding_script_objects(vector3 vec, float radius, Hash model, bool p5)l
extern _native64(0xD9E3006FB3CBD765) void remove_model_hide(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0x150E808B375A385A) void create_forced_object(vector3 vec, any p3, Hash modelHash, bool p5)l
extern _native64(0x61B6775E83C0DB6F) void remove_forced_object(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0xA53ED5520C07654A) void set_entity_no_collision_entity(Entity entity1, Entity entity2, bool unknown)l
extern _native64(0x295D82A8559F9150) void set_entity_motion_blur(Entity entity, bool toggle)l
extern _native64(0xE12ABE5E3A389A6C) void unk_0xE12ABE5E3A389A6C(Entity entity, bool p1)l
extern _native64(0xA80AE305E0A3044F) void unk_0xA80AE305E0A3044F(Entity entity, bool p1)l
extern _native64(0xDC6F8601FAF2E893) void unk_0xDC6F8601FAF2E893(Entity entity, bool p1)l
extern _native64(0x2C2E3DC128F44309) void unk_0x2C2E3DC128F44309(Entity entity, bool p1)l
extern _native64(0x1A092BB0C3808B96) void unk_0x1A092BB0C3808B96(Entity entity, bool p1)l
#pragma endregion //}
#pragma region PED //{
extern _native64(0xD49F9B0955C367DE) Ped create_ped(int pedType, Hash modelHash, vector3 vec, float heading, bool isNetwork, bool p7)l
extern _native64(0x9614299DCB53E54B) void delete_ped(Ped* ped)l
extern _native64(0xEF29A16337FACADB) Ped clone_ped(Ped ped, float heading, bool isNetwork, bool p3)l
extern _native64(0xE952D6431689AD9A) void clone_ped_to_target(Ped ped, Ped targetPed)l
extern _native64(0xA3EE4A07279BB9DB) bool is_ped_in_vehicle(Ped ped, Vehicle vehicle, bool atGetIn)l
extern _native64(0x796D90EFB19AA332) bool is_ped_in_model(Ped ped, Hash modelHash)l
extern _native64(0x997ABD671D25CA0B) bool is_ped_in_any_vehicle(Ped ped, bool atGetIn)l
extern _native64(0x16EC4839969F9F5E) bool is_cop_ped_in_area_3d(vector3 vec_1, vector3 vec_2)l
extern _native64(0x84A2DD9AC37C35C1) bool is_ped_injured(Ped ped)l
extern _native64(0x5983BB449D7FDB12) bool is_ped_hurt(Ped ped)l
extern _native64(0xD839450756ED5A80) bool is_ped_fatally_injured(Ped ped)l
extern _native64(0x3317DEDB88C95038) bool is_ped_dead_or_dying(Ped ped, bool p1)l
extern _native64(0xE0A0AEC214B1FABA) bool is_conversation_ped_dead(Ped ped)l
extern _native64(0x3998B1276A3300E5) bool is_ped_aiming_from_cover(Ped ped)l
extern _native64(0x24B100C68C645951) bool is_ped_reloading(Ped ped)l
extern _native64(0x12534C348C6CB68B) bool is_ped_a_player(Ped ped)l
extern _native64(0x7DD959874C1FD534) Ped create_ped_inside_vehicle(Vehicle vehicle, int pedType, Hash modelHash, int seat, bool isNetwork, bool p5)l
extern _native64(0xAA5A7ECE2AA8FE70) void set_ped_desired_heading(Ped ped, float heading)l
extern _native64(0xFF287323B0E2C69A) void _freeze_ped_camera_rotation(Ped ped)l
extern _native64(0xD71649DB0A545AA3) bool is_ped_facing_ped(Ped ped, Ped otherPed, float angle)l
extern _native64(0x4E209B2C1EAD5159) bool is_ped_in_melee_combat(Ped ped)l
extern _native64(0x530944F6F4B8A214) bool is_ped_stopped(Ped ped)l
extern _native64(0x7E9DFE24AC1E58EF) bool is_ped_shooting_in_area(Ped ped, vector3 vec_1, vector3 vec_2, bool p7, bool p8)l
extern _native64(0xA0D3D71EA1086C55) bool is_any_ped_shooting_in_area(vector3 vec_1, vector3 vec_2, bool p6, bool p7)l
extern _native64(0x34616828CD07F1A1) bool is_ped_shooting(Ped ped)l
extern _native64(0x7AEFB85C1D49DEB6) any set_ped_accuracy(Ped ped, int accuracy)l
extern _native64(0x37F4AD56ECBC0CD6) int get_ped_accuracy(Ped ped)l
extern _native64(0xC9D55B1A358A5BF7) bool is_ped_model(Ped ped, Hash modelHash)l
extern _native64(0x2D05CED3A38D0F3A) void explode_ped_head(Ped ped, Hash weaponHash)l
extern _native64(0xAC6D445B994DF95E) void remove_ped_elegantly(Ped* ped)l
extern _native64(0x5BA652A0CD14DF2F) void add_armour_to_ped(Ped ped, int amount)l
extern _native64(0xCEA04D83135264CC) void set_ped_armour(Ped ped, int amount)l
extern _native64(0xF75B0D629E1C063D) void set_ped_into_vehicle(Ped ped, Vehicle vehicle, int seatIndex)l
extern _native64(0x3C028C636A414ED9) void set_ped_allow_vehicles_override(Ped ped, bool toggle)l
extern _native64(0x3E8349C08E4B82E4) bool can_create_random_ped(bool unk)l
extern _native64(0xB4AC7D0CF06BFE8F) Ped create_random_ped(vector3 pos)l
extern _native64(0x9B62392B474F44A0) Ped create_random_ped_as_driver(Vehicle vehicle, bool returnHandle)l
extern _native64(0xB8EB95E5B4E56978) bool can_create_random_driver()l
extern _native64(0xEACEEDA81751915C) bool can_create_random_bike_rider()l
extern _native64(0x9E8C908F41584ECD) void set_ped_move_anims_blend_out(Ped ped)l
extern _native64(0xC1670E958EEE24E5) void set_ped_can_be_dragged_out(Ped ped, bool toggle)l
extern _native64(0xF2BEBCDFAFDAA19E) void unk_0xF2BEBCDFAFDAA19E(bool toggle)l
extern _native64(0x6D9F5FAA7488BA46) bool is_ped_male(Ped ped)l
extern _native64(0xB980061DA992779D) bool is_ped_human(Ped ped)l
extern _native64(0x9A9112A0FE9A4713) Vehicle get_vehicle_ped_is_in(Ped ped, bool lastVehicle)l
extern _native64(0xBB8DE8CF6A8DD8BB) void reset_ped_last_vehicle(Ped ped)l
extern _native64(0x95E3D6257B166CF2) void set_ped_density_multiplier_this_frame(float multiplier)l
extern _native64(0x7A556143A1C03898) void set_scenario_ped_density_multiplier_this_frame(float p0, float p1)l
extern _native64(0x5A7F62FDA59759BD) void unk_0x5A7F62FDA59759BD()l
extern _native64(0x5086C7843552CF85) void set_scripted_conversion_coord_this_frame(vector3 vec)l
extern _native64(0xEE01041D559983EA) void set_ped_non_creation_area(vector3 vec_1, vector3 vec_2)l
extern _native64(0x2E05208086BA0651) void clear_ped_non_creation_area()l
extern _native64(0x4759CC730F947C81) void unk_0x4759CC730F947C81()l
extern _native64(0x460BC76A0E10655E) bool is_ped_on_mount(Ped ped)l
extern _native64(0xE7E11B8DCBED1058) Ped get_mount(Ped ped)l
extern _native64(0x67722AEB798E5FAB) bool is_ped_on_vehicle(Ped ped)l
extern _native64(0xEC5F66E459AF3BB2) bool is_ped_on_specific_vehicle(Ped ped, Vehicle vehicle)l
extern _native64(0xA9C8960E8684C1B5) void set_ped_money(Ped ped, int amount)l
extern _native64(0x3F69145BBA87BAE7) int get_ped_money(Ped ped)l
extern _native64(0xFF4803BC019852D9) void unk_0xFF4803BC019852D9(float p0, any p1)l
extern _native64(0x6B0E6172C9A4D902) void unk_0x6B0E6172C9A4D902(bool p0)l
extern _native64(0x9911F4A24485F653) void unk_0x9911F4A24485F653(bool p0)l
extern _native64(0xEBD76F2359F190AC) void set_ped_suffers_critical_hits(Ped ped, bool toggle)l
extern _native64(0xAFC976FD0580C7B3) void unk_0xAFC976FD0580C7B3(Ped ped, bool toggle)l
extern _native64(0xA808AA1D79230FC2) bool is_ped_sitting_in_vehicle(Ped ped, Vehicle vehicle)l
extern _native64(0x826AA586EDB9FEF8) bool is_ped_sitting_in_any_vehicle(Ped ped)l
extern _native64(0x01FEE67DB37F59B2) bool is_ped_on_foot(Ped ped)l
extern _native64(0x94495889E22C6479) bool is_ped_on_any_bike(Ped ped)l
extern _native64(0xC70B5FAE151982D8) bool is_ped_planting_bomb(Ped ped)l
extern _native64(0xCD5003B097200F36) vector3 get_dead_ped_pickup_coords(Ped ped, float p1, float p2)l
extern _native64(0x2E0E1C2B4F6CB339) bool is_ped_in_any_boat(Ped ped)l
extern _native64(0xFBFC01CCFB35D99E) bool is_ped_in_any_sub(Ped ped)l
extern _native64(0x298B91AE825E5705) bool is_ped_in_any_heli(Ped ped)l
extern _native64(0x5FFF4CFC74D8FB80) bool is_ped_in_any_plane(Ped ped)l
extern _native64(0x9134873537FA419C) bool is_ped_in_flying_vehicle(Ped ped)l
extern _native64(0x56CEF0AC79073BDE) void set_ped_dies_in_water(Ped ped, bool toggle)l
extern _native64(0xD718A22995E2B4BC) void set_ped_dies_in_sinking_vehicle(Ped ped, bool toggle)l
extern _native64(0x9483AF821605B1D8) int get_ped_armour(Ped ped)l
extern _native64(0xEDF4079F9D54C9A1) void set_ped_stay_in_vehicle_when_jacked(Ped ped, bool toggle)l
extern _native64(0xC7EF1BA83230BA07) void set_ped_can_be_shot_in_vehicle(Ped ped, bool toggle)l
extern _native64(0xD75960F6BD9EA49C) bool get_ped_last_damage_bone(Ped ped, int* outBone)l
extern _native64(0x8EF6B7AC68E2F01B) void clear_ped_last_damage_bone(Ped ped)l
extern _native64(0x1B1E2A40A65B8521) void set_ai_weapon_damage_modifier(float value)l
extern _native64(0xEA16670E7BA4743C) void reset_ai_weapon_damage_modifier()l
extern _native64(0x66460DEDDD417254) void set_ai_melee_weapon_damage_modifier(float modifier)l
extern _native64(0x46E56A7CD1D63C3F) void reset_ai_melee_weapon_damage_modifier()l
extern _native64(0x2F3C3D9F50681DE4) void unk_0x2F3C3D9F50681DE4(any p0, bool p1)l
extern _native64(0x63F58F7C80513AAD) void set_ped_can_be_targetted(Ped ped, bool toggle)l
extern _native64(0xBF1CA77833E58F2C) void set_ped_can_be_targetted_by_team(Ped ped, int team, bool toggle)l
extern _native64(0x66B57B72E0836A76) void set_ped_can_be_targetted_by_player(Ped ped, Player player, bool toggle)l
extern _native64(0x061CB768363D6424) void unk_0x061CB768363D6424(any p0, bool p1)l
extern _native64(0xFD325494792302D7) void set_time_exclusive_display_texture(any p0, bool p1)l
extern _native64(0x0BD04E29640C9C12) bool is_ped_in_any_police_vehicle(Ped ped)l
extern _native64(0x16E42E800B472221) void force_ped_to_open_parachute(Ped ped)l
extern _native64(0x7DCE8BDA0F1C1200) bool is_ped_in_parachute_free_fall(Ped ped)l
extern _native64(0xFB92A102F1C4DFA3) bool is_ped_falling(Ped ped)l
extern _native64(0xCEDABC5900A0BF97) bool is_ped_jumping(Ped ped)l
extern _native64(0x53E8CB4F48BFE623) bool is_ped_climbing(Ped ped)l
extern _native64(0x117C70D1F5730B5E) bool is_ped_vaulting(Ped ped)l
extern _native64(0x5527B8246FEF9B11) bool is_ped_diving(Ped ped)l
extern _native64(0x433DDFFE2044B636) bool is_ped_jumping_out_of_vehicle(Ped ped)l
extern _native64(0x26AF0E8E30BD2A2C) bool unk_0x26AF0E8E30BD2A2C(Ped ped)l
extern _native64(0x79CFD9827CC979B6) int get_ped_parachute_state(Ped ped)l
extern _native64(0x8B9F1FC6AE8166C0) int get_ped_parachute_landing_type(Ped ped)l
extern _native64(0x333FC8DB079B7186) void set_ped_parachute_tint_index(Ped ped, int tintIndex)l
extern _native64(0xEAF5F7E5AE7C6C9D) void get_ped_parachute_tint_index(Ped ped, int* outTintIndex)l
extern _native64(0xE88DA0751C22A2AD) void set_ped_reserve_parachute_tint_index(Ped ped, any p1)l
extern _native64(0x8C4F3BF23B6237DB) Entity unk_0x8C4F3BF23B6237DB(Ped ped, bool p1, bool p2)l
extern _native64(0x030983CA930B692D) void set_ped_ducking(Ped ped, bool toggle)l
extern _native64(0xD125AE748725C6BC) bool is_ped_ducking(Ped ped)l
extern _native64(0x6E575D6A898AB852) bool is_ped_in_any_taxi(Ped ped)l
extern _native64(0xF107E836A70DCE05) void set_ped_id_range(Ped ped, float value)l
extern _native64(0x52D59AB61DDC05DD) void unk_0x52D59AB61DDC05DD(Ped ped, bool p1)l
extern _native64(0xEC4B4B3B9908052A) void unk_0xEC4B4B3B9908052A(Ped ped, float unk)l
extern _native64(0x733C87D4CE22BEA2) void unk_0x733C87D4CE22BEA2(any p0)l
extern _native64(0xF29CF591C4BF6CEE) void set_ped_seeing_range(Ped ped, float value)l
extern _native64(0x33A8F7F7D5F7F33C) void set_ped_hearing_range(Ped ped, float value)l
extern _native64(0x2DB492222FB21E26) void set_ped_visual_field_min_angle(Ped ped, float value)l
extern _native64(0x70793BDCA1E854D4) void set_ped_visual_field_max_angle(Ped ped, float value)l
extern _native64(0x7A276EB2C224D70F) void set_ped_visual_field_min_elevation_angle(Ped ped, float angle)l
extern _native64(0x78D0B67629D75856) void set_ped_visual_field_max_elevation_angle(Ped ped, float angle)l
extern _native64(0x9C74B0BC831B753A) void set_ped_visual_field_peripheral_range(Ped ped, float range)l
extern _native64(0x3B6405E8AB34A907) void set_ped_visual_field_center_angle(Ped ped, float angle)l
extern _native64(0x88CBB5CEB96B7BD2) void set_ped_stealth_movement(Ped ped, bool p1, const char* action)l
extern _native64(0x7C2AC9CA66575FBF) bool get_ped_stealth_movement(Ped ped)l
extern _native64(0x90370EBE0FEE1A3D) int create_group(int unused)l
extern _native64(0x2A7819605465FBCE) void set_ped_as_group_leader(Ped ped, int groupId)l
extern _native64(0x9F3480FE65DB31B5) void set_ped_as_group_member(Ped ped, int groupId)l
extern _native64(0x2E2F4240B3F24647) void set_ped_can_teleport_to_group_leader(Ped pedHandle, int groupHandle, bool toggle)l
extern _native64(0x8EB2F69076AF7053) void remove_group(int groupId)l
extern _native64(0xED74007FFB146BC2) void remove_ped_from_group(Ped ped)l
extern _native64(0x9BB01E3834671191) bool is_ped_group_member(Ped ped, int groupId)l
extern _native64(0x1C86D8AEF8254B78) bool is_ped_hanging_on_to_vehicle(Ped ped)l
extern _native64(0x4102C7858CFEE4E4) void set_group_separation_range(int groupHandle, float separationRange)l
extern _native64(0xFA0675AB151073FA) void set_ped_min_ground_time_for_stungun(Ped ped, int ms)l
extern _native64(0xD6A86331A537A7B9) bool is_ped_prone(Ped ped)l
extern _native64(0x4859F1FC66A6278E) bool is_ped_in_combat(Ped ped, Ped target)l
extern _native64(0xEAD42DE3610D0721) bool can_ped_in_combat_see_target(Ped ped, Ped target)l
extern _native64(0xB2C086CC1BF8F2BF) bool is_ped_doing_driveby(Ped ped)l
extern _native64(0x4AE4FF911DFB61DA) bool is_ped_jacking(Ped ped)l
extern _native64(0x9A497FE2DF198913) bool is_ped_being_jacked(Ped ped)l
extern _native64(0x4FBACCE3B4138EE8) bool is_ped_being_stunned(Ped ped, int p1)l
extern _native64(0x9B128DC36C1E04CF) Ped get_peds_jacker(Ped ped)l
extern _native64(0x5486A79D9FBD342D) Ped get_jack_target(Ped ped)l
extern _native64(0xBBCCE00B381F8482) bool is_ped_fleeing(Ped ped)l
extern _native64(0x60DFD0691A170B88) bool is_ped_in_cover(Ped ped, bool p1)l
extern _native64(0x845333B3150583AB) bool is_ped_in_cover_facing_left(Ped ped)l
extern _native64(0x6A03BF943D767C93) bool _is_ped_standing_in_cover(Ped ped)l
extern _native64(0x9F65DBC537E59AD5) bool is_ped_going_into_cover(Ped ped)l
extern _native64(0xAAD6D1ACF08F4612) any set_ped_pinned_down(Ped ped, bool pinned, int i)l
extern _native64(0x6F4C85ACD641BCD2) int get_seat_ped_is_trying_to_enter(Ped ped)l
extern _native64(0x814FA8BE5449445D) Vehicle get_vehicle_ped_is_trying_to_enter(Ped ped)l
extern _native64(0x93C8B64DEB84728C) Entity get_ped_source_of_death(Ped ped)l
extern _native64(0x16FFE42AB2D2DC59) Hash get_ped_cause_of_death(Ped ped)l
extern _native64(0x1E98817B311AE98A) int _get_ped_time_of_death(Ped ped)l
extern _native64(0x5407B7288D0478B7) int unk_0x5407B7288D0478B7(any p0)l
extern _native64(0x336B3D200AB007CB) any unk_0x336B3D200AB007CB(any p0, float p1, float p2, float p3, float p4)l
extern _native64(0xADB3F206518799E8) void set_ped_relationship_group_default_hash(Ped ped, Hash hash)l
extern _native64(0xC80A74AC829DDD92) void set_ped_relationship_group_hash(Ped ped, Hash hash)l
extern _native64(0xBF25EB89375A37AD) void set_relationship_between_groups(int relationship, Hash group1, Hash group2)l
extern _native64(0x5E29243FB56FC6D4) void clear_relationship_between_groups(int relationship, Hash group1, Hash group2)l
extern _native64(0xF372BC22FCB88606) any add_relationship_group(const char* name, Hash* groupHash)l
extern _native64(0xB6BA2444AB393DA2) void remove_relationship_group(Hash groupHash)l
extern _native64(0xEBA5AD3A0EAF7121) int get_relationship_between_peds(Ped ped1, Ped ped2)l
extern _native64(0x42FDD0F017B1E38E) Hash get_ped_relationship_group_default_hash(Ped ped)l
extern _native64(0x7DBDD04862D95F04) Hash get_ped_relationship_group_hash(Ped ped)l
extern _native64(0x9E6B70061662AE5C) int get_relationship_between_groups(Hash group1, Hash group2)l
extern _native64(0x4328652AE5769C71) void set_ped_can_be_targeted_without_los(Ped ped, bool toggle)l
extern _native64(0x112942C6E708F70B) void set_ped_to_inform_respected_friends(Ped ped, float radius, int maxFriends)l
extern _native64(0x625B774D75C87068) bool is_ped_responding_to_event(Ped ped, any event)l
extern _native64(0x9AC577F5A12AD8A9) void set_ped_firing_pattern(Ped ped, Hash patternHash)l
extern _native64(0x614DA022990752DC) void set_ped_shoot_rate(Ped ped, int shootRate)l
extern _native64(0xFF41B4B141ED981C) void set_combat_float(Ped ped, int combatType, float p2)l
extern _native64(0x52DFF8A10508090A) float get_combat_float(Ped ped, int p1)l
extern _native64(0x8DE69FE35CA09A45) void get_group_size(int groupID, any* unknown, int* sizeInMembers)l
extern _native64(0x7C6B0C22F9F40BBE) bool does_group_exist(int groupId)l
extern _native64(0xF162E133B4E7A675) int get_ped_group_index(Ped ped)l
extern _native64(0x5891CAC5D4ACFF74) bool is_ped_in_group(Ped ped)l
extern _native64(0x6A3975DEA89F9A17) Player get_player_ped_is_following(Ped ped)l
extern _native64(0xCE2F5FC3AF7E8C1E) void set_group_formation(int groupId, int formationType)l
extern _native64(0x1D9D45004C28C916) void set_group_formation_spacing(int groupId, float p1, float p2, float p3)l
extern _native64(0x63DAB4CCB3273205) void reset_group_formation_default_spacing(int groupHandle)l
extern _native64(0x6094AD011A2EA87D) Vehicle get_vehicle_ped_is_using(Ped ped)l
extern _native64(0xF92691AED837A5FC) Vehicle set_exclusive_phone_relationships(Ped ped)l
extern _native64(0x9FF447B6B6AD960A) void set_ped_gravity(Ped ped, bool toggle)l
extern _native64(0x697157CED63F18D4) void apply_damage_to_ped(Ped ped, int damageAmount, bool p2)l
extern _native64(0x36B77BB84687C318) any unk_0x36B77BB84687C318(Ped ped, any p1)l
extern _native64(0xDA1F1B7BE1A8766F) void set_ped_allowed_to_duck(Ped ped, bool toggle)l
extern _native64(0x3DBFC55D5C9BB447) void set_ped_never_leaves_group(Ped ped, bool toggle)l
extern _native64(0xFF059E1E4C01E63C) int get_ped_type(Ped ped)l
extern _native64(0xBB03C38DD3FB7FFD) void set_ped_as_cop(Ped ped, bool toggle)l
extern _native64(0xF5F6378C4F3419D3) void set_ped_max_health(Ped ped, int value)l
extern _native64(0x4700A416E8324EF3) int get_ped_max_health(Ped ped)l
extern _native64(0x43C851690662113D) void set_ped_max_time_in_water(Ped ped, float value)l
extern _native64(0x6BA428C528D9E522) void set_ped_max_time_underwater(Ped ped, float value)l
extern _native64(0x2735233A786B1BEF) void unk_0x2735233A786B1BEF(Ped ped, float p1)l
extern _native64(0x952F06BEECD775CC) void unk_0x952F06BEECD775CC(any p0, any p1, any p2, any p3)l
extern _native64(0xE6CA85E7259CE16B) void unk_0xE6CA85E7259CE16B(any p0)l
extern _native64(0x7A6535691B477C48) void set_ped_can_be_knocked_off_vehicle(Ped ped, int state)l
extern _native64(0x51AC07A44D4F5B8A) bool can_knock_ped_off_vehicle(Ped ped)l
extern _native64(0x45BBCBA77C29A841) void knock_ped_off_vehicle(Ped ped)l
extern _native64(0x87052FE446E07247) void set_ped_coords_no_gang(Ped ped, vector3 pos)l
extern _native64(0x51455483CF23ED97) Ped get_ped_as_group_member(int groupID, int memberNumber)l
extern _native64(0x5CCE68DBD5FE93EC) Ped _get_ped_as_group_leader(int groupID)l
extern _native64(0x971D38760FBC02EF) void set_ped_keep_task(Ped ped, bool toggle)l
extern _native64(0x49E50BDB8BA4DAB2) void unk_0x49E50BDB8BA4DAB2(Ped ped, bool p1)l
extern _native64(0x9DE327631295B4C2) bool is_ped_swimming(Ped ped)l
extern _native64(0xC024869A53992F34) bool is_ped_swimming_under_water(Ped ped)l
extern _native64(0x9AFEFF481A85AB2E) void set_ped_coords_keep_vehicle(Ped ped, vector3 pos)l
extern _native64(0x2A30922C90C9B42C) void set_ped_dies_in_vehicle(Ped ped, bool toggle)l
extern _native64(0x102E68B2024D536D) void set_create_random_cops(bool toggle)l
extern _native64(0x8A4986851C4EF6E7) void set_create_random_cops_not_on_scenarios(bool toggle)l
extern _native64(0x444CB7D7DBE6973D) void set_create_random_cops_on_scenarios(bool toggle)l
extern _native64(0x5EE2CAFF7F17770D) bool can_create_random_cops()l
extern _native64(0x02A0C9720B854BFA) void set_ped_as_enemy(Ped ped, bool toggle)l
extern _native64(0x1CCE141467FF42A2) void set_ped_can_smash_glass(Ped ped, bool p1, bool p2)l
extern _native64(0x6F972C1AB75A1ED0) bool is_ped_in_any_train(Ped ped)l
extern _native64(0xBB062B2B5722478E) bool is_ped_getting_into_a_vehicle(Ped ped)l
extern _native64(0x44D28D5DDFE5F68C) bool is_ped_trying_to_enter_a_locked_vehicle(Ped ped)l
extern _native64(0xDF1AF8B5D56542FA) void set_enable_handcuffs(Ped ped, bool toggle)l
extern _native64(0xC52E0F855C58FC2E) void set_enable_bound_ankles(Ped ped, bool toggle)l
extern _native64(0xF99F62004024D506) void set_enable_scuba(Ped ped, bool toggle)l
extern _native64(0xB3B1CB349FF9C75D) void set_can_attack_friendly(Ped ped, bool toggle, bool p2)l
extern _native64(0xF6AA118530443FD2) int get_ped_alertness(Ped ped)l
extern _native64(0xDBA71115ED9941A6) void set_ped_alertness(Ped ped, int value)l
extern _native64(0xBC0ED94165A48BC2) void set_ped_get_out_upside_down_vehicle(Ped ped, bool toggle)l
extern _native64(0xAF8A94EDE7712BEF) void set_ped_movement_clipset(Ped ped, const char* clipSet, float p2)l
extern _native64(0xAA74EC0CB0AAEA2C) void reset_ped_movement_clipset(Ped ped, float p1)l
extern _native64(0x29A28F3F8CF6D854) void set_ped_strafe_clipset(Ped ped, const char* clipSet)l
extern _native64(0x20510814175EA477) void reset_ped_strafe_clipset(Ped ped)l
extern _native64(0x2622E35B77D3ACA2) void set_ped_weapon_movement_clipset(Ped ped, const char* clipSet)l
extern _native64(0x97B0DB5B4AA74E77) void reset_ped_weapon_movement_clipset(Ped ped)l
extern _native64(0xED34AB6C5CB36520) void set_ped_drive_by_clipset_override(Ped ped, const char* clipset)l
extern _native64(0x4AFE3690D7E0B5AC) void clear_ped_drive_by_clipset_override(Ped ped)l
extern _native64(0x9DBA107B4937F809) void unk_0x9DBA107B4937F809(any p0, const char* p1)l
extern _native64(0xC79196DCB36F6121) void unk_0xC79196DCB36F6121(any p0)l
extern _native64(0x80054D7FCC70EEC6) void unk_0x80054D7FCC70EEC6(any p0)l
extern _native64(0x530071295899A8C6) void set_ped_in_vehicle_context(Ped ped, Hash context)l
extern _native64(0x22EF8FF8778030EB) void reset_ped_in_vehicle_context(Ped ped)l
extern _native64(0x6EC47A344923E1ED) bool is_scripted_scenario_ped_using_conditional_anim(Ped ped, const char* animDict, const char* anim)l
extern _native64(0x6C60394CB4F75E9A) void set_ped_alternate_walk_anim(Ped ped, const char* animDict, const char* animName, float p3, bool p4)l
extern _native64(0x8844BBFCE30AA9E9) void clear_ped_alternate_walk_anim(Ped ped, float p1)l
extern _native64(0x90A43CC281FFAB46) void set_ped_alternate_movement_anim(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, bool p5)l
extern _native64(0xD8D19675ED5FBDCE) void clear_ped_alternate_movement_anim(Ped ped, int stance, float p2)l
extern _native64(0xDDF803377F94AAA8) void set_ped_gesture_group(Ped ped, const char* animGroupGesture)l
extern _native64(0xBE22B26DD764C040) vector3 get_anim_initial_offset_position(const char* animDict, const char* animName, vector3 vec, vector3 Rot, float p8, int p9)l
extern _native64(0x4B805E6046EE9E47) vector3 get_anim_initial_offset_rotation(const char* animDict, const char* animName, vector3 vec, vector3 Rot, float p8, int p9)l
extern _native64(0x67F3780DD425D4FC) int get_ped_drawable_variation(Ped ped, int componentId)l
extern _native64(0x27561561732A7842) int get_number_of_ped_drawable_variations(Ped ped, int componentId)l
extern _native64(0x04A355E041E004E6) int get_ped_texture_variation(Ped ped, int componentId)l
extern _native64(0x8F7156A3142A6BAD) int get_number_of_ped_texture_variations(Ped ped, int componentId, int drawableId)l
extern _native64(0x5FAF9754E789FB47) int get_number_of_ped_prop_drawable_variations(Ped ped, int propId)l
extern _native64(0xA6E7F1CEB523E171) int get_number_of_ped_prop_texture_variations(Ped ped, int propId, int drawableId)l
extern _native64(0xE3DD5F2A84B42281) int get_ped_palette_variation(Ped ped, int componentId)l
extern _native64(0x9E30E91FB03A2CAF) bool unk_0x9E30E91FB03A2CAF(any* p0, any* p1)l
extern _native64(0x1E77FA7A62EE6C4C) any unk_0x1E77FA7A62EE6C4C(any p0)l
extern _native64(0xF033419D1B81FAE8) any unk_0xF033419D1B81FAE8(any p0)l
extern _native64(0xE825F6B6CEA7671D) bool is_ped_component_variation_valid(Ped ped, int componentId, int drawableId, int textureId)l
extern _native64(0x262B14F48D29DE80) void set_ped_component_variation(Ped ped, int componentId, int drawableId, int textureId, int paletteId)l
extern _native64(0xC8A9481A01E63C28) void set_ped_random_component_variation(Ped ped, bool p1)l
extern _native64(0xC44AA05345C992C6) void set_ped_random_props(Ped ped)l
extern _native64(0x45EEE61580806D63) void set_ped_default_component_variation(Ped ped)l
extern _native64(0x137BBD05230DB22D) void set_ped_blend_from_parents(Ped ped, any p1, any p2, float p3, float p4)l
extern _native64(0x9414E18B9434C2FE) void set_ped_head_blend_data(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, bool isParent)l
extern _native64(0x2746BD9D88C5C5D0) bool _get_ped_head_blend_data(Ped ped, any* headBlendData)l
extern _native64(0x723538F61C647C5A) void update_ped_head_blend_data(Ped ped, float shapeMix, float skinMix, float thirdMix)l
extern _native64(0x50B56988B170AFDF) void _set_ped_eye_color(Ped ped, int index)l
extern _native64(0x48F44967FA05CC1E) void set_ped_head_overlay(Ped ped, int overlayID, int index, float opacity)l
extern _native64(0xA60EF3B6461A4D43) int _get_ped_head_overlay_value(Ped ped, int overlayID)l
extern _native64(0xCF1CE768BB43480E) int _get_num_head_overlay_values(int overlayID)l
extern _native64(0x497BF74A7B9CB952) void _set_ped_head_overlay_color(Ped ped, int overlayID, int colorType, int colorID, int secondColorID)l
extern _native64(0x4CFFC65454C93A49) void _set_ped_hair_color(Ped ped, int colorID, int highlightColorID)l
extern _native64(0xE5C0CF872C2AD150) int _get_num_hair_colors()l
extern _native64(0xD1F7CA1535D22818) int _get_num_makeup_colors()l
extern _native64(0x4852FC386E2E1BB5) void unk_0x4852FC386E2E1BB5(any p0, any* p1, any* p2, any* p3)l
extern _native64(0x013E5CFC38CD5387) void unk_0x013E5CFC38CD5387(any p0, any* p1, any* p2, any* p3)l
extern _native64(0xED6D8E27A43B8CDE) bool unk_0xED6D8E27A43B8CDE(any p0)l
extern _native64(0xEA9960D07DADCF10) int unk_0xEA9960D07DADCF10(any p0)l
extern _native64(0x3E802F11FBE27674) bool unk_0x3E802F11FBE27674(any p0)l
extern _native64(0xF41B5D290C99A3D6) bool unk_0xF41B5D290C99A3D6(any p0)l
extern _native64(0xE0D36E5D9E99CC21) bool _is_ped_hair_color_valid(int colorID)l
extern _native64(0xAAA6A3698A69E048) any unk_0xAAA6A3698A69E048(any p0)l
extern _native64(0x0525A2C2562F3CD4) bool _is_ped_lipstick_color_valid(int colorID)l
extern _native64(0x604E810189EE3A59) bool _is_ped_blush_color_valid(int colorID)l
extern _native64(0xC56FBF2F228E1DAC) any unk_0xC56FBF2F228E1DAC(any p0, any p1, any p2)l
extern _native64(0x71A5C1DBA060049E) void _set_ped_face_feature(Ped ped, int index, float scale)l
extern _native64(0x654CD0A825161131) bool has_ped_head_blend_finished(Ped ped)l
extern _native64(0x4668D80430D6C299) void unk_0x4668D80430D6C299(Ped ped)l
extern _native64(0xCC9682B8951C5229) void unk_0xCC9682B8951C5229(Ped ped, RGB colour, int p4)l
extern _native64(0xA21C118553BBDF02) void unk_0xA21C118553BBDF02(any p0)l
extern _native64(0x68D353AB88B97E0C) int _get_first_parent_id_for_ped_type(int type)l
extern _native64(0x5EF37013A6539C9D) int _get_num_parent_peds_of_type(int type)l
extern _native64(0x39D55A620FCB6A3A) any unk_0x39D55A620FCB6A3A(Ped ped, int p1, int drawableId, int textureId)l
extern _native64(0x66680A92700F43DF) bool unk_0x66680A92700F43DF(Ped p0)l
extern _native64(0x5AAB586FFEC0FD96) void unk_0x5AAB586FFEC0FD96(any p0)l
extern _native64(0x2B16A3BFF1FBCE49) bool _is_ped_prop_valid(Ped ped, int componentId, int drawableId, int TextureId)l
extern _native64(0x784002A632822099) bool unk_0x784002A632822099(Ped ped)l
extern _native64(0xF79F9DEF0AADE61A) void unk_0xF79F9DEF0AADE61A(Ped ped)l
extern _native64(0x898CC20EA75BACD8) int get_ped_prop_index(Ped ped, int componentId)l
extern _native64(0x93376B65A266EB5F) void set_ped_prop_index(Ped ped, int componentId, int drawableId, int TextureId, bool attach)l
extern _native64(0x6FD7816A36615F48) void knock_off_ped_prop(Ped ped, bool p1, bool p2, bool p3, bool p4)l
extern _native64(0x0943E5B8E078E76E) void clear_ped_prop(Ped ped, int propId)l
extern _native64(0xCD8A7537A9B52F06) void clear_all_ped_props(Ped ped)l
extern _native64(0xAFF4710E2A0A6C12) void unk_0xAFF4710E2A0A6C12(Ped ped)l
extern _native64(0xE131A28626F81AB2) int get_ped_prop_texture_index(Ped ped, int componentId)l
extern _native64(0x1280804F7CFD2D6C) void unk_0x1280804F7CFD2D6C(any p0)l
extern _native64(0x36C6984C3ED0C911) void unk_0x36C6984C3ED0C911(any p0)l
extern _native64(0xB50EB4CCB29704AC) void unk_0xB50EB4CCB29704AC(any p0)l
extern _native64(0xFEC9A3B1820F3331) bool unk_0xFEC9A3B1820F3331(any p0)l
extern _native64(0x9F8AA94D6D97DBF4) void set_blocking_of_non_temporary_events(Ped ped, bool toggle)l
extern _native64(0x4F5F651ACCC9C4CF) void set_ped_bounds_orientation(Ped ped, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0x2F25D9AEFA34FBA2) void register_target(Ped ped, Ped target)l
extern _native64(0x9222F300BF8354FE) void register_hated_targets_around_ped(Ped ped, float radius)l
extern _native64(0x876046A8E3A4B71C) Ped get_random_ped_at_coord(vector3 vec, vector3 Radius, int pedType)l
extern _native64(0xC33AB876A77F8164) bool get_closest_ped(vector3 vec, float radius, bool p4, bool p5, Ped* outPed, bool p7, bool p8, int pedType)l
extern _native64(0x14F19A8782C8071E) void set_scenario_peds_to_be_returned_by_next_command(bool value)l
extern _native64(0x03EA03AF85A85CB7) bool unk_0x03EA03AF85A85CB7(Ped ped, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, any p8)l
extern _native64(0xDED5AF5A0EA4B297) void unk_0xDED5AF5A0EA4B297(Ped driver, float p1)l
extern _native64(0xB195FFA8042FC5C3) void set_driver_ability(Ped driver, float ability)l
extern _native64(0xA731F608CA104E3C) void set_driver_aggressiveness(Ped driver, float aggressiveness)l
extern _native64(0x128F79EDCECE4FD5) bool can_ped_ragdoll(Ped ped)l
extern _native64(0xAE99FB955581844A) bool set_ped_to_ragdoll(Ped ped, int time1, int time2, int ragdollType, bool p4, bool p5, bool p6)l
extern _native64(0xD76632D99E4966C8) bool set_ped_to_ragdoll_with_fall(Ped ped, int time, int p2, int ragdollType, vector3 vec, float p7, float p8, float p9, float p10, float p11, float p12, float p13)l
extern _native64(0xF0A4F1BBF4FA7497) void set_ped_ragdoll_on_collision(Ped ped, bool toggle)l
extern _native64(0x47E4E977581C5B55) bool is_ped_ragdoll(Ped ped)l
extern _native64(0xE3B6097CC25AA69E) bool is_ped_running_ragdoll_task(Ped ped)l
extern _native64(0x01F6594B923B9251) any set_ped_ragdoll_force_fall(Ped ped)l
extern _native64(0x9FA4664CF62E47E8) void reset_ped_ragdoll_timer(Ped ped)l
extern _native64(0xB128377056A54E2A) void set_ped_can_ragdoll(Ped ped, bool toggle)l
extern _native64(0xD1871251F3B5ACD7) bool unk_0xD1871251F3B5ACD7(Ped ped)l
extern _native64(0x2AFE52F782F25775) bool is_ped_running_mobile_phone_task(Ped ped)l
extern _native64(0xA3F3564A5B3646C0) bool unk_0xA3F3564A5B3646C0(Ped ped)l
extern _native64(0x26695EC767728D84) void _set_ped_ragdoll_blocking_flags(Ped ped, int flags)l
extern _native64(0xD86D101FCFD00A4B) void _reset_ped_ragdoll_blocking_flags(Ped ped, int flags)l
extern _native64(0xC7F76DF27A5045A1) void set_ped_angled_defensive_area(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9)l
extern _native64(0x9D3151A373974804) void set_ped_sphere_defensive_area(Ped ped, vector3 vec, float radius, bool p5, bool p6)l
extern _native64(0xF9B8F91AAD3B953E) void set_ped_defensive_sphere_attached_to_ped(Ped ped, Ped target, vector3 Offset, float radius, bool p6)l
extern _native64(0xE4723DB6E736CCFF) void unk_0xE4723DB6E736CCFF(Ped ped, any p1, float p2, float p3, float p4, float p5, bool p6)l
extern _native64(0x4EF47FE21698A8B6) void set_ped_defensive_area_attached_to_ped(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10)l
extern _native64(0x413C6C763A4AFFAD) void set_ped_defensive_area_direction(Ped ped, float p1, float p2, float p3, bool p4)l
extern _native64(0x74D4E028107450A9) void remove_ped_defensive_area(Ped ped, bool toggle)l
extern _native64(0x3C06B8786DD94CD1) vector3 get_ped_defensive_area_position(Ped ped, bool p1)l
extern _native64(0xBA63D9FE45412247) bool unk_0xBA63D9FE45412247(Ped ped, bool p1)l
extern _native64(0x8421EB4DA7E391B9) void set_ped_preferred_cover_set(Ped ped, any itemSet)l
extern _native64(0xFDDB234CF74073D9) void remove_ped_preferred_cover_set(Ped ped)l
extern _native64(0x8D8ACD8388CD99CE) void revive_injured_ped(Ped ped)l
extern _native64(0x71BC8E838B9C6035) void resurrect_ped(Ped ped)l
extern _native64(0x98EFA132A4117BE1) void set_ped_name_debug(Ped ped, const char* name)l
extern _native64(0xE0AF41401ADF87E3) vector3 get_ped_extracted_displacement(Ped ped, bool worldSpace)l
extern _native64(0x5BA7919BED300023) any set_ped_dies_when_injured(Ped ped, bool toggle)l
extern _native64(0x97A790315D3831FD) any set_ped_enable_weapon_blocking(Ped ped, bool toggle)l
extern _native64(0xF9ACF4A08098EA25) void unk_0xF9ACF4A08098EA25(Ped ped, bool p1)l
extern _native64(0x3AC1F7B898F30C05) any reset_ped_visible_damage(Ped ped)l
extern _native64(0x816F6981C60BF53B) void apply_ped_blood_damage_by_zone(Ped ped, any p1, float p2, float p3, any p4)l
extern _native64(0x83F7E01C7B769A26) void apply_ped_blood(Ped ped, int boneIndex, vector3 Rot, const char* woundType)l
extern _native64(0x3311E47B91EDCBBC) void apply_ped_blood_by_zone(Ped ped, any p1, float p2, float p3, any* p4)l
extern _native64(0xEF0D582CBF2D9B0F) void apply_ped_blood_specific(Ped ped, any p1, float p2, float p3, float p4, float p5, any p6, float p7, any* p8)l
extern _native64(0x397C38AA7B4A5F83) void apply_ped_damage_decal(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, bool p8, const char* p9)l
extern _native64(0x46DF918788CB093F) void apply_ped_damage_pack(Ped ped, const char* damagePack, float damage, float mult)l
extern _native64(0x8FE22675A5A45817) void clear_ped_blood_damage(Ped ped)l
extern _native64(0x56E3B78C5408D9F4) void clear_ped_blood_damage_by_zone(Ped ped, int p1)l
extern _native64(0x62AB793144DE75DC) void hide_ped_blood_damage_by_zone(Ped ped, any p1, bool p2)l
extern _native64(0x523C79AEEFCC4A2A) void clear_ped_damage_decal_by_zone(Ped ped, int p1, const char* p2)l
extern _native64(0x71EAB450D86954A1) any get_ped_decorations_state(Ped ped)l
extern _native64(0x2B694AFCF64E6994) void unk_0x2B694AFCF64E6994(Ped ped, bool p1)l
extern _native64(0x9C720776DAA43E7E) void clear_ped_wetness(Ped ped)l
extern _native64(0x44CB6447D2571AA0) void set_ped_wetness_height(Ped ped, float height)l
extern _native64(0xB5485E4907B53019) void set_ped_wetness_enabled_this_frame(Ped ped)l
extern _native64(0x6585D955A68452A5) any unk_0x6585D955A68452A5(Ped ped)l
extern _native64(0x27B0405F59637D1F) void set_ped_sweat(Ped ped, float sweat)l
extern _native64(0x5F5D1665E352A839) void _set_ped_decoration(Ped ped, Hash collection, Hash overlay)l
extern _native64(0x5619BFA07CFD7833) void _set_ped_facial_decoration(Ped ped, Hash collection, Hash overlay)l
extern _native64(0x9FD452BFBE7A7A8B) int _get_tattoo_zone(Hash collection, Hash overlay)l
extern _native64(0x0E5173C163976E38) void clear_ped_decorations(Ped ped)l
extern _native64(0xE3B27E70CEAB9F0C) void _clear_ped_facial_decorations(Ped ped)l
extern _native64(0x11B499C1E0FF8559) bool was_ped_skeleton_updated(Ped ped)l
extern _native64(0x17C07FC640E86B4E) vector3 get_ped_bone_coords(Ped ped, int boneId, vector3 offset)l
extern _native64(0x418EF2A1BCE56685) void create_nm_message(bool startImmediately, int messageId)l
extern _native64(0xB158DFCCC56E5C5B) void give_ped_nm_message(Ped ped)l
extern _native64(0x1B5C85C612E5256E) any add_scenario_blocking_area(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9)l
extern _native64(0xD37401D78A929A49) void remove_scenario_blocking_areas()l
extern _native64(0x31D16B74C6E29D66) void remove_scenario_blocking_area(any p0, bool p1)l
extern _native64(0x28157D43CF600981) void set_scenario_peds_spawn_in_sphere_area(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x1BF094736DD62C2E) bool is_ped_using_scenario(Ped ped, const char* scenario)l
extern _native64(0x57AB4A3080F85143) bool is_ped_using_any_scenario(Ped ped)l
extern _native64(0xFE07FF6495D52E2A) any unk_0xFE07FF6495D52E2A(any p0, any p1, any p2, any p3)l
extern _native64(0x9A77DFD295E29B09) void unk_0x9A77DFD295E29B09(any p0, bool p1)l
extern _native64(0x25361A96E0F7E419) any unk_0x25361A96E0F7E419(any p0, any p1, any p2, any p3)l
extern _native64(0xEC6935EBE0847B90) any unk_0xEC6935EBE0847B90(any p0, any p1, any p2, any p3)l
extern _native64(0xA3A9299C4F2ADB98) void unk_0xA3A9299C4F2ADB98(any p0)l
extern _native64(0xF1C03A5352243A30) void unk_0xF1C03A5352243A30(any p0)l
extern _native64(0xEEED8FAFEC331A70) any unk_0xEEED8FAFEC331A70(any p0, any p1, any p2, any p3)l
extern _native64(0x425AECF167663F48) void unk_0x425AECF167663F48(Ped ped, bool p1)l
extern _native64(0x5B6010B3CBC29095) void unk_0x5B6010B3CBC29095(any p0, bool p1)l
extern _native64(0xCEDA60A74219D064) void unk_0xCEDA60A74219D064(any p0, bool p1)l
extern _native64(0xE1E65CA8AC9C00ED) void play_facial_anim(Ped ped, const char* animName, const char* animDict)l
extern _native64(0xFFC24B988B938B38) void set_facial_idle_anim_override(Ped ped, const char* animName, const char* animDict)l
extern _native64(0x726256CC1EEB182F) void clear_facial_idle_anim_override(Ped ped)l
extern _native64(0xBAF20C5432058024) void set_ped_can_play_gesture_anims(Ped ped, bool toggle)l
extern _native64(0xF833DDBA3B104D43) void set_ped_can_play_viseme_anims(Ped ped, bool toggle, bool p2)l
extern _native64(0x33A60D8BDD6E508C) void unk_0x33A60D8BDD6E508C(Ped ped, bool p1)l
extern _native64(0x6373D1349925A70E) void set_ped_can_play_ambient_anims(Ped ped, bool toggle)l
extern _native64(0x0EB0585D15254740) void set_ped_can_play_ambient_base_anims(Ped ped, bool toggle)l
extern _native64(0xC2EE020F5FB4DB53) void unk_0xC2EE020F5FB4DB53(Ped ped)l
extern _native64(0x6C3B4D6D13B4C841) void set_ped_can_arm_ik(Ped ped, bool toggle)l
extern _native64(0xC11C18092C5530DC) void set_ped_can_head_ik(Ped ped, bool toggle)l
extern _native64(0x73518ECE2485412B) void set_ped_can_leg_ik(Ped ped, bool toggle)l
extern _native64(0xF2B7106D37947CE0) void set_ped_can_torso_ik(Ped ped, bool toggle)l
extern _native64(0xF5846EDB26A98A24) void unk_0xF5846EDB26A98A24(Ped ped, bool p1)l
extern _native64(0x6647C5F6F5792496) void unk_0x6647C5F6F5792496(Ped ped, bool p1)l
extern _native64(0xEC4686EC06434678) void set_ped_can_use_auto_conversation_lookat(Ped ped, bool toggle)l
extern _native64(0x5CD3CB88A7F8850D) bool is_ped_headtracking_ped(Ped ped1, Ped ped2)l
extern _native64(0x813A0A7C9D2E831F) bool is_ped_headtracking_entity(Ped ped, Entity entity)l
extern _native64(0xCD17B554996A8D9E) void set_ped_primary_lookat(Ped ped, Ped lookAt)l
extern _native64(0x78C4E9961DB3EB5B) void unk_0x78C4E9961DB3EB5B(any p0, any p1)l
extern _native64(0x82A3D6D9CC2CB8E3) void set_ped_cloth_prone(any p0, any p1)l
extern _native64(0xA660FAF550EB37E5) void unk_0xA660FAF550EB37E5(any p0, bool p1)l
extern _native64(0x1913FE4CBF41C463) void set_ped_config_flag(Ped ped, int flagId, bool value)l
extern _native64(0xC1E8A365BF3B29F2) void set_ped_reset_flag(Ped ped, int flagId, bool doReset)l
extern _native64(0x7EE53118C892B513) bool get_ped_config_flag(Ped ped, int flagId, bool p2)l
extern _native64(0xAF9E59B1B1FBF2A0) bool get_ped_reset_flag(Ped ped, int flagId)l
extern _native64(0x0BDDB8D9EC6BCF3C) void set_ped_group_member_passenger_index(Ped ped, int index)l
extern _native64(0x6B7A646C242A7059) void set_ped_can_evasive_dive(Ped ped, bool toggle)l
extern _native64(0x414641C26E105898) bool is_ped_evasive_diving(Ped ped, Entity* evadingEntity)l
extern _native64(0x96A05E4FB321B1BA) void set_ped_shoots_at_coord(Ped ped, vector3 vec, bool toggle)l
extern _native64(0xE163A4BCE4DE6F11) void set_ped_model_is_suppressed(Ped ped, bool toggle)l
extern _native64(0xB47BD05FA66B40CF) void stop_any_ped_model_being_suppressed()l
extern _native64(0x638C03B0F9878F57) void set_ped_can_be_targeted_when_injured(Ped ped, bool toggle)l
extern _native64(0x7FB17BA2E7DECA5B) void set_ped_generates_dead_body_events(Ped ped, bool toggle)l
extern _native64(0xE43A13C9E4CCCBCF) void unk_0xE43A13C9E4CCCBCF(Ped ped, bool p1)l
extern _native64(0xDF993EE5E90ABA25) void set_ped_can_ragdoll_from_player_impact(Ped ped, bool toggle)l
extern _native64(0x54C7C4A94367717E) void give_ped_helmet(Ped ped, bool cannotRemove, int helmetFlag, int textureIndex)l
extern _native64(0xA7B2458D0AD6DED8) void remove_ped_helmet(Ped ped, bool instantly)l
extern _native64(0x14590DDBEDB1EC85) bool unk_0x14590DDBEDB1EC85(Ped ped)l
extern _native64(0x560A43136EB58105) void set_ped_helmet(Ped ped, bool canWearHelmet)l
extern _native64(0xC0E78D5C2CE3EB25) void set_ped_helmet_flag(Ped ped, int helmetFlag)l
extern _native64(0x26D83693ED99291C) void set_ped_helmet_prop_index(Ped ped, int propIndex)l
extern _native64(0xF1550C4BD22582E2) void set_ped_helmet_texture_index(Ped ped, int textureIndex)l
extern _native64(0xF33BDFE19B309B19) bool is_ped_wearing_helmet(Ped ped)l
extern _native64(0x687C0B594907D2E8) void unk_0x687C0B594907D2E8(Ped ped)l
extern _native64(0x451294E859ECC018) any unk_0x451294E859ECC018(any p0)l
extern _native64(0x9D728C1E12BF5518) any unk_0x9D728C1E12BF5518(any p0)l
extern _native64(0xF2385935BFFD4D92) bool unk_0xF2385935BFFD4D92(any p0)l
extern _native64(0x332B562EEDA62399) void set_ped_to_load_cover(Ped ped, bool toggle)l
extern _native64(0xCB7553CDCEF4A735) void set_ped_can_cower_in_cover(Ped ped, bool toggle)l
extern _native64(0xC514825C507E3736) void set_ped_can_peek_in_cover(Ped ped, bool toggle)l
extern _native64(0x94D94BF1A75AED3D) void set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(Ped ped, bool toggle)l
extern _native64(0xC396F5B86FF9FEBD) void set_ped_leg_ik_mode(Ped ped, int mode)l
extern _native64(0x0A986918B102B448) void set_ped_motion_blur(Ped ped, bool toggle)l
extern _native64(0xED7F7EFE9FABF340) void set_ped_can_switch_weapon(Ped ped, bool toggle)l
extern _native64(0xEEB64139BA29A7CF) void set_ped_dies_instantly_in_water(Ped ped, bool toggle)l
extern _native64(0x1A330D297AAC6BC1) void unk_0x1A330D297AAC6BC1(Ped ped, int p1)l
extern _native64(0xC158D28142A34608) void stop_ped_weapon_firing_when_dropped(Ped ped)l
extern _native64(0x5917BBA32D06C230) void set_scripted_anim_seat_offset(Ped ped, float p1)l
extern _native64(0x4D9CA1009AFBD057) void set_ped_combat_movement(Ped ped, int combatMovement)l
extern _native64(0xDEA92412FCAEB3F5) int get_ped_combat_movement(Ped ped)l
extern _native64(0xC7622C0D36B2FDA8) void set_ped_combat_ability(Ped ped, int p1)l
extern _native64(0x3C606747B23E497B) void set_ped_combat_range(Ped ped, int p1)l
extern _native64(0xF9D9F7F2DB8E2FA0) any get_ped_combat_range(Ped ped)l
extern _native64(0x9F7794730795E019) void set_ped_combat_attributes(Ped ped, int attributeIndex, bool enabled)l
extern _native64(0x0703B9079823DA4A) void set_ped_target_loss_response(Ped ped, int responseType)l
extern _native64(0xDCCA191DF9980FD7) bool unk_0xDCCA191DF9980FD7(Ped ped)l
extern _native64(0xFD4CCDBCC59941B7) bool is_ped_performing_stealth_kill(Ped ped)l
extern _native64(0xEBD0EDBA5BE957CF) bool unk_0xEBD0EDBA5BE957CF(Ped ped)l
extern _native64(0x863B23EFDE9C5DF2) bool is_ped_being_stealth_killed(Ped ped)l
extern _native64(0x18A3E9EE1297FD39) Ped get_melee_target_for_ped(Ped ped)l
extern _native64(0xF9800AA1A771B000) bool was_ped_killed_by_stealth(Ped ped)l
extern _native64(0x7F08E26039C7347C) bool was_ped_killed_by_takedown(Ped ped)l
extern _native64(0x61767F73EACEED21) bool unk_0x61767F73EACEED21(Ped ped)l
extern _native64(0x70A2D1137C8ED7C9) void set_ped_flee_attributes(Ped ped, int attributes, bool p2)l
extern _native64(0xA549131166868ED3) void set_ped_cower_hash(Ped ped, const char* p1)l
extern _native64(0x2016C603D6B8987C) void unk_0x2016C603D6B8987C(any p0, bool p1)l
extern _native64(0x46F2193B3AD1D891) void set_ped_steers_around_peds(Ped ped, bool toggle)l
extern _native64(0x1509C089ADC208BF) void set_ped_steers_around_objects(Ped ped, bool toggle)l
extern _native64(0xEB6FB9D48DDE23EC) void set_ped_steers_around_vehicles(Ped ped, bool toggle)l
extern _native64(0xA9B61A329BFDCBEA) void unk_0xA9B61A329BFDCBEA(any p0, bool p1)l
extern _native64(0x570389D1C3DE3C6B) void unk_0x570389D1C3DE3C6B(any p0)l
extern _native64(0x576594E8D64375E2) void unk_0x576594E8D64375E2(any p0, bool p1)l
extern _native64(0xA52D5247A4227E14) void unk_0xA52D5247A4227E14(any p0)l
extern _native64(0x083961498679DC9F) bool is_any_ped_near_point(vector3 vec, float radius)l
extern _native64(0x2208438012482A1A) void unk_0x2208438012482A1A(Ped ped, bool p1, bool p2)l
extern _native64(0xFCF37A457CB96DC0) bool unk_0xFCF37A457CB96DC0(any p0, float p1, float p2, float p3, float p4)l
extern _native64(0x7D7A2E43E74E2EB8) void unk_0x7D7A2E43E74E2EB8(any p0)l
extern _native64(0x2BC338A7B21F4608) void get_ped_flood_invincibility(Ped ped, bool p1)l
extern _native64(0xCD018C591F94CB43) void unk_0xCD018C591F94CB43(any p0, bool p1)l
extern _native64(0x75BA1CB3B7D40CAF) void unk_0x75BA1CB3B7D40CAF(Ped ped, bool p1)l
extern _native64(0x91C8E617F64188AC) bool is_tracked_ped_visible(Ped ped)l
extern _native64(0x511F1A683387C7E2) any unk_0x511F1A683387C7E2(any p0)l
extern _native64(0x4C5E1F087CD10BB7) bool is_ped_tracked(Ped ped)l
extern _native64(0x8507BCB710FA6DC0) bool has_ped_received_event(any p0, any p1)l
extern _native64(0x6CD5A433374D4CFB) bool unk_0x6CD5A433374D4CFB(any p0, any p1)l
extern _native64(0x9C6A6C19B6C0C496) bool unk_0x9C6A6C19B6C0C496(Ped p0, any* p1)l
extern _native64(0x3F428D08BE5AAE31) int get_ped_bone_index(Ped ped, int boneId)l
extern _native64(0x2057EF813397A772) int get_ped_ragdoll_bone_index(Ped ped, int bone)l
extern _native64(0xBF29516833893561) void set_ped_enveff_scale(Ped ped, float value)l
extern _native64(0x9C14D30395A51A3C) float get_ped_enveff_scale(Ped ped)l
extern _native64(0xD2C5AA0C0E8D0F1E) void set_enable_ped_enveff_scale(Ped ped, bool toggle)l
extern _native64(0x110F526AB784111F) void unk_0x110F526AB784111F(Ped ped, float p1)l
extern _native64(0xD69411AA0CEBF9E9) void unk_0xD69411AA0CEBF9E9(Ped ped, int p1, int p2, int p3)l
extern _native64(0x1216E0BFA72CC703) void unk_0x1216E0BFA72CC703(any p0, any p1)l
extern _native64(0x2B5AA717A181FB4C) void unk_0x2B5AA717A181FB4C(any p0, bool p1)l
extern _native64(0xB8B52E498014F5B0) bool unk_0xB8B52E498014F5B0(Ped ped)l
extern _native64(0x8C18E0F9080ADD73) int create_synchronized_scene(vector3 vec, float roll, float pitch, float yaw, int p6)l
extern _native64(0x62EC273D00187DCA) int unk_0x62EC273D00187DCA(vector3 vec, float radius, Hash object)l
extern _native64(0x25D39B935A038A26) bool is_synchronized_scene_running(int sceneId)l
extern _native64(0x6ACF6B7225801CD7) void set_synchronized_scene_origin(int sceneID, vector3 vec, float roll, float pitch, float yaw, bool p7)l
extern _native64(0x734292F4F0ABF6D0) void set_synchronized_scene_phase(int sceneID, float phase)l
extern _native64(0xE4A310B1D7FA73CC) float get_synchronized_scene_phase(int sceneID)l
extern _native64(0xB6C49F8A5E295A5D) void set_synchronized_scene_rate(int sceneID, float rate)l
extern _native64(0xD80932D577274D40) float get_synchronized_scene_rate(int sceneID)l
extern _native64(0xD9A897A4C6C2974F) void set_synchronized_scene_looped(int sceneID, bool toggle)l
extern _native64(0x62522002E0C391BA) bool is_synchronized_scene_looped(int sceneID)l
extern _native64(0x394B9CD12435C981) void _set_synchronized_scene_occlusion_portal(any sceneID, bool p1)l
extern _native64(0x7F2F4F13AC5257EF) bool unk_0x7F2F4F13AC5257EF(any p0)l
extern _native64(0x272E4723B56A3B96) void attach_synchronized_scene_to_entity(int sceneID, Entity entity, int boneIndex)l
extern _native64(0x6D38F1F04CBB37EA) void detach_synchronized_scene(int sceneID)l
extern _native64(0xCD9CC7E200A52A6F) void _dispose_synchronized_scene(int scene)l
extern _native64(0xF28965D04F570DCA) bool force_ped_motion_state(Ped ped, Hash motionStateHash, bool p2, bool p3, bool p4)l
extern _native64(0xF60165E1D2C5370B) bool unk_0xF60165E1D2C5370B(Ped ped, any* p1, any* p2)l
extern _native64(0x433083750C5E064A) void set_ped_max_move_blend_ratio(Ped ped, float value)l
extern _native64(0x01A898D26E2333DD) void set_ped_min_move_blend_ratio(Ped ped, float value)l
extern _native64(0x085BF80FA50A39D1) void set_ped_move_rate_override(Ped ped, float value)l
extern _native64(0x46B05BCAE43856B0) bool unk_0x46B05BCAE43856B0(Ped ped, int flag)l
extern _native64(0xCFF869CBFA210D82) int get_ped_nearby_vehicles(Ped ped, int* sizeAndVehs)l
extern _native64(0x23F8F5FC7E8C4A6B) int get_ped_nearby_peds(Ped ped, int* sizeAndPeds, int ignore)l
extern _native64(0x7350823473013C02) bool unk_0x7350823473013C02(Ped ped)l
extern _native64(0x00E73468D085F745) bool is_ped_using_action_mode(Ped ped)l
extern _native64(0xD75ACCF5E0FB5367) void set_ped_using_action_mode(Ped ped, bool p1, any p2, const char* action)l
extern _native64(0x781DE8FA214E87D2) void unk_0x781DE8FA214E87D2(Ped ped, const char* p1)l
extern _native64(0x364DF566EC833DE2) void set_ped_capsule(Ped ped, float value)l
extern _native64(0x4462658788425076) any register_pedheadshot(Ped ped)l
extern _native64(0x953563CE563143AF) any unk_0x953563CE563143AF(any p0)l
extern _native64(0x96B1361D9B24C2FF) void unregister_pedheadshot(Ped ped)l
extern _native64(0xA0A9668F158129A2) int is_pedheadshot_valid(int handle)l
extern _native64(0x7085228842B13A67) bool is_pedheadshot_ready(int handle)l
extern _native64(0xDB4EACD4AD0A5D6B) const char* get_pedheadshot_txd_string(int handle)l
extern _native64(0xF0DAEF2F545BEE25) bool unk_0xF0DAEF2F545BEE25(any p0)l
extern _native64(0x5D517B27CF6ECD04) void unk_0x5D517B27CF6ECD04(any p0)l
extern _native64(0xEBB376779A760AA8) any unk_0xEBB376779A760AA8()l
extern _native64(0x876928DDDFCCC9CD) any unk_0x876928DDDFCCC9CD()l
extern _native64(0xE8A169E666CBC541) any unk_0xE8A169E666CBC541()l
extern _native64(0xC1F6EBF9A3D55538) void unk_0xC1F6EBF9A3D55538(any p0, any p1)l
extern _native64(0x600048C60D5C2C51) void unk_0x600048C60D5C2C51(any p0)l
extern _native64(0x2DF9038C90AD5264) void unk_0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration)l
extern _native64(0xB2AFF10216DEFA2F) void unk_0xB2AFF10216DEFA2F(vector3 vec, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration)l
extern _native64(0xFEE4A5459472A9F8) void unk_0xFEE4A5459472A9F8()l
extern _native64(0x3C67506996001F5E) any unk_0x3C67506996001F5E()l
extern _native64(0xA586FBEB32A53DBB) any unk_0xA586FBEB32A53DBB()l
extern _native64(0xF445DE8DA80A1792) any unk_0xF445DE8DA80A1792()l
extern _native64(0xA635C11B8C44AFC2) any unk_0xA635C11B8C44AFC2()l
extern _native64(0x280C7E3AC7F56E90) void unk_0x280C7E3AC7F56E90(any p0, any* p1, any* p2, any* p3)l
extern _native64(0xB782F8238512BAD5) void unk_0xB782F8238512BAD5(any p0, any* p1)l
extern _native64(0xC32779C16FCEECD9) void set_ik_target(Ped ped, int p1, Ped targetPed, int boneLookAt, vector3 vec, any p7, int duration, int duration1)l
extern _native64(0xED3C76ADFA6D07C4) void unk_0xED3C76ADFA6D07C4(any p0)l
extern _native64(0x290E2780BB7AA598) void request_action_mode_asset(const char* asset)l
extern _native64(0xE4B5F4BF2CB24E65) bool has_action_mode_asset_loaded(const char* asset)l
extern _native64(0x13E940F88470FA51) void remove_action_mode_asset(const char* asset)l
extern _native64(0x2A0A62FCDEE16D4F) void request_stealth_mode_asset(const char* asset)l
extern _native64(0xE977FC5B08AF3441) bool has_stealth_mode_asset_loaded(const char* asset)l
extern _native64(0x9219857D21F0E842) void remove_stealth_mode_asset(const char* asset)l
extern _native64(0xDC2C5C242AAC342B) void set_ped_lod_multiplier(Ped ped, float multiplier)l
extern _native64(0xE861D0B05C7662B8) void unk_0xE861D0B05C7662B8(any p0, bool p1, any p2)l
extern _native64(0x129466ED55140F8D) void unk_0x129466ED55140F8D(Ped ped, bool toggle)l
extern _native64(0xCB968B53FC7F916D) void unk_0xCB968B53FC7F916D(any p0, bool p1, any p2, any p3)l
extern _native64(0x68772DB2B2526F9F) bool unk_0x68772DB2B2526F9F(Ped ped, vector3 vec, float range)l
extern _native64(0x06087579E7AA85A9) bool unk_0x06087579E7AA85A9(any p0, any p1, float p2, float p3, float p4, float p5)l
extern _native64(0xD8C3BE3EE94CAF2D) void unk_0xD8C3BE3EE94CAF2D(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0xD33DAA36272177C4) void unk_0xD33DAA36272177C4(Ped ped)l
extern _native64(0x83A169EABCDB10A2) void unk_0x83A169EABCDB10A2(any p0, any p1)l
extern _native64(0x288DF530C92DAD6F) void unk_0x288DF530C92DAD6F(any p0, float p1)l
#pragma endregion //}
#pragma region VEHICLE //{
extern _native64(0xAF35D0D2583051B0) Vehicle create_vehicle(Hash modelHash, vector3 vec, float heading, bool isNetwork, bool p6)l
extern _native64(0xEA386986E786A54F) void delete_vehicle(Vehicle* vehicle)l
extern _native64(0x7D6F9A3EF26136A0) void unk_0x7D6F9A3EF26136A0(Vehicle vehicle, bool p1, bool p2)l
extern _native64(0x5D14D4154BFE7B2C) void set_vehicle_allow_no_passengers_lockon(Vehicle veh, bool toggle)l
extern _native64(0xE6B0E8CFC3633BF0) int unk_0xE6B0E8CFC3633BF0(Vehicle vehicle)l
extern _native64(0x423E8DE37D934D89) bool is_vehicle_model(Vehicle vehicle, Hash model)l
extern _native64(0xF6086BC836400876) bool does_script_vehicle_generator_exist(int vehicleGenerator)l
extern _native64(0x9DEF883114668116) int create_script_vehicle_generator(vector3 vec, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, bool p11, bool p12, bool p13, bool p14, bool p15, int p16)l
extern _native64(0x22102C9ABFCF125D) void delete_script_vehicle_generator(int vehicleGenerator)l
extern _native64(0xD9D620E0AC6DC4B0) void set_script_vehicle_generator(any vehicleGenerator, bool enabled)l
extern _native64(0xC12321827687FE4D) void set_all_vehicle_generators_active_in_area(vector3 vec_1, vector3 vec_2, bool p6, bool p7)l
extern _native64(0x34AD89078831A4BC) void set_all_vehicle_generators_active()l
extern _native64(0x608207E7A8FB787C) void set_all_low_priority_vehicle_generators_active(bool active)l
extern _native64(0x9A75585FB2E54FAD) void unk_0x9A75585FB2E54FAD(float p0, float p1, float p2, float p3)l
extern _native64(0x0A436B8643716D14) void unk_0x0A436B8643716D14()l
extern _native64(0x49733E92263139D1) bool set_vehicle_on_ground_properly(Vehicle vehicle, float p1)l
extern _native64(0xE023E8AC4EF7C117) any set_all_vehicles_spawn(Vehicle p0, bool p1, bool p2, bool p3)l
extern _native64(0xB497F06B288DCFDF) bool is_vehicle_stuck_on_roof(Vehicle vehicle)l
extern _native64(0xB72E26D81006005B) void add_vehicle_upsidedown_check(Vehicle vehicle)l
extern _native64(0xC53EB42A499A7E90) void remove_vehicle_upsidedown_check(Vehicle vehicle)l
extern _native64(0x5721B434AD84D57A) bool is_vehicle_stopped(Vehicle vehicle)l
extern _native64(0x24CB2137731FFE89) int get_vehicle_number_of_passengers(Vehicle vehicle)l
extern _native64(0xA7C4F2C6E744A550) int get_vehicle_max_number_of_passengers(Vehicle vehicle)l
extern _native64(0x2AD93716F184EDA4) int get_vehicle_model_number_of_seats(Hash modelHash)l
extern _native64(0xF7F203E31F96F6A1) bool unk_0xF7F203E31F96F6A1(Vehicle vehicle, bool flag)l
extern _native64(0xE33FFA906CE74880) bool unk_0xE33FFA906CE74880(Vehicle vehicle, any p1)l
extern _native64(0x245A6883D966D537) void set_vehicle_density_multiplier_this_frame(float multiplier)l
extern _native64(0xB3B3359379FE77D3) void set_random_vehicle_density_multiplier_this_frame(float multiplier)l
extern _native64(0xEAE6DCC7EEE3DB1D) void set_parked_vehicle_density_multiplier_this_frame(float multiplier)l
extern _native64(0xD4B8E3D1917BC86B) void unk_0xD4B8E3D1917BC86B(bool toggle)l
extern _native64(0x90B6DA738A9A25DA) void _set_some_vehicle_density_multiplier_this_frame(float value)l
extern _native64(0x26324F33423F3CC3) void set_far_draw_vehicles(bool toggle)l
extern _native64(0xCAA15F13EBD417FF) any set_number_of_parked_vehicles(int value)l
extern _native64(0xB664292EAECF7FA6) void set_vehicle_doors_locked(Vehicle vehicle, int doorLockStatus)l
extern _native64(0xBE70724027F85BCD) void set_ped_targettable_vehicle_destroy(Vehicle vehicle, int vehicleComponent, int destroyType)l
extern _native64(0xD8050E0EB60CF274) void disable_vehicle_impact_explosion_activation(Vehicle vehicle, bool toggle)l
extern _native64(0x517AAF684BB50CD1) void set_vehicle_doors_locked_for_player(Vehicle vehicle, Player player, bool toggle)l
extern _native64(0xF6AF6CB341349015) bool get_vehicle_doors_locked_for_player(Vehicle vehicle, Player player)l
extern _native64(0xA2F80B8D040727CC) void set_vehicle_doors_locked_for_all_players(Vehicle vehicle, bool toggle)l
extern _native64(0x9737A37136F07E75) void unk_0x9737A37136F07E75(Vehicle vehicle, bool toggle)l
extern _native64(0xB81F6D4A8F5EEBA8) void set_vehicle_doors_locked_for_team(Vehicle vehicle, int team, bool toggle)l
extern _native64(0xBA71116ADF5B514C) void explode_vehicle(Vehicle vehicle, bool isAudible, bool isInvisible)l
extern _native64(0xF19D095E42D430CC) void set_vehicle_out_of_control(Vehicle vehicle, bool killDriver, bool explodeOnImpact)l
extern _native64(0x2E0A74E1002380B1) void set_vehicle_timed_explosion(Vehicle vehicle, Ped ped, bool toggle)l
extern _native64(0x99AD4CCCB128CBC9) void unk_0x99AD4CCCB128CBC9(Vehicle vehicle)l
extern _native64(0x6ADAABD3068C5235) any unk_0x6ADAABD3068C5235()l
extern _native64(0xEF49CF0270307CBE) void unk_0xEF49CF0270307CBE()l
extern _native64(0xAE3FEE8709B39DCB) bool unk_0xAE3FEE8709B39DCB(Vehicle vehicle)l
extern _native64(0x598803E85E8448D9) void set_taxi_lights(Vehicle vehicle, bool state)l
extern _native64(0x7504C0F113AB50FC) bool is_taxi_light_on(Vehicle vehicle)l
extern _native64(0xCEE4490CD57BB3C2) bool is_vehicle_in_garage_area(const char* garageName, Vehicle vehicle)l
extern _native64(0x4F1D4BE3A7F24601) void set_vehicle_colours(Vehicle vehicle, int colorPrimary, int colorSecondary)l
extern _native64(0x8B7FD87F0DDB421E) void set_vehicle_fullbeam(Vehicle vehicle, bool toggle)l
extern _native64(0x07116E24E9D1929D) void steer_unlock_bias(Vehicle vehicle, bool toggle)l
extern _native64(0x7141766F91D15BEA) void set_vehicle_custom_primary_colour(Vehicle vehicle, RGB colour)l
extern _native64(0xB64CF2CCA9D95F52) void get_vehicle_custom_primary_colour(Vehicle vehicle, int* r, int* g, int* b)l
extern _native64(0x55E1D2758F34E437) any clear_vehicle_custom_primary_colour(Vehicle vehicle)l
extern _native64(0xF095C0405307B21B) bool get_is_vehicle_primary_colour_custom(Vehicle vehicle)l
extern _native64(0x36CED73BFED89754) void set_vehicle_custom_secondary_colour(Vehicle vehicle, RGB colour)l
extern _native64(0x8389CD56CA8072DC) void get_vehicle_custom_secondary_colour(Vehicle vehicle, int* r, int* g, int* b)l
extern _native64(0x5FFBDEEC3E8E2009) any clear_vehicle_custom_secondary_colour(Vehicle vehicle)l
extern _native64(0x910A32E7AAD2656C) bool get_is_vehicle_secondary_colour_custom(Vehicle vehicle)l
extern _native64(0x3AFDC536C3D01674) void set_vehicle_enveff_scale(Vehicle vehicle, float fade)l
extern _native64(0xA82819CAC9C4C403) float get_vehicle_enveff_scale(Vehicle vehicle)l
extern _native64(0x52BBA29D5EC69356) void set_can_respray_vehicle(Vehicle vehicle, bool state)l
extern _native64(0x33506883545AC0DF) void unk_0x33506883545AC0DF(Vehicle vehicle, bool p1)l
extern _native64(0xC59872A5134879C7) void _jitter_vehicle(Vehicle vehicle, bool p1, float yaw, float pitch, float roll)l
extern _native64(0x75DBEC174AEEAD10) void set_boat_anchor(Vehicle vehicle, bool toggle)l
extern _native64(0x26C10ECBDA5D043B) bool _get_boat_anchor(Vehicle vehicle)l
extern _native64(0xE3EBAAE484798530) void unk_0xE3EBAAE484798530(Vehicle vehicle, bool p1)l
extern _native64(0xB28B1FE5BFADD7F5) void unk_0xB28B1FE5BFADD7F5(Vehicle vehicle, bool p1)l
extern _native64(0xE842A9398079BD82) void unk_0xE842A9398079BD82(Vehicle vehicle, float p1)l
extern _native64(0x8F719973E1445BA2) void unk_0x8F719973E1445BA2(Vehicle vehicle, bool p1)l
extern _native64(0xF4924635A19EB37D) void set_vehicle_siren(Vehicle vehicle, bool toggle)l
extern _native64(0x4C9BF537BE2634B2) bool is_vehicle_siren_on(Vehicle vehicle)l
extern _native64(0xB5CC40FBCB586380) bool _is_vehicle_siren_sound_on(Vehicle vehicle)l
extern _native64(0x3E8C8727991A8A0B) void set_vehicle_strong(Vehicle vehicle, bool toggle)l
extern _native64(0x8386BFB614D06749) void remove_vehicle_stuck_check(Vehicle vehicle)l
extern _native64(0xA19435F193E081AC) void get_vehicle_colours(Vehicle vehicle, int* colorPrimary, int* colorSecondary)l
extern _native64(0x22AC59A870E6A669) bool is_vehicle_seat_free(Vehicle vehicle, int seatIndex)l
extern _native64(0xBB40DD2270B65366) Ped get_ped_in_vehicle_seat(Vehicle vehicle, int index)l
extern _native64(0x83F969AA1EE2A664) Ped get_last_ped_in_vehicle_seat(Vehicle vehicle, int seatIndex)l
extern _native64(0xB91B4C20085BD12F) bool get_vehicle_lights_state(Vehicle vehicle, bool* lightsOn, bool* highbeamsOn)l
extern _native64(0xBA291848A0815CA9) bool is_vehicle_tyre_burst(Vehicle vehicle, int wheelID, bool completely)l
extern _native64(0xAB54A438726D25D5) void set_vehicle_forward_speed(Vehicle vehicle, float speed)l
extern _native64(0x260BE8F09E326A20) void _set_vehicle_halt(Vehicle vehicle, float distance, int killEngine, bool unknown)l
extern _native64(0x37EBBF3117BD6A25) void unk_0x37EBBF3117BD6A25(Vehicle vehicle, float p1)l
extern _native64(0x57715966069157AD) bool set_ped_enabled_bike_ringtone(Vehicle vehicle, Entity entity)l
extern _native64(0x62CA17B74C435651) bool unk_0x62CA17B74C435651(Vehicle vehicle)l
extern _native64(0x375E7FC44F21C8AB) Vehicle _get_vehicle_attached_to_entity(Object object)l
extern _native64(0x89D630CF5EA96D23) bool unk_0x89D630CF5EA96D23(Vehicle vehicle, Entity entity)l
extern _native64(0x6A98C2ECF57FA5D4) void unk_0x6A98C2ECF57FA5D4(Vehicle vehicle, Entity entity)l
extern _native64(0x7C0043FDFF6436BC) void unk_0x7C0043FDFF6436BC(Vehicle vehicle)l
extern _native64(0x8AA9180DE2FEDD45) void unk_0x8AA9180DE2FEDD45(Vehicle vehicle, bool p1)l
extern _native64(0x0A6A279F3AA4FD70) void unk_0x0A6A279F3AA4FD70(Vehicle vehicle, bool p1)l
extern _native64(0x634148744F385576) bool unk_0x634148744F385576(Vehicle vehicle)l
extern _native64(0xE6F13851780394DA) void unk_0xE6F13851780394DA(Vehicle vehicle, float p1)l
extern _native64(0xEC6A202EE4960385) void set_vehicle_tyre_burst(Vehicle vehicle, int index, bool onRim, float p3)l
extern _native64(0x781B3D62BB013EF5) void set_vehicle_doors_shut(Vehicle vehicle, bool closeInstantly)l
extern _native64(0xEB9DC3C7D8596C46) void set_vehicle_tyres_can_burst(Vehicle vehicle, bool toggle)l
extern _native64(0x678B9BB8C3F58FEB) bool get_vehicle_tyres_can_burst(Vehicle vehicle)l
extern _native64(0x29B18B4FD460CA8F) any set_vehicle_wheels_can_break(Vehicle vehicle, bool enabled)l
extern _native64(0x7C65DAC73C35C862) void set_vehicle_door_open(Vehicle vehicle, int doorIndex, bool loose, bool openInstantly)l
extern _native64(0xA711568EEDB43069) void remove_vehicle_window(Vehicle vehicle, int windowIndex)l
extern _native64(0x85796B0549DDE156) void roll_down_windows(Vehicle vehicle)l
extern _native64(0x7AD9E6CE657D69E3) any roll_down_window(Vehicle vehicle, int windowIndex)l
extern _native64(0x602E548F46E24D59) any roll_up_window(Vehicle vehicle, int windowIndex)l
extern _native64(0x9E5B5E4D2CCD2259) any smash_vehicle_window(Vehicle vehicle, int index)l
extern _native64(0x772282EBEB95E682) any fix_vehicle_window(Vehicle vehicle, int index)l
extern _native64(0x6D645D59FB5F5AD3) void _detach_vehicle_windscreen(Vehicle vehicle)l
extern _native64(0xE38CB9D7D39FDBCC) void _eject_jb700_roof(Vehicle vehicle, vector3 vec)l
extern _native64(0x34E710FF01247C5A) void set_vehicle_lights(Vehicle vehicle, int state)l
extern _native64(0xC45C27EF50F36ADC) void unk_0xC45C27EF50F36ADC(Vehicle vehicle, bool p1)l
extern _native64(0x1FD09E7390A74D54) void _set_vehicle_lights_mode(Vehicle vehicle, int p1)l
extern _native64(0xCDE5E70C1DDB954C) void set_vehicle_alarm(Vehicle vehicle, bool state)l
extern _native64(0xB8FF7AB45305C345) any start_vehicle_alarm(Vehicle vehicle)l
extern _native64(0x4319E335B71FFF34) bool is_vehicle_alarm_activated(Vehicle vehicle)l
extern _native64(0xBC2042F090AF6AD3) void set_vehicle_interiorlight(Vehicle vehicle, bool toggle)l
extern _native64(0xB385454F8791F57C) void set_vehicle_light_multiplier(Vehicle vehicle, float multiplier)l
extern _native64(0x3C7D42D58F770B54) void attach_vehicle_to_trailer(Vehicle vehicle, Vehicle trailer, float radius)l
extern _native64(0x16B5E274BDE402F8) void unk_0x16B5E274BDE402F8(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11)l
extern _native64(0x374706271354CB18) void unk_0x374706271354CB18(Vehicle vehicle, Entity p1, float p2)l
extern _native64(0x90532EDF0D2BDD86) void detach_vehicle_from_trailer(Vehicle vehicle)l
extern _native64(0xE7CF3C4F9F489F0C) bool is_vehicle_attached_to_trailer(Vehicle vehicle)l
extern _native64(0x2A8F319B392E7B3F) void unk_0x2A8F319B392E7B3F(Vehicle vehicle, float p1)l
extern _native64(0x95CF53B3D687F9FA) void unk_0x95CF53B3D687F9FA(Vehicle vehicle)l
extern _native64(0x6E13FC662B882D1D) void set_vehicle_tyre_fixed(Vehicle vehicle, int tyreIndex)l
extern _native64(0x95A88F0B409CDA47) void set_vehicle_number_plate_text(Vehicle vehicle, const char* plateText)l
extern _native64(0x7CE1CCB9B293020E) const char* get_vehicle_number_plate_text(Vehicle vehicle)l
extern _native64(0x4C4D6B2644F458CB) int get_number_of_vehicle_number_plates()l
extern _native64(0x9088EB5A43FFB0A1) void set_vehicle_number_plate_text_index(Vehicle vehicle, int plateIndex)l
extern _native64(0xF11BC2DD9A3E7195) int get_vehicle_number_plate_text_index(Vehicle vehicle)l
extern _native64(0x80D9F74197EA47D9) void set_random_trains(bool toggle)l
extern _native64(0x63C6CCA8E68AE8C8) Vehicle create_mission_train(int variation, vector3 vec, bool direction)l
extern _native64(0xFD813BB7DB977F20) any switch_train_track(int intersectionId, bool state)l
extern _native64(0x21973BBF8D17EDFA) void unk_0x21973BBF8D17EDFA(any p0, any p1)l
extern _native64(0x736A718577F39C7D) void delete_all_trains()l
extern _native64(0xAA0BC91BE0B796E3) any set_train_speed(Vehicle train, float speed)l
extern _native64(0x16469284DB8C62B5) any set_train_cruise_speed(Vehicle train, float speed)l
extern _native64(0x84436EC293B1415F) any set_random_boats(bool toggle)l
extern _native64(0x2AFD795EEAC8D30D) any set_garbage_trucks(bool toggle)l
extern _native64(0x57E4C39DE5EE8470) bool does_vehicle_have_stuck_vehicle_check(Vehicle vehicle)l
extern _native64(0x21543C612379DB3C) any get_vehicle_recording_id(int p0, const char* p1)l
extern _native64(0xAF514CABE74CBF15) void request_vehicle_recording(any p0, any* p1)l
extern _native64(0x300D614A4C785FC4) bool has_vehicle_recording_been_loaded(any p0, any* p1)l
extern _native64(0xF1160ACCF98A3FC8) void remove_vehicle_recording(any p0, any* p1)l
extern _native64(0x92523B76657A517D) int unk_0x92523B76657A517D(any p0, float p1)l
extern _native64(0xD242728AA6F0FBA2) vector3 get_position_of_vehicle_recording_at_time(int p0, float p1, const char* p2)l
extern _native64(0xF0F2103EFAF8CBA7) vector3 unk_0xF0F2103EFAF8CBA7(any p0, float p1)l
extern _native64(0x2058206FBE79A8AD) int get_rotation_of_vehicle_recording_at_time(any p0, float p1, any* p2)l
extern _native64(0x102D125411A7B6E6) float get_total_duration_of_vehicle_recording_id(any p0)l
extern _native64(0x0E48D1C262390950) any get_total_duration_of_vehicle_recording(any p0, any p1)l
extern _native64(0x2DACD605FC681475) float get_position_in_recording(any p0)l
extern _native64(0x5746F3A7AB7FE544) float get_time_position_in_recording(any p0)l
extern _native64(0x3F878F92B3A7A071) void start_playback_recorded_vehicle(Vehicle vehicle, int p1, const char* playback, bool p3)l
extern _native64(0x7D80FD645D4DA346) void start_playback_recorded_vehicle_with_flags(Vehicle vehicle, any p1, const char* playback, any p3, any p4, any p5)l
extern _native64(0x1F2E4E06DEA8992B) void unk_0x1F2E4E06DEA8992B(any p0, bool p1)l
extern _native64(0x54833611C17ABDEA) void stop_playback_recorded_vehicle(any p0)l
extern _native64(0x632A689BF42301B1) void pause_playback_recorded_vehicle(any p0)l
extern _native64(0x8879EE09268305D5) void unpause_playback_recorded_vehicle(any p0)l
extern _native64(0x1C8A4C2C19E68EEC) bool is_playback_going_on_for_vehicle(any p0)l
extern _native64(0xAEA8FD591FAD4106) bool is_playback_using_ai_going_on_for_vehicle(any p0)l
extern _native64(0x42BC05C27A946054) any get_current_playback_for_vehicle(any p0)l
extern _native64(0xAB8E2EDA0C0A5883) void skip_to_end_and_stop_playback_recorded_vehicle(any p0)l
extern _native64(0x6683AB880E427778) any set_playback_speed(any p0, float speed)l
extern _native64(0x29DE5FA52D00428C) void start_playback_recorded_vehicle_using_ai(any p0, any p1, any* p2, float p3, any p4)l
extern _native64(0x9438F7AD68771A20) void skip_time_in_playback_recorded_vehicle(any p0, float p1)l
extern _native64(0xA549C3B37EA28131) void set_playback_to_use_ai(Vehicle vehicle, int flag)l
extern _native64(0x6E63860BBB190730) void set_playback_to_use_ai_try_to_revert_back_later(any p0, any p1, any p2, bool p3)l
extern _native64(0x5845066D8A1EA7F7) void unk_0x5845066D8A1EA7F7(Vehicle vehicle, vector3 vec, any p4)l
extern _native64(0x796A877E459B99EA) void unk_0x796A877E459B99EA(any p0, float p1, float p2, float p3)l
extern _native64(0xFAF2A78061FD9EF4) void unk_0xFAF2A78061FD9EF4(any p0, float p1, float p2, float p3)l
extern _native64(0x063AE2B2CC273588) void unk_0x063AE2B2CC273588(any p0, bool p1)l
extern _native64(0x786A4EB67B01BF0B) void explode_vehicle_in_cutscene(Vehicle vehicle, bool p1)l
extern _native64(0x2FA9923062DD396C) void add_vehicle_stuck_check_with_warp(any p0, float p1, any p2, bool p3, bool p4, bool p5, any p6)l
extern _native64(0x0FC2D89AC25A5814) void set_vehicle_model_is_suppressed(Hash model, bool suppressed)l
extern _native64(0x386F6CE5BAF6091C) Vehicle get_random_vehicle_in_sphere(vector3 vec, float radius, Hash modelHash, int flags)l
extern _native64(0xC5574E0AEB86BA68) Vehicle get_random_vehicle_front_bumper_in_sphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6)l
extern _native64(0xB50807EABE20A8DC) Vehicle get_random_vehicle_back_bumper_in_sphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6)l
extern _native64(0xF73EB622C4F1689B) Vehicle get_closest_vehicle(vector3 vec, float radius, Hash modelHash, int flags)l
extern _native64(0x08AAFD0814722BC3) Entity get_train_carriage(Vehicle train, int trailerNumber)l
extern _native64(0x5B76B14AE875C795) void delete_mission_train(Vehicle* train)l
extern _native64(0xBBE7648349B49BE8) void set_mission_train_as_no_longer_needed(Vehicle* train, bool p1)l
extern _native64(0x591CA673AA6AB736) void set_mission_train_coords(Vehicle train, vector3 vec)l
extern _native64(0x45A9187928F4B9E3) bool is_this_model_a_boat(Hash model)l
extern _native64(0x9537097412CF75FE) bool _is_this_model_an_emergency_boat(Hash model)l
extern _native64(0xA0948AB42D7BA0DE) bool is_this_model_a_plane(Hash model)l
extern _native64(0xDCE4334788AF94EA) bool is_this_model_a_heli(Hash model)l
extern _native64(0x7F6DB52EEFC96DF8) bool is_this_model_a_car(Hash model)l
extern _native64(0xAB935175B22E822B) bool is_this_model_a_train(Hash model)l
extern _native64(0xB50C0B0CEDC6CE84) bool is_this_model_a_bike(Hash model)l
extern _native64(0xBF94DD42F63BDED2) bool is_this_model_a_bicycle(Hash model)l
extern _native64(0x39DAC362EE65FA28) bool is_this_model_a_quadbike(Hash model)l
extern _native64(0xA178472EBB8AE60D) void set_heli_blades_full_speed(Vehicle vehicle)l
extern _native64(0xFD280B4D7F3ABC4D) void set_heli_blades_speed(Vehicle vehicle, float speed)l
extern _native64(0x99CAD8E7AFDB60FA) void unk_0x99CAD8E7AFDB60FA(Vehicle vehicle, float p1, float p2)l
extern _native64(0x3750146A28097A82) void set_vehicle_can_be_targetted(Vehicle vehicle, bool state)l
extern _native64(0xDBC631F109350B8C) void unk_0xDBC631F109350B8C(Vehicle vehicle, bool p1)l
extern _native64(0x4C7028F78FFD3681) void set_vehicle_can_be_visibly_damaged(Vehicle vehicle, bool state)l
extern _native64(0x1AA8A837D2169D94) void unk_0x1AA8A837D2169D94(Vehicle vehicle, bool p1)l
extern _native64(0x2311DD7159F00582) void unk_0x2311DD7159F00582(Vehicle vehicle, bool p1)l
extern _native64(0x8F17BC8BA08DA62B) float get_vehicle_dirt_level(Vehicle vehicle)l
extern _native64(0x79D3B596FE44EE8B) void set_vehicle_dirt_level(Vehicle vehicle, float dirtLevel)l
extern _native64(0xBCDC5017D3CE1E9E) bool _is_vehicle_damaged(Vehicle vehicle)l
extern _native64(0x3E933CFF7B111C22) bool is_vehicle_door_fully_open(Vehicle vehicle, int doorIndex)l
extern _native64(0x2497C4717C8B881E) void set_vehicle_engine_on(Vehicle vehicle, bool value, bool instantly, bool otherwise)l
extern _native64(0x8ABA6AF54B942B95) void set_vehicle_undriveable(Vehicle vehicle, bool toggle)l
extern _native64(0x5AFEEDD9BB2899D7) void set_vehicle_provides_cover(Vehicle vehicle, bool toggle)l
extern _native64(0xF2BFA0430F0A0FCB) void set_vehicle_door_control(Vehicle vehicle, int doorIndex, int speed, float angle)l
extern _native64(0xA5A9653A8D2CAF48) void set_vehicle_door_latched(Vehicle vehicle, int doorIndex, bool p2, bool p3, bool p4)l
extern _native64(0xFE3F9C29F7B32BD5) float get_vehicle_door_angle_ratio(Vehicle vehicle, int door)l
extern _native64(0x218297BF0CFD853B) Ped _get_ped_using_vehicle_door(Vehicle vehicle, int doorIndex)l
extern _native64(0x93D9BD300D7789E5) void set_vehicle_door_shut(Vehicle vehicle, int doorIndex, bool closeInstantly)l
extern _native64(0xD4D4F6A4AB575A33) void set_vehicle_door_broken(Vehicle vehicle, int doorIndex, bool deleteDoor)l
extern _native64(0x59BF8C3D52C92F66) void set_vehicle_can_break(Vehicle vehicle, bool toggle)l
extern _native64(0x8AC862B0B32C5B80) bool does_vehicle_have_roof(Vehicle vehicle)l
extern _native64(0x9F243D3919F442FE) bool is_big_vehicle(Vehicle vehicle)l
extern _native64(0x3B963160CD65D41E) int get_number_of_vehicle_colours(Vehicle vehicle)l
extern _native64(0x33E8CD3322E2FE31) void set_vehicle_colour_combination(Vehicle vehicle, int colorCombination)l
extern _native64(0x6A842D197F845D56) int get_vehicle_colour_combination(Vehicle vehicle)l
extern _native64(0x31B927BBC44156CD) void set_vehicle_is_considered_by_player(Vehicle vehicle, bool toggle)l
extern _native64(0xBE5C1255A1830FF5) void unk_0xBE5C1255A1830FF5(Vehicle vehicle, bool toggle)l
extern _native64(0x9BECD4B9FEF3F8A6) void unk_0x9BECD4B9FEF3F8A6(Vehicle vehicle, bool p1)l
extern _native64(0x88BC673CA9E0AE99) void unk_0x88BC673CA9E0AE99(Vehicle vehicle, bool p1)l
extern _native64(0xE851E480B814D4BA) void unk_0xE851E480B814D4BA(Vehicle vehicle, bool p1)l
extern _native64(0x055BF0AC0C34F4FD) void get_random_vehicle_model_in_memory(bool p0, Hash* modelHash, int* p2)l
extern _native64(0x25BC98A59C2EA962) int get_vehicle_door_lock_status(Vehicle vehicle)l
extern _native64(0xB8E181E559464527) bool is_vehicle_door_damaged(Vehicle veh, int doorID)l
extern _native64(0x2FA133A4A9D37ED8) void _set_vehicle_door_can_break(Vehicle vehicle, int doorIndex, bool isBreakable)l
extern _native64(0x27B926779DEB502D) bool unk_0x27B926779DEB502D(Vehicle vehicle, bool p1)l
extern _native64(0x468056A6BB6F3846) bool is_vehicle_bumper_broken_off(Vehicle vehicle, bool front)l
extern _native64(0x7EEF65D5F153E26A) bool is_cop_vehicle_in_area_3d(float x1, float x2, float y1, float y2, float z1, float z2)l
extern _native64(0xB104CD1BABF302E2) bool is_vehicle_on_all_wheels(Vehicle vehicle)l
extern _native64(0x28D37D4F71AC5C58) Hash get_vehicle_layout_hash(Vehicle vehicle)l
extern _native64(0xA01BC64DD4BFBBAC) any unk_0xA01BC64DD4BFBBAC(Vehicle vehicle, int p1)l
extern _native64(0x317B11A312DF5534) void set_render_train_as_derailed(Vehicle train, bool toggle)l
extern _native64(0x2036F561ADD12E33) void set_vehicle_extra_colours(Vehicle vehicle, int pearlescentColor, int wheelColor)l
extern _native64(0x3BC4245933A166F7) void get_vehicle_extra_colours(Vehicle vehicle, int* pearlescentColor, int* wheelColor)l
extern _native64(0x0F87E938BDF29D66) void stop_all_garage_activity()l
extern _native64(0x115722B1B9C14C1C) void set_vehicle_fixed(Vehicle vehicle)l
extern _native64(0x953DA1E1B12C0491) void set_vehicle_deformation_fixed(Vehicle vehicle)l
extern _native64(0x206BC5DC9D1AC70A) void unk_0x206BC5DC9D1AC70A(Vehicle vehicle, bool p1)l
extern _native64(0x51BB2D88D31A914B) void unk_0x51BB2D88D31A914B(Vehicle vehicle, bool p1)l
extern _native64(0x192547247864DFDD) void unk_0x192547247864DFDD(Vehicle vehicle, bool p1)l
extern _native64(0x465BF26AB9684352) void set_disable_vehicle_petrol_tank_fires(Vehicle vehicle, bool toggle)l
extern _native64(0x37C8252A7C92D017) void set_disable_vehicle_petrol_tank_damage(Vehicle vehicle, bool toggle)l
extern _native64(0x91A0BD635321F145) void unk_0x91A0BD635321F145(Vehicle vehicle, bool p1)l
extern _native64(0xC50CE861B55EAB8B) void unk_0xC50CE861B55EAB8B(Vehicle vehicle, bool p1)l
extern _native64(0x6EBFB22D646FFC18) void unk_0x6EBFB22D646FFC18(Vehicle vehicle, bool p1)l
extern _native64(0x25367DE49D64CF16) void unk_0x25367DE49D64CF16(Vehicle vehicle, bool p1)l
extern _native64(0x46A1E1A299EC4BBA) void remove_vehicles_from_generators_in_area(vector3 vec_1, vector3 vec_2, any unk)l
extern _native64(0x42A8EC77D5150CBE) void set_vehicle_steer_bias(Vehicle vehicle, float value)l
extern _native64(0xD2E6822DBFD6C8BD) bool is_vehicle_extra_turned_on(Vehicle vehicle, int extraId)l
extern _native64(0x7EE3A3C5E4A40CC9) void set_vehicle_extra(Vehicle vehicle, int extraId, bool toggle)l
extern _native64(0x1262D55792428154) bool does_extra_exist(Vehicle vehicle, int extraId)l
extern _native64(0xF39C4F538B5124C2) void set_convertible_roof(Vehicle vehicle, bool p1)l
extern _native64(0xDED51F703D0FA83D) void lower_convertible_roof(Vehicle vehicle, bool instantlyLower)l
extern _native64(0x8F5FB35D7E88FC70) void raise_convertible_roof(Vehicle vehicle, bool instantlyRaise)l
extern _native64(0xF8C397922FC03F41) int get_convertible_roof_state(Vehicle vehicle)l
extern _native64(0x52F357A30698BCCE) bool is_vehicle_a_convertible(Vehicle vehicle, bool p1)l
extern _native64(0x2959F696AE390A99) bool is_vehicle_stopped_at_traffic_lights(Vehicle vehicle)l
extern _native64(0xA1DD317EA8FD4F29) void set_vehicle_damage(Vehicle vehicle, vector3 Offset, float damage, float radius, bool p6)l
extern _native64(0xC45D23BAF168AAB8) float get_vehicle_engine_health(Vehicle vehicle)l
extern _native64(0x45F6D8EEF34ABEF1) void set_vehicle_engine_health(Vehicle vehicle, float health)l
extern _native64(0x7D5DABE888D2D074) float get_vehicle_petrol_tank_health(Vehicle vehicle)l
extern _native64(0x70DB57649FA8D0D8) void set_vehicle_petrol_tank_health(Vehicle vehicle, float health)l
extern _native64(0x679BE1DAF71DA874) bool is_vehicle_stuck_timer_up(Vehicle vehicle, int p1, int p2)l
extern _native64(0xD7591B0065AFAA7A) void reset_vehicle_stuck_timer(Vehicle vehicle, bool nullAttributes)l
extern _native64(0x4C241E39B23DF959) bool is_vehicle_driveable(Vehicle vehicle, bool p1)l
extern _native64(0x2B5F9D2AF1F1722D) void set_vehicle_has_been_owned_by_player(Vehicle vehicle, bool owned)l
extern _native64(0xFBA550EA44404EE6) void set_vehicle_needs_to_be_hotwired(Vehicle vehicle, bool toggle)l
extern _native64(0x9F3F689B814F2599) void unk_0x9F3F689B814F2599(Vehicle vehicle, bool p1)l
extern _native64(0x4E74E62E0A97E901) void unk_0x4E74E62E0A97E901(Vehicle vehicle, bool p1)l
extern _native64(0x9C8C6504B5B63D2C) void start_vehicle_horn(Vehicle vehicle, int duration, Hash mode, bool forever)l
extern _native64(0x9D44FCCE98450843) void _set_vehicle_silent(Vehicle vehicle, bool toggle)l
extern _native64(0x92F0CF722BC4202F) void set_vehicle_has_strong_axles(Vehicle vehicle, bool toggle)l
extern _native64(0xB215AAC32D25D019) const char* get_display_name_from_vehicle_model(Hash modelHash)l
extern _native64(0x4EC6CFBC7B2E9536) vector3 get_vehicle_deformation_at_pos(Vehicle vehicle, vector3 offset)l
extern _native64(0x60BF608F1B8CD1B6) void set_vehicle_livery(Vehicle vehicle, int livery)l
extern _native64(0x2BB9230590DA5E8A) int get_vehicle_livery(Vehicle vehicle)l
extern _native64(0x87B63E25A529D526) int get_vehicle_livery_count(Vehicle vehicle)l
extern _native64(0x46E571A0E20D01F1) bool is_vehicle_window_intact(Vehicle vehicle, int windowIndex)l
extern _native64(0x11D862A3E977A9EF) bool are_all_vehicle_windows_intact(Vehicle vehicle)l
extern _native64(0x2D34FC3BC4ADB780) bool are_any_vehicle_seats_free(Vehicle vehicle)l
extern _native64(0x21D2E5662C1F6FED) void reset_vehicle_wheels(Vehicle vehicle, bool toggle)l
extern _native64(0xBC74B4BE25EB6C8A) bool is_heli_part_broken(Vehicle vehicle, bool p1, bool p2, bool p3)l
extern _native64(0xE4CB7541F413D2C5) float _get_heli_main_rotor_health(Vehicle vehicle)l
extern _native64(0xAE8CE82A4219AC8C) float _get_heli_tail_rotor_health(Vehicle vehicle)l
extern _native64(0xAC51915D27E4A5F7) float _get_heli_engine_health(Vehicle vehicle)l
extern _native64(0x3EC8BF18AA453FE9) bool was_counter_activated(Vehicle vehicle, any p1)l
extern _native64(0xBFDF984E2C22B94F) void set_vehicle_name_debug(Vehicle vehicle, const char* name)l
extern _native64(0x71B0892EC081D60A) void set_vehicle_explodes_on_high_explosion_damage(Vehicle vehicle, bool toggle)l
extern _native64(0x3441CAD2F2231923) void unk_0x3441CAD2F2231923(Vehicle vehicle, bool p1)l
extern _native64(0x2B6747FAA9DB9D6B) any unk_0x2B6747FAA9DB9D6B(Vehicle vehicle, bool p1)l
extern _native64(0xCFC8BE9A5E1FE575) void control_landing_gear(Vehicle vehicle, int state)l
extern _native64(0x9B0F3DCA3DB0F4CD) int get_landing_gear_state(Vehicle vehicle)l
extern _native64(0x61E1DD6125A3EEE6) bool is_any_vehicle_near_point(vector3 vec, float radius)l
extern _native64(0xA6E9FDCB2C76785E) void request_vehicle_high_detail_model(Vehicle vehicle)l
extern _native64(0x00689CDE5F7C6787) void remove_vehicle_high_detail_model(Vehicle vehicle)l
extern _native64(0x1F25887F3C104278) bool is_vehicle_high_detail(Vehicle vehicle)l
extern _native64(0x81A15811460FAB3A) void request_vehicle_asset(Hash vehicleHash, int vehicleAsset)l
extern _native64(0x1BBE0523B8DB9A21) bool has_vehicle_asset_loaded(int vehicleAsset)l
extern _native64(0xACE699C71AB9DEB5) void remove_vehicle_asset(int vehicleAsset)l
extern _native64(0xFE54B92A344583CA) void _set_tow_truck_crane_height(Vehicle towTruck, float height)l
extern _native64(0x29A16F8D621C4508) void attach_vehicle_to_tow_truck(Vehicle towTruck, Vehicle vehicle, bool rear, vector3 hookOffset)l
extern _native64(0xC2DB6B6708350ED8) void detach_vehicle_from_tow_truck(Vehicle towTruck, Vehicle vehicle)l
extern _native64(0xD0E9CE05A1E68CD8) bool detach_vehicle_from_any_tow_truck(Vehicle vehicle)l
extern _native64(0x146DF9EC4C4B9FD4) bool is_vehicle_attached_to_tow_truck(Vehicle towTruck, Vehicle vehicle)l
extern _native64(0xEFEA18DCF10F8F75) Entity get_entity_attached_to_tow_truck(Vehicle towTruck)l
extern _native64(0x8BA6F76BC53A1493) any set_vehicle_automatically_attaches(Vehicle vehicle, any p1, any p2)l
extern _native64(0xF8EBCCC96ADB9FB7) void unk_0xF8EBCCC96ADB9FB7(any p0, float p1, bool p2)l
extern _native64(0x56B94C6D7127DFBA) void unk_0x56B94C6D7127DFBA(any p0, float p1, bool p2)l
extern _native64(0x1093408B4B9D1146) void unk_0x1093408B4B9D1146(any p0, float p1)l
extern _native64(0x30D779DE7C4F6DD3) void unk_0x30D779DE7C4F6DD3(any p0, float p1)l
extern _native64(0x9AA47FFF660CB932) void unk_0x9AA47FFF660CB932(any p0, float p1)l
extern _native64(0xA4822F1CF23F4810) bool unk_0xA4822F1CF23F4810(vector3* outVec, any p1, vector3* outVec1, any p3, any p4, any p5, any p6, any p7, any p8)l
extern _native64(0xFB8794444A7D60FB) void set_vehicle_burnout(Vehicle vehicle, bool toggle)l
extern _native64(0x1297A88E081430EB) bool is_vehicle_in_burnout(Vehicle vehicle)l
extern _native64(0x222FF6A823D122E2) void set_vehicle_reduce_grip(Vehicle vehicle, bool toggle)l
extern _native64(0xB5D45264751B7DF0) void set_vehicle_indicator_lights(Vehicle vehicle, int turnSignal, bool toggle)l
extern _native64(0x92B35082E0B42F66) void set_vehicle_brake_lights(Vehicle vehicle, bool toggle)l
extern _native64(0x684785568EF26A22) void set_vehicle_handbrake(Vehicle vehicle, bool toggle)l
extern _native64(0x48ADC8A773564670) void unk_0x48ADC8A773564670()l
extern _native64(0x91D6DD290888CBAB) bool unk_0x91D6DD290888CBAB()l
extern _native64(0x51DB102F4A3BA5E0) void unk_0x51DB102F4A3BA5E0(bool p0)l
extern _native64(0x1CDD6BADC297830D) bool get_vehicle_trailer_vehicle(Vehicle vehicle, Vehicle* trailer)l
extern _native64(0xCAC66558B944DA67) void unk_0xCAC66558B944DA67(Vehicle vehicle, bool p1)l
extern _native64(0x09606148B6C71DEF) void set_vehicle_rudder_broken(Vehicle vehicle, bool p1)l
extern _native64(0x1A78AD3D8240536F) void unk_0x1A78AD3D8240536F(Vehicle vehicle, bool p1)l
extern _native64(0x53AF99BAA671CA47) float unk_0x53AF99BAA671CA47(Vehicle vehicle)l
extern _native64(0xAD7E85FC227197C4) float get_vehicle_max_braking(Vehicle vehicle)l
extern _native64(0xA132FB5370554DB0) float get_vehicle_max_traction(Vehicle vehicle)l
extern _native64(0x5DD35C8D074E57AE) float get_vehicle_acceleration(Vehicle vehicle)l
extern _native64(0xF417C2502FFFED43) float _get_vehicle_model_max_speed(Hash modelHash)l
extern _native64(0xDC53FD41B4ED944C) float get_vehicle_model_max_braking(Hash modelHash)l
extern _native64(0xBFBA3BA79CFF7EBF) float unk_0xBFBA3BA79CFF7EBF(Hash modelHash)l
extern _native64(0x539DE94D44FDFD0D) float get_vehicle_model_max_traction(Hash modelHash)l
extern _native64(0x8C044C5C84505B6A) float get_vehicle_model_acceleration(Hash modelHash)l
extern _native64(0x53409B5163D5B846) float unk_0x53409B5163D5B846(Hash modelHash)l
extern _native64(0xC6AD107DDC9054CC) float unk_0xC6AD107DDC9054CC(Hash modelHash)l
extern _native64(0x5AA3F878A178C4FC) float unk_0x5AA3F878A178C4FC(Hash modelHash)l
extern _native64(0x00C09F246ABEDD82) float unk_0x00C09F246ABEDD82(int vehicleClass)l
extern _native64(0xDBC86D85C5059461) float get_vehicle_class_max_traction(int vehicleClass)l
extern _native64(0x4F930AD022D6DE3B) float get_vehicle_class_max_agility(int vehicleClass)l
extern _native64(0x2F83E7E45D9EA7AE) float get_vehicle_class_max_acceleration(int vehicleClass)l
extern _native64(0x4BF54C16EC8FEC03) float get_vehicle_class_max_braking(int vehicleClass)l
extern _native64(0x2CE544C68FB812A0) any unk_0x2CE544C68FB812A0(float p0, float p1, float p2, float p3, float p4, bool p5)l
extern _native64(0x1033371FC8E842A7) bool unk_0x1033371FC8E842A7(any p0)l
extern _native64(0x87E7F24270732CB1) void open_bomb_bay_doors(Vehicle vehicle)l
extern _native64(0x3556041742A0DC74) void close_bomb_bay_doors(Vehicle vehicle)l
extern _native64(0xC0F97FCE55094987) bool is_vehicle_searchlight_on(Vehicle vehicle)l
extern _native64(0x14E85C5EE7A4D542) void set_vehicle_searchlight(Vehicle heli, bool toggle, bool canBeUsedByAI)l
extern _native64(0x639431E895B9AA57) bool unk_0x639431E895B9AA57(Ped ped, Vehicle vehicle, bool p2, bool p3, bool p4)l
extern _native64(0x30785D90C956BF35) bool can_shuffle_seat(Vehicle vehicle, any p1)l
extern _native64(0x33F2E3FE70EAAE1D) int get_num_mod_kits(Vehicle vehicle)l
extern _native64(0x1F2AA07F00B3217A) void set_vehicle_mod_kit(Vehicle vehicle, int modKit)l
extern _native64(0x6325D1A044AE510D) int get_vehicle_mod_kit(Vehicle vehicle)l
extern _native64(0xFC058F5121E54C32) int get_vehicle_mod_kit_type(Vehicle vehicle)l
extern _native64(0xB3ED1BFB4BE636DC) int get_vehicle_wheel_type(Vehicle vehicle)l
extern _native64(0x487EB21CC7295BA1) void set_vehicle_wheel_type(Vehicle vehicle, int WheelType)l
extern _native64(0xA551BE18C11A476D) int get_num_mod_colors(int p0, bool p1)l
extern _native64(0x43FEB945EE7F85B8) void set_vehicle_mod_color_1(Vehicle vehicle, int paintType, int color, int p3)l
extern _native64(0x816562BADFDEC83E) void set_vehicle_mod_color_2(Vehicle vehicle, int paintType, int color)l
extern _native64(0xE8D65CA700C9A693) void get_vehicle_mod_color_1(Vehicle vehicle, int* paintType, int* color, int* p3)l
extern _native64(0x81592BE4E3878728) void get_vehicle_mod_color_2(Vehicle vehicle, int* paintType, int* color)l
extern _native64(0xB45085B721EFD38C) const char* get_vehicle_mod_color_1_name(Vehicle vehicle, bool p1)l
extern _native64(0x4967A516ED23A5A1) const char* get_vehicle_mod_color_2_name(Vehicle vehicle)l
extern _native64(0x9A83F5F9963775EF) bool unk_0x9A83F5F9963775EF(Vehicle vehicle)l
extern _native64(0x6AF0636DDEDCB6DD) void set_vehicle_mod(Vehicle vehicle, int modType, int modIndex, bool customTires)l
extern _native64(0x772960298DA26FDB) int get_vehicle_mod(Vehicle vehicle, int modType)l
extern _native64(0xB3924ECD70E095DC) bool get_vehicle_mod_variation(Vehicle vehicle, int modType)l
extern _native64(0xE38E9162A2500646) int get_num_vehicle_mods(Vehicle vehicle, int modType)l
extern _native64(0x92D619E420858204) void remove_vehicle_mod(Vehicle vehicle, int modType)l
extern _native64(0x2A1F4F37F95BAD08) void toggle_vehicle_mod(Vehicle vehicle, int modType, bool toggle)l
extern _native64(0x84B233A8C8FC8AE7) bool is_toggle_mod_on(Vehicle vehicle, int modType)l
extern _native64(0x8935624F8C5592CC) const char* get_mod_text_label(Vehicle vehicle, int modType, int modValue)l
extern _native64(0x51F0FEB9F6AE98C0) const char* get_mod_slot_name(Vehicle vehicle, int modType)l
extern _native64(0xB4C7A93837C91A1F) const char* get_livery_name(Vehicle vehicle, int liveryIndex)l
extern _native64(0x90A38E9838E0A8C1) any get_vehicle_mod_modifier_value(Vehicle vehicle, int modType, int modIndex)l
extern _native64(0x4593CF82AA179706) any _get_vehicle_mod_data(Vehicle vehicle, int modType, int modIndex)l
extern _native64(0x758F49C24925568A) void preload_vehicle_mod(any p0, any p1, any p2)l
extern _native64(0x06F43E5175EB6D96) bool has_preload_mods_finished(any p0)l
extern _native64(0x445D79F995508307) void release_preload_mods(Vehicle vehicle)l
extern _native64(0xB5BA80F839791C0F) void set_vehicle_tyre_smoke_color(Vehicle vehicle, RGB colour)l
extern _native64(0xB635392A4938B3C3) void get_vehicle_tyre_smoke_color(Vehicle vehicle, int* r, int* g, int* b)l
extern _native64(0x57C51E6BAD752696) void set_vehicle_window_tint(Vehicle vehicle, int tint)l
extern _native64(0x0EE21293DAD47C95) int get_vehicle_window_tint(Vehicle vehicle)l
extern _native64(0x9D1224004B3A6707) int get_num_vehicle_window_tints()l
extern _native64(0xF3CC740D36221548) void get_vehicle_color(Vehicle vehicle, int* r, int* g, int* b)l
extern _native64(0xEEBFC7A7EFDC35B4) int unk_0xEEBFC7A7EFDC35B4(Vehicle vehicle)l
extern _native64(0xE495D1EF4C91FD20) Hash get_vehicle_cause_of_destruction(Vehicle vehicle)l
extern _native64(0x5EF77C9ADD3B11A3) bool get_is_left_vehicle_headlight_damaged(Vehicle vehicle)l
extern _native64(0xA7ECB73355EB2F20) bool get_is_right_vehicle_headlight_damaged(Vehicle vehicle)l
extern _native64(0x93A3996368C94158) void _set_vehicle_engine_power_multiplier(Vehicle vehicle, float value)l
extern _native64(0x1CF38D529D7441D9) void unk_0x1CF38D529D7441D9(Vehicle vehicle, bool toggle)l
extern _native64(0x1F9FB66F3A3842D2) void unk_0x1F9FB66F3A3842D2(Vehicle vehicle, bool p1)l
extern _native64(0x54B0F614960F4A5F) any unk_0x54B0F614960F4A5F(float p0, float p1, float p2, float p3, float p4, float p5, float p6)l
extern _native64(0xE30524E1871F481D) void unk_0xE30524E1871F481D(any p0)l
extern _native64(0x291E373D483E7EE7) bool _any_passengers_rappeling(Vehicle vehicle)l
extern _native64(0xB59E4BD37AE292DB) void _set_vehicle_engine_torque_multiplier(Vehicle vehicle, float value)l
extern _native64(0x0AD9E8F87FF7C16F) void unk_0x0AD9E8F87FF7C16F(any p0, bool p1)l
extern _native64(0xF7EC25A3EBEEC726) void set_vehicle_is_wanted(Vehicle vehicle, bool state)l
extern _native64(0xF488C566413B4232) void unk_0xF488C566413B4232(any p0, float p1)l
extern _native64(0xC1F981A6F74F0C23) void unk_0xC1F981A6F74F0C23(any p0, bool p1)l
extern _native64(0x0F3B4D4E43177236) void unk_0x0F3B4D4E43177236(any p0, bool p1)l
extern _native64(0x6636C535F6CC2725) float unk_0x6636C535F6CC2725(Vehicle vehicle)l
extern _native64(0x23428FC53C60919C) void disable_plane_aileron(Vehicle vehicle, bool p1, bool p2)l
extern _native64(0xAE31E7DF9B5B132E) bool get_is_vehicle_engine_running(Vehicle vehicle)l
extern _native64(0x1D97D1E3A70A649F) void unk_0x1D97D1E3A70A649F(Vehicle vehicle, bool p1)l
extern _native64(0x9CFA4896C3A53CBB) void _set_bike_lean_angle(Vehicle vehicle, vector2 vector)l
extern _native64(0xAB04325045427AAE) void unk_0xAB04325045427AAE(Vehicle vehicle, bool p1)l
extern _native64(0xCFD778E7904C255E) void unk_0xCFD778E7904C255E(Vehicle vehicle)l
extern _native64(0xACFB2463CC22BED2) void set_last_driven_vehicle(Vehicle vehicle)l
extern _native64(0xB2D06FAEDE65B577) Vehicle get_last_driven_vehicle()l
extern _native64(0xE01903C47C7AC89E) void unk_0xE01903C47C7AC89E()l
extern _native64(0x02398B627547189C) void unk_0x02398B627547189C(any p0, bool p1)l
extern _native64(0xB893215D8D4C015B) void _set_plane_min_height_above_ground(Vehicle plane, int height)l
extern _native64(0x93AE6A61BE015BF1) void set_vehicle_lod_multiplier(Vehicle vehicle, float multiplier)l
extern _native64(0x428BACCDF5E26EAD) void unk_0x428BACCDF5E26EAD(Vehicle vehicle, bool p1)l
extern _native64(0x42A4BEB35D372407) any unk_0x42A4BEB35D372407(any p0)l
extern _native64(0x2C8CBFE1EA5FC631) any unk_0x2C8CBFE1EA5FC631(any p0)l
extern _native64(0x4D9D109F63FEE1D4) void unk_0x4D9D109F63FEE1D4(any p0, bool p1)l
extern _native64(0x279D50DE5652D935) void unk_0x279D50DE5652D935(any p0, bool p1)l
extern _native64(0xE44A982368A4AF23) void unk_0xE44A982368A4AF23(Vehicle vehicle, Vehicle vehicle2)l
extern _native64(0xF25E02CB9C5818F8) void unk_0xF25E02CB9C5818F8()l
extern _native64(0xBC3CCA5844452B06) void unk_0xBC3CCA5844452B06(float p0)l
extern _native64(0x74CD9A9327A282EA) void set_vehicle_shoot_at_target(Ped driver, Entity entity, vector3 Target)l
extern _native64(0x8F5EBAB1F260CFCE) bool _get_vehicle_owner(Vehicle vehicle, Entity* entity)l
extern _native64(0x97CE68CB032583F0) void set_force_hd_vehicle(Vehicle vehicle, bool toggle)l
extern _native64(0x182F266C2D9E2BEB) void unk_0x182F266C2D9E2BEB(Vehicle vehicle, float p1)l
extern _native64(0x9CCC9525BF2408E0) int get_vehicle_plate_type(Vehicle vehicle)l
extern _native64(0x64473AEFDCF47DCA) void track_vehicle_visibility(Vehicle vehicle)l
extern _native64(0xAA0A52D24FB98293) bool is_vehicle_visible(Vehicle vehicle)l
extern _native64(0x89F149B6131E57DA) void set_vehicle_gravity(Vehicle vehicle, bool toggle)l
extern _native64(0xE6C0C80B8C867537) void unk_0xE6C0C80B8C867537(bool p0)l
extern _native64(0x36492C2F0D134C56) any unk_0x36492C2F0D134C56(any p0)l
extern _native64(0x06582AFF74894C75) void unk_0x06582AFF74894C75(any p0, bool p1)l
extern _native64(0xDFFCEF48E511DB48) void unk_0xDFFCEF48E511DB48(any p0, bool p1)l
extern _native64(0x8D474C8FAEFF6CDE) bool _is_vehicle_shop_respray_allowed(Vehicle vehicle)l
extern _native64(0x983765856F2564F9) void set_vehicle_engine_can_degrade(Vehicle vehicle, bool toggle)l
extern _native64(0xF0E4BA16D1DB546C) void unk_0xF0E4BA16D1DB546C(Vehicle vehicle, int p1, int p2)l
extern _native64(0xF87D9F2301F7D206) void unk_0xF87D9F2301F7D206(any p0)l
extern _native64(0x4198AB0022B15F87) bool _vehicle_has_landing_gear(Vehicle vehicle)l
extern _native64(0x755D6D5267CBBD7E) bool _are_propellers_undamaged(Vehicle vehicle)l
extern _native64(0x0CDDA42F9E360CA6) void unk_0x0CDDA42F9E360CA6(Vehicle vehicle, bool p1)l
extern _native64(0x4AF9BD80EEBEB453) bool is_vehicle_stolen(Vehicle vehicle)l
extern _native64(0x67B2C79AA7FF5738) any set_vehicle_is_stolen(Vehicle vehicle, bool isStolen)l
extern _native64(0xAD2D28A1AFDFF131) void unk_0xAD2D28A1AFDFF131(Vehicle vehicle, float p1)l
extern _native64(0x5991A01434CE9677) bool add_a_marker_over_vehicle(Vehicle vehicle)l
extern _native64(0xB264C4D2F2B0A78B) void unk_0xB264C4D2F2B0A78B(Vehicle vehicle)l
extern _native64(0x0E21D3DF1051399D) void detach_vehicle_from_cargobob(Vehicle vehicle, Vehicle cargobob)l
extern _native64(0xADF7BE450512C12F) bool detach_vehicle_from_any_cargobob(Vehicle vehicle)l
extern _native64(0xD40148F22E81A1D9) bool is_vehicle_attached_to_cargobob(Vehicle cargobob, Vehicle vehicleAttached)l
extern _native64(0x873B82D42AC2B9E5) Vehicle get_vehicle_attached_to_cargobob(Vehicle cargobob)l
extern _native64(0x4127F1D84E347769) void attach_vehicle_to_cargobob(Vehicle vehicle, Vehicle cargobob, int p2, vector3 vec)l
extern _native64(0x571FEB383F629926) void unk_0x571FEB383F629926(Vehicle cargobob, bool p1)l
extern _native64(0xCBDB9B923CACC92D) vector3 _get_cargobob_hook_position(Vehicle cargobob)l
extern _native64(0x1821D91AD4B56108) bool does_cargobob_have_pick_up_rope(Vehicle cargobob)l
extern _native64(0x7BEB0C7A235F6F3B) void create_pick_up_rope_for_cargobob(Vehicle cargobob, int state)l
extern _native64(0x9768CF648F54C804) void remove_pick_up_rope_for_cargobob(Vehicle cargobob)l
extern _native64(0x877C1EAEAC531023) void _set_cargobob_hook_position(any p0, float p1, float p2, int state)l
extern _native64(0xCF1182F682F65307) void unk_0xCF1182F682F65307(any p0, float p1)l
extern _native64(0x6E08BF5B3722BAC9) bool does_cargobob_have_pickup_magnet(Vehicle cargobob)l
extern _native64(0x9A665550F8DA349B) void set_cargobob_pickup_magnet_active(Vehicle cargobob, bool isActive)l
extern _native64(0xBCBFCD9D1DAC19E2) void set_cargobob_pickup_magnet_strength(Vehicle cargobob, float strength)l
extern _native64(0xA17BAD153B51547E) void unk_0xA17BAD153B51547E(Vehicle cargobob, float p1)l
extern _native64(0x66979ACF5102FD2F) void unk_0x66979ACF5102FD2F(Vehicle cargobob, float p1)l
extern _native64(0x6D8EAC07506291FB) void unk_0x6D8EAC07506291FB(Vehicle cargobob, float p1)l
extern _native64(0xED8286F71A819BAA) void unk_0xED8286F71A819BAA(Vehicle cargobob, float p1)l
extern _native64(0x685D5561680D088B) void unk_0x685D5561680D088B(any p0, float p1)l
extern _native64(0xE301BD63E9E13CF0) void unk_0xE301BD63E9E13CF0(Vehicle cargobob, Vehicle vehicle)l
extern _native64(0x9BDDC73CC6A115D4) void unk_0x9BDDC73CC6A115D4(any p0, bool p1, bool p2)l
extern _native64(0x56EB5E94318D3FB6) void unk_0x56EB5E94318D3FB6(any p0, bool p1)l
extern _native64(0x25ECB9F8017D98E0) bool does_vehicle_have_weapons(Vehicle vehicle)l
extern _native64(0x2C4A1590ABF43E8B) void unk_0x2C4A1590ABF43E8B(any p0, bool p1)l
extern _native64(0xF4FC6A6F67D8D856) void disable_vehicle_weapon(bool disabled, Hash weaponHash, Vehicle vehicle, Ped owner)l
extern _native64(0xE05DD0E9707003A3) void unk_0xE05DD0E9707003A3(any p0, bool p1)l
extern _native64(0x21115BCD6E44656A) void unk_0x21115BCD6E44656A(any p0, bool p1)l
extern _native64(0x29439776AAA00A62) int get_vehicle_class(Vehicle vehicle)l
extern _native64(0xDEDF1C8BD47C2200) int get_vehicle_class_from_name(Hash modelHash)l
extern _native64(0xBCDF8BAF56C87B6A) any set_players_last_vehicle(Vehicle vehicle)l
extern _native64(0x300504B23BD3B711) void set_vehicle_can_be_used_by_fleeing_peds(Vehicle vehicle, bool toggle)l
extern _native64(0xE5810AC70602F2F5) void unk_0xE5810AC70602F2F5(Vehicle vehicle, float p1)l
extern _native64(0x068F64F2470F9656) void _set_vehicle_creates_money_pickups_when_exploded(Vehicle vehicle, bool toggle)l
extern _native64(0xB8FBC8B1330CA9B4) void _set_vehicle_jet_engine_on(Vehicle vehicle, bool toggle)l
extern _native64(0x10655FAB9915623D) void unk_0x10655FAB9915623D(any p0, any p1)l
extern _native64(0x79DF7E806202CE01) void unk_0x79DF7E806202CE01(any p0, any p1)l
extern _native64(0x9007A2F21DC108D4) void unk_0x9007A2F21DC108D4(any p0, float p1)l
extern _native64(0x6E0859B530A365CC) void _set_helicopter_roll_pitch_yaw_mult(Vehicle helicopter, float multiplier)l
extern _native64(0x1837AF7C627009BA) void set_vehicle_friction_override(Vehicle vehicle, float friction)l
extern _native64(0xA37B9A517B133349) void set_vehicle_wheels_can_break_off_when_blow_up(Vehicle vehicle, bool toggle)l
extern _native64(0xF78F94D60248C737) bool unk_0xF78F94D60248C737(any p0, bool p1)l
extern _native64(0xA46413066687A328) void set_vehicle_ceiling_height(Vehicle vehicle, float p1)l
extern _native64(0x5E569EC46EC21CAE) void unk_0x5E569EC46EC21CAE(Vehicle vehicle, bool toggle)l
extern _native64(0x6D6AF961B72728AE) void unk_0x6D6AF961B72728AE(Vehicle vehicle)l
extern _native64(0x956B409B984D9BF7) bool does_vehicle_exist_with_decorator(const char* decorator)l
extern _native64(0x41062318F23ED854) void set_vehicle_exclusive_driver(Vehicle vehicle, bool p1)l
extern _native64(0xB5C51B5502E85E83) void _set_vehicle_exclusive_driver_2(Vehicle vehicle, Ped ped, int p2)l
extern _native64(0x500873A45724C863) void unk_0x500873A45724C863(Vehicle vehicle, any p1)l
extern _native64(0xB055A34527CB8FD7) void unk_0xB055A34527CB8FD7(Vehicle vehicle, bool p1)l
extern _native64(0xF796359A959DF65D) void _display_distant_vehicles(bool toggle)l
extern _native64(0x8E0A582209A62695) void _set_vehicle_neon_lights_colour(Vehicle vehicle, RGB colour)l
extern _native64(0x7619EEE8C886757F) void _get_vehicle_neon_lights_colour(Vehicle vehicle, int* r, int* g, int* b)l
extern _native64(0x2AA720E4287BF269) void _set_vehicle_neon_light_enabled(Vehicle vehicle, int index, bool toggle)l
extern _native64(0x8C4B92553E4766A5) bool _is_vehicle_neon_light_enabled(Vehicle vehicle, int index)l
extern _native64(0x35E0654F4BAD7971) void unk_0x35E0654F4BAD7971(bool p0)l
extern _native64(0xB088E9A47AE6EDD5) void unk_0xB088E9A47AE6EDD5(Vehicle vehicle, bool p1)l
extern _native64(0xDBA3C090E3D74690) void unk_0xDBA3C090E3D74690(Vehicle vehicle)l
extern _native64(0xF271147EB7B40F12) float get_vehicle_body_health(Vehicle vehicle)l
extern _native64(0xB77D05AC8C78AADB) void set_vehicle_body_health(Vehicle vehicle, float value)l
extern _native64(0xDF7E3EEB29642C38) void unk_0xDF7E3EEB29642C38(Vehicle vehicle, any p1, any p2)l
extern _native64(0x53952FD2BAA19F17) float _get_vehicle_suspension_height(Vehicle vehicle)l
extern _native64(0x84FD40F56075E816) void unk_0x84FD40F56075E816(float p0)l
extern _native64(0xA7DCDF4DED40A8F4) void unk_0xA7DCDF4DED40A8F4(Vehicle vehicle, bool p1)l
extern _native64(0xB8EF61207C2393A9) float _get_vehicle_body_health_2(Vehicle vehicle)l
extern _native64(0xD4C4642CB7F50B5D) bool unk_0xD4C4642CB7F50B5D(Vehicle vehicle)l
extern _native64(0xC361AA040D6637A8) void unk_0xC361AA040D6637A8(any p0, bool p1)l
extern _native64(0x99C82F8A139F3E4E) void _set_vehicle_hud_special_ability_bar_active(Vehicle vehicle, bool p1)l
extern _native64(0xE16142B94664DEFD) void unk_0xE16142B94664DEFD(any p0, bool p1)l
extern _native64(0x44CD1F493DB2A0A6) void _set_vehicle_weapon_capacity(Vehicle vehicle, int weaponIndex, int capacity)l
extern _native64(0x8181CE2F25CB9BB7) int _get_vehicle_weapon_capacity(Vehicle vehicle, int weaponIndex)l
extern _native64(0x563B65A643ED072E) bool _is_vehicle_weapon_disabled(Hash weaponHash, Vehicle vehicle)l
extern _native64(0x36D782F68B309BDA) bool _get_has_vehicle_got_rocket_boost(Vehicle vehicle)l
extern _native64(0x3D34E80EED4AE3BE) bool _is_vehicle_rocket_boost_active(Vehicle vehicle)l
extern _native64(0x81E1552E35DC3839) void _set_rocket_boost_active(Vehicle rocketCar, bool isActive)l
extern _native64(0xE00F2AB100B76E89) void _set_rocket_boost_refill_time(Vehicle rocketCar, float refillTime)l
extern _native64(0x28D034A93FE31BF5) bool _set_ramp_vehicle_receives_ramp_damage(Vehicle rampCar, bool receivesDamage)l
extern _native64(0xDCA174A42133F08C) bool _get_has_vehicle_got_retractable_wheels(Vehicle vehicle)l
extern _native64(0x5335BE58C083E74E) void _set_wheels_raised(Vehicle vehicle)l
extern _native64(0xF660602546D27BA8) void _set_wheels_lowered(Vehicle vehicle)l
extern _native64(0x1DA0DA9CB3F0C8BF) bool _get_is_wheels_lowered(Vehicle vehicle)l
extern _native64(0xBC9CFF381338CB4F) bool _get_vehicle_has_parachute(Vehicle vehicle)l
extern _native64(0xA916396DF4154EE3) bool _get_vehicle_can_use_parachute(Vehicle vehicle)l
extern _native64(0x0BFFB028B3DD0A97) void _vehicle_parachute_set_active(Vehicle vehicle, bool isActive)l
extern _native64(0xB7635E80A5C31BFF) void _get_vehicle_dashboard_color(Vehicle vehicle, int* colour)l
extern _native64(0x6089CDF6A57F326C) void _set_vehicle_dashboard_color(Vehicle vehicle, int colour)l
extern _native64(0x7D1464D472D32136) void _get_vehicle_interior_color(Vehicle vehicle, int* colour)l
extern _native64(0xF40DD601A65F7F19) void _set_vehicle_interior_color(Vehicle vehicle, int colour)l
extern _native64(0x633F6F44A537EBB6) bool _is_this_model_an_amphibious_car(Hash model)l
extern _native64(0x645F4B6E8499F632) bool _does_vehicle_have_door(Vehicle vehicle, int doorIndex)l
extern _native64(0x92922A607497B14D) int _get_number_of_vehicle_doors(Vehicle vehicle)l
extern _native64(0xC0572928C0ABFDA3) vector3 _get_entry_position_of_door(Vehicle vehicle, int doorIndex)l
extern _native64(0x5ECB40269053C0D4) int _get_vehicle_livery2_count(Vehicle vehicle)l
extern _native64(0x60190048C0764A26) int _get_vehicle_livery2(Vehicle vehicle)l
extern _native64(0xA6D3A8750DC73270) void _set_vehicle_livery2(Vehicle vehicle, int liveryIndex)l
extern _native64(0x86B4B6212CB8B627) void _set_vehicle_weapons_disabled(Vehicle vehicle, bool disable)l
extern _native64(0xB0AD1238A709B1A2) bool _is_boat(Vehicle vehicle)l
extern _native64(0x3B458DDB57038F08) void _set_vehicle_door_unkn(Vehicle vehicle, int doorIndex, bool p2)l
extern _native64(0x4D610C6B56031351) void _vehicle_set_custom_parachute_model(Vehicle vehicle, Hash parachuteModel)l
extern _native64(0xA74AD2439468C883) void _vehicle_set_custom_parachute_texture(Vehicle vehicle, int colorIndex)l
#pragma endregion //}
#pragma region OBJECT //{
extern _native64(0x509D5878EB39E842) Object create_object(Object modelHash, vector3 vec, bool isNetwork, bool p5, bool dynamic)l
extern _native64(0x9A294B2138ABB884) Object create_object_no_offset(Hash modelHash, vector3 vec, bool isNetwork, bool p5, bool dynamic)l
extern _native64(0x539E0AE3E6634B9F) void delete_object(Object* object)l
extern _native64(0x58A850EAEE20FAA3) bool place_object_on_ground_properly(Object object)l
extern _native64(0x2FDFF4107B8C1147) bool slide_object(Object object, vector3 to, vector3 speed, bool collision)l
extern _native64(0x8A7391690F5AFD81) any set_object_targettable(Object object, bool targettable)l
extern _native64(0x77F33F2CCF64B3AA) void unk_0x77F33F2CCF64B3AA(Object object, bool p1)l
extern _native64(0xE143FA2249364369) Object get_closest_object_of_type(vector3 vec, float radius, Hash modelHash, bool isMission, bool p6, bool p7)l
extern _native64(0x8ABFB70C49CC43E2) bool has_object_been_broken(Object object)l
extern _native64(0x761B0E69AC4D007E) bool has_closest_object_of_type_been_broken(float p0, float p1, float p2, float p3, Hash modelHash, any p5)l
extern _native64(0x46494A2475701343) bool unk_0x46494A2475701343(float p0, float p1, float p2, float p3, Hash modelHash, bool p5)l
extern _native64(0x163E252DE035A133) vector3 _get_object_offset_from_coords(vector3 Pos, float heading, vector3 Offset)l
extern _native64(0x163F8B586BC95F2A) any unk_0x163F8B586BC95F2A(any coords, float radius, Hash modelHash, vector3 vec, vector3* p6, int p7)l
extern _native64(0xF82D8F1926A02C3D) void set_state_of_closest_door_of_type(Hash type, vector3 vec, bool locked, float heading, bool p6)l
extern _native64(0xEDC1A5B84AEF33FF) void get_state_of_closest_door_of_type(Hash type, vector3 vec, bool* locked, float* heading)l
extern _native64(0x9B12F9A24FABEDB0) void _door_control(Hash doorHash, vector3 vec, bool locked, float p5, float p6, float p7)l
extern _native64(0x6F8838D03D1DC226) void add_door_to_system(Hash doorHash, Hash modelHash, vector3 vec, bool p5, bool p6, bool p7)l
extern _native64(0x464D8E1427156FE4) void remove_door_from_system(Hash doorHash)l
extern _native64(0x6BAB9442830C7F53) void _set_door_acceleration_limit(Hash doorHash, int limit, bool p2, bool p3)l
extern _native64(0x160AA1B32F6139B8) int unk_0x160AA1B32F6139B8(Hash doorHash)l
extern _native64(0x4BC2854478F3A749) int unk_0x4BC2854478F3A749(Hash doorHash)l
extern _native64(0x03C27E13B42A0E82) void unk_0x03C27E13B42A0E82(Hash doorHash, float p1, bool p2, bool p3)l
extern _native64(0x9BA001CB45CBF627) void unk_0x9BA001CB45CBF627(Hash doorHash, float heading, bool p2, bool p3)l
extern _native64(0xB6E6FBA95C7324AC) void _set_door_ajar_angle(Hash doorHash, float ajar, bool p2, bool p3)l
extern _native64(0x65499865FCA6E5EC) float unk_0x65499865FCA6E5EC(Hash doorHash)l
extern _native64(0xC485E07E4F0B7958) void unk_0xC485E07E4F0B7958(Hash doorHash, bool p1, bool p2, bool p3)l
extern _native64(0xD9B71952F78A2640) void unk_0xD9B71952F78A2640(Hash doorHash, bool p1)l
extern _native64(0xA85A21582451E951) void unk_0xA85A21582451E951(Hash doorHash, bool p1)l
extern _native64(0xC153C43EA202C8C1) bool _does_door_exist(Hash doorHash)l
extern _native64(0xC531EE8A1145A149) bool is_door_closed(Hash door)l
extern _native64(0xC7F29CA00F46350E) void unk_0xC7F29CA00F46350E(bool p0)l
extern _native64(0x701FDA1E82076BA4) void unk_0x701FDA1E82076BA4()l
extern _native64(0xDF97CDD4FC08FD34) bool unk_0xDF97CDD4FC08FD34(any p0)l
extern _native64(0x589F80B325CC82C5) bool unk_0x589F80B325CC82C5(float p0, float p1, float p2, any p3, any* p4)l
extern _native64(0x90E47239EA1980B8) bool is_garage_empty(any garage, bool p1, int p2)l
extern _native64(0x024A60DEB0EA69F0) bool unk_0x024A60DEB0EA69F0(any p0, Player player, float p2, int p3)l
extern _native64(0x1761DC5D8471CBAA) bool unk_0x1761DC5D8471CBAA(any p0, Player player, int p2)l
extern _native64(0x85B6C850546FDDE2) bool unk_0x85B6C850546FDDE2(any p0, bool p1, bool p2, bool p3, any p4)l
extern _native64(0x673ED815D6E323B7) bool unk_0x673ED815D6E323B7(any p0, bool p1, bool p2, bool p3, any p4)l
extern _native64(0x372EF6699146A1E4) bool unk_0x372EF6699146A1E4(any p0, Entity entity, float p2, int p3)l
extern _native64(0xF0EED5A6BC7B237A) bool unk_0xF0EED5A6BC7B237A(any p0, Entity entity, int p2)l
extern _native64(0x190428512B240692) void unk_0x190428512B240692(any p0, bool p1, bool p2, bool p3, bool p4)l
extern _native64(0xF2E1A7133DD356A6) void unk_0xF2E1A7133DD356A6(Hash hash, bool toggle)l
extern _native64(0x66A49D021870FE88) void unk_0x66A49D021870FE88()l
extern _native64(0xBFA48E2FF417213F) bool does_object_of_type_exist_at_coords(vector3 vec, float radius, Hash hash, bool p5)l
extern _native64(0x2A70BAE8883E4C81) bool is_point_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, bool p10, bool p11)l
extern _native64(0x4D89D607CB3DD1D2) void unk_0x4D89D607CB3DD1D2(Object object, bool toggle)l
extern _native64(0xF6DF6E90DE7DF90F) void set_object_physics_params(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy)l
extern _native64(0xB6FBFD079B8D0596) float get_object_fragment_damage_health(any p0, bool p1)l
extern _native64(0x406137F8EF90EAF5) void set_activate_object_physics_as_soon_as_it_is_unfrozen(Object object, bool toggle)l
extern _native64(0x397DC58FF00298D1) bool is_any_object_near_point(vector3 vec, float range, bool p4)l
extern _native64(0x8C90FE4B381BA60A) bool is_object_near_point(Hash objectHash, vector3 vec, float range)l
extern _native64(0x4A39DB43E47CF3AA) void unk_0x4A39DB43E47CF3AA(any p0)l
extern _native64(0xE7E4C198B0185900) void unk_0xE7E4C198B0185900(Object p0, any p1, bool p2)l
extern _native64(0xF9C1681347C8BD15) void unk_0xF9C1681347C8BD15(Object object)l
extern _native64(0xB252BC036B525623) void track_object_visibility(any p0)l
extern _native64(0x8B32ACE6326A7546) bool is_object_visible(Object object)l
extern _native64(0xC6033D32241F6FB5) void unk_0xC6033D32241F6FB5(any p0, bool p1)l
extern _native64(0xEB6F1A9B5510A5D2) void unk_0xEB6F1A9B5510A5D2(any p0, bool p1)l
extern _native64(0xBCE595371A5FBAAF) void unk_0xBCE595371A5FBAAF(any p0, bool p1)l
extern _native64(0xB48FCED898292E52) int _get_des_object(vector3 vec, float rotation, const char* name)l
extern _native64(0x5C29F698D404C5E1) void _set_des_object_state(int handle, int state)l
extern _native64(0x899BA936634A322E) any _get_des_object_state(int handle)l
extern _native64(0x52AF537A0C5B8AAD) bool _does_des_object_exist(int handle)l
extern _native64(0x260EE4FDBDF4DB01) float unk_0x260EE4FDBDF4DB01(any p0)l
extern _native64(0xFBA08C503DD5FA58) Pickup create_pickup(Hash pickupHash, vector3 pos, int p4, int value, bool p6, Hash modelHash)l
extern _native64(0x891804727E0A98B7) Pickup create_pickup_rotate(Hash pickupHash, vector3 pos, vector3 rot, int flag, int amount, any p9, bool p10, Hash modelHash)l
extern _native64(0x673966A0C0FD7171) Pickup create_ambient_pickup(Hash pickupHash, vector3 pos, int p4, int value, Hash modelHash, bool p7, bool p8)l
extern _native64(0x2EAF1FDB2FB55698) Pickup create_portable_pickup(Hash pickupHash, vector3 vec, bool placeOnGround, Hash modelHash)l
extern _native64(0x125494B98A21AAF7) Pickup _create_portable_pickup_2(Hash pickupHash, vector3 vec, bool placeOnGround, Hash modelHash)l
extern _native64(0x8DC39368BDD57755) void attach_portable_pickup_to_ped(Ped ped, any p1)l
extern _native64(0xCF463D1E9A0AECB1) void detach_portable_pickup_from_ped(Ped ped)l
extern _native64(0x0BF3B3BD47D79C08) void unk_0x0BF3B3BD47D79C08(any p0, int p1)l
extern _native64(0x78857FC65CADB909) void unk_0x78857FC65CADB909(bool p0)l
extern _native64(0x6E16BC2503FF1FF0) vector3 get_safe_pickup_coords(vector3 vec, any p3, any p4)l
extern _native64(0x225B8B35C88029B3) vector3 get_pickup_coords(Pickup pickup)l
extern _native64(0x27F9D613092159CF) void remove_all_pickups_of_type(Hash pickupHash)l
extern _native64(0x80EC48E6679313F9) bool has_pickup_been_collected(Pickup pickup)l
extern _native64(0x3288D8ACAECD2AB2) void remove_pickup(Pickup pickup)l
extern _native64(0x0589B5E791CE9B2B) void create_money_pickups(vector3 vec, int value, int amount, Hash model)l
extern _native64(0xAFC1CA75AD4074D1) bool does_pickup_exist(Pickup pickup)l
extern _native64(0xD9EFB6DBF7DAAEA3) bool does_pickup_object_exist(Object pickupObject)l
extern _native64(0x5099BC55630B25AE) Object get_pickup_object(Pickup pickup)l
extern _native64(0x0378C08504160D0D) bool unk_0x0378C08504160D0D(any p0)l
extern _native64(0xF9C36251F6E48E33) bool _is_pickup_within_radius(Hash pickupHash, vector3 vec, float radius)l
extern _native64(0x78015C9B4B3ECC9D) void set_pickup_regeneration_time(any p0, any p1)l
extern _native64(0x616093EC6B139DD9) void unk_0x616093EC6B139DD9(Player player, Hash pickupHash, bool p2)l
extern _native64(0x88EAEC617CD26926) void unk_0x88EAEC617CD26926(Hash p0, bool p1)l
extern _native64(0x53E0DF1A2A3CF0CA) void set_team_pickup_object(Object object, any p1, bool p2)l
extern _native64(0x92AEFB5F6E294023) void unk_0x92AEFB5F6E294023(Object object, bool p1, bool p2)l
extern _native64(0xA08FE5E49BDC39DD) void unk_0xA08FE5E49BDC39DD(any p0, float p1, bool p2)l
extern _native64(0xDB41D07A45A6D4B7) any unk_0xDB41D07A45A6D4B7(any p0)l
extern _native64(0x318516E02DE3ECE2) void unk_0x318516E02DE3ECE2(float p0)l
extern _native64(0x31F924B53EADDF65) void unk_0x31F924B53EADDF65(bool p0)l
extern _native64(0xF92099527DB8E2A7) void unk_0xF92099527DB8E2A7(any p0, any p1)l
extern _native64(0xA2C1F5E92AFE49ED) void unk_0xA2C1F5E92AFE49ED()l
extern _native64(0x762DB2D380B48D04) void unk_0x762DB2D380B48D04(any p0)l
extern _native64(0x3430676B11CDF21D) void _highlight_placement_coords(vector3 vec, int colorIndex)l
extern _native64(0xB2D0BDE54F0E8E5A) void unk_0xB2D0BDE54F0E8E5A(Object object, bool toggle)l
extern _native64(0x08F96CA6C551AD51) Hash _get_weapon_hash_from_pickup(Pickup pickupHash)l
extern _native64(0x11D1E53A726891FE) bool unk_0x11D1E53A726891FE(any p0)l
extern _native64(0x971DA0055324D033) void _set_object_texture_variant(Object object, int paintIndex)l
extern _native64(0x5EAAD83F8CFB4575) Hash unk_0x5EAAD83F8CFB4575(Pickup pickupHash)l
extern _native64(0xF538081986E49E9D) void set_force_object_this_frame(any p0, any p1, any p2, any p3)l
extern _native64(0xADBE4809F19F927A) void _mark_object_for_deletion(Object object)l
#pragma endregion //}
#pragma region AI //{
extern _native64(0xE73A266DB0CA9042) void task_pause(Ped ped, int ms)l
extern _native64(0x919BE13EED931959) void task_stand_still(Ped ped, int time)l
extern _native64(0x0AE4086104E067B1) void task_jump(Ped ped, bool unused)l
extern _native64(0x3EB1FE9E8E908E15) void task_cower(Ped ped, int duration)l
extern _native64(0xF2EAB31979A7F910) void task_hands_up(Ped ped, int duration, Ped facingPed, int p3, bool p4)l
extern _native64(0xA98FCAFD7893C834) void update_task_hands_up_duration(Ped ped, int duration)l
extern _native64(0x965791A9A488A062) void task_open_vehicle_door(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed)l
extern _native64(0xC20E50AA46D09CA8) void task_enter_vehicle(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int p5, any p6)l
extern _native64(0xD3DBCE61A490BE02) void task_leave_vehicle(Ped ped, Vehicle vehicle, int flags)l
extern _native64(0x9C00E77AF14B2DFF) void _task_get_off_boat(Ped ped, Vehicle boat)l
extern _native64(0x601736CFE536B0A0) void task_sky_dive(Ped ped)l
extern _native64(0xD2F1C53C97EE81AB) void task_parachute(Ped ped, bool p1)l
extern _native64(0xB33E291AFA6BD03A) void task_parachute_to_target(Ped ped, vector3 vec)l
extern _native64(0xC313379AF0FCEDA7) void set_parachute_task_target(Ped ped, vector3 vec)l
extern _native64(0x0729BAC1B8C64317) void set_parachute_task_thrust(Ped ped, float thrust)l
extern _native64(0x09693B0312F91649) void task_rappel_from_heli(Ped ped, int unused)l
extern _native64(0xE2A2AA2F659D77A7) void task_vehicle_drive_to_coord(Ped ped, Vehicle vehicle, vector3 vec, float speed, any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10)l
extern _native64(0x158BB33F920D360C) void task_vehicle_drive_to_coord_longrange(Ped ped, Vehicle vehicle, vector3 vec, float speed, int driveMode, float stopRange)l
extern _native64(0x480142959D337D00) void task_vehicle_drive_wander(Ped ped, Vehicle vehicle, float speed, int drivingStyle)l
extern _native64(0x304AE42E357B8C7E) void task_follow_to_offset_of_entity(Ped ped, Entity entity, vector3 offset, float movementSpeed, int timeout, float stoppingRange, bool persistFollowing)l
extern _native64(0xD76B57B44F1E6F8B) void task_go_straight_to_coord(Ped ped, vector3 vec, float speed, int timeout, float targetHeading, float distanceToSlide)l
extern _native64(0x61E360B7E040D12E) void task_go_straight_to_coord_relative_to_entity(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, any p6)l
extern _native64(0x93B93A37987F1F3D) void task_achieve_heading(Ped ped, float heading, int timeout)l
extern _native64(0x841142A1376E9006) void task_flush_route()l
extern _native64(0x1E7889778264843A) void task_extend_route(vector3 vec)l
extern _native64(0x595583281858626E) void task_follow_point_route(Ped ped, float speed, int unknown)l
extern _native64(0x6A071245EB0D1882) void task_go_to_entity(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6)l
extern _native64(0x94587F17E9C365D5) void task_smart_flee_coord(Ped ped, vector3 vec, float distance, int time, bool p6, bool p7)l
extern _native64(0x22B0D0E37CCB840D) void task_smart_flee_ped(Ped ped, Ped fleeTarget, float distance, any fleeTime, bool p4, bool p5)l
extern _native64(0x72C896464915D1B1) void task_react_and_flee_ped(Ped ped, Ped fleeTarget)l
extern _native64(0x452419CBD838065B) void task_shocking_event_react(Ped ped, int eventHandle)l
extern _native64(0xE054346CA3A0F315) void task_wander_in_area(Ped ped, vector3 vec, float radius, float minimalLength, float timeBetweenWalks)l
extern _native64(0xBB9CE077274F6A1B) void task_wander_standard(Ped ped, float p1, int p2)l
extern _native64(0x0F3E34E968EA374E) void task_vehicle_park(Ped ped, Vehicle vehicle, vector3 vec, float heading, int mode, float radius, bool keepEngineOn)l
extern _native64(0xAA5DC05579D60BD9) any task_stealth_kill(Ped killer, Ped target, Hash killType, float p3, bool p4)l
extern _native64(0x965FEC691D55E9BF) void task_plant_bomb(Ped ped, vector3 vec, float heading)l
extern _native64(0x15D3A79D4E44B913) void task_follow_nav_mesh_to_coord(Ped ped, vector3 vec, float speed, int timeout, float stoppingRange, bool persistFollowing, float unk)l
extern _native64(0x17F58B88D085DBAC) void task_follow_nav_mesh_to_coord_advanced(Ped ped, vector3 vec, float speed, int timeout, float unkFloat, int unkInt, vector3 unk, float unk_40000f)l
extern _native64(0x8E06A6FE76C9EFF4) any set_ped_path_can_use_climbovers(Ped ped, bool Toggle)l
extern _native64(0x77A5B103C87F476E) any set_ped_path_can_use_ladders(Ped ped, bool Toggle)l
extern _native64(0xE361C5C71C431A4F) void set_ped_path_can_drop_from_height(Ped ped, bool Toggle)l
extern _native64(0x88E32DB8C1A4AA4B) void unk_0x88E32DB8C1A4AA4B(Ped ped, float p1)l
extern _native64(0xF35425A4204367EC) void set_ped_paths_width_plant(Ped ped, bool mayEnterWater)l
extern _native64(0x38FE1EC73743793C) void set_ped_path_prefer_to_avoid_water(Ped ped, bool avoidWater)l
extern _native64(0x4455517B28441E60) void set_ped_path_avoid_fire(Ped ped, bool avoidFire)l
extern _native64(0x6C6B148586F934F7) void set_global_min_bird_flight_height(float height)l
extern _native64(0xC6F5C0BCDC74D62D) any get_navmesh_route_distance_remaining(Ped ped, any* p1, any* p2)l
extern _native64(0x632E831F382A0FA8) int get_navmesh_route_result(Ped ped)l
extern _native64(0x3E38E28A1D80DDF6) bool unk_0x3E38E28A1D80DDF6(Ped ped)l
extern _native64(0x5BC448CB78FA3E88) void task_go_to_coord_any_means(Ped ped, vector3 vec, float speed, any p5, bool p6, int walkingStyle, float p8)l
extern _native64(0x1DD45F9ECFDB1BC9) void task_go_to_coord_any_means_extra_params(Ped ped, vector3 vec, float speed, any p5, bool p6, int walkingStyle, float p8, any p9, any p10, any p11)l
extern _native64(0xB8ECD61F531A7B02) void task_go_to_coord_any_means_extra_params_with_cruise_speed(Ped ped, vector3 vec, float speed, any p5, bool p6, int walkingStyle, float p8, any p9, any p10, any p11, any p12)l
extern _native64(0xEA47FE3719165B94) void task_play_anim(Ped ped, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, bool lockX, bool lockY, bool lockZ)l
extern _native64(0x83CDB10EA29B370B) void task_play_anim_advanced(Ped ped, const char* animDict, const char* animName, vector3 pos, vector3 rot, float speed, float speedMultiplier, int duration, any flag, float animTime, any p14, any p15)l
extern _native64(0x97FF36A1D40EA00A) void stop_anim_task(Ped ped, const char* animDictionary, const char* animationName, float p3)l
extern _native64(0x126EF75F1E17ABE5) void task_scripted_animation(Ped ped, any* p1, any* p2, any* p3, float p4, float p5)l
extern _native64(0x77A1EEC547E7FCF1) void play_entity_scripted_anim(any p0, any* p1, any* p2, any* p3, float p4, float p5)l
extern _native64(0xEE08C992D238C5D1) void stop_anim_playback(Ped ped, any p1, bool p2)l
extern _native64(0x207F1A47C0342F48) void set_anim_weight(any p0, float p1, any p2, any p3, bool p4)l
extern _native64(0x032D49C5E359C847) void set_anim_rate(any p0, float p1, any p2, bool p3)l
extern _native64(0x70033C3CC29A1FF4) void set_anim_looped(any p0, bool p1, any p2, bool p3)l
extern _native64(0x8FBB6758B3B3E9EC) void task_play_phone_gesture_animation(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float p4, float p5, bool p6, bool p7)l
extern _native64(0x3FA00D4F4641BFAE) void _task_stop_phone_gesture_animation(Ped ped)l
extern _native64(0xB8EBB1E9D3588C10) bool is_playing_phone_gesture_anim(Ped ped)l
extern _native64(0x47619ABE8B268C60) float get_phone_gesture_anim_current_time(Ped ped)l
extern _native64(0x1EE0F68A7C25DEC6) float get_phone_gesture_anim_total_time(Ped ped)l
extern _native64(0x69F5C3BD0F3EBD89) void task_vehicle_play_anim(Vehicle vehicle, const char* animation_set, const char* animation_name)l
extern _native64(0x6FA46612594F7973) void task_look_at_coord(Entity entity, vector3 vec, float duration, any p5, any p6)l
extern _native64(0x69F4BE8C8CC4796C) void task_look_at_entity(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2)l
extern _native64(0x0F804F1DB19B9689) void task_clear_look_at(Ped ped)l
extern _native64(0xE8854A4326B9E12B) any open_sequence_task(Object* taskSequence)l
extern _native64(0x39E72BC99E6360CB) any close_sequence_task(Object taskSequence)l
extern _native64(0x5ABA3986D90D8A3B) any task_perform_sequence(Ped ped, Object taskSequence)l
extern _native64(0x3841422E9C488D8C) any clear_sequence_task(Object* taskSequence)l
extern _native64(0x58C70CF3A41E4AE7) void set_sequence_to_repeat(Object taskSequence, bool repeat)l
extern _native64(0x00A9010CFE1E3533) int get_sequence_progress(Ped ped)l
extern _native64(0xB0760331C7AA4155) bool get_is_task_active(Ped ped, int taskNumber)l
extern _native64(0x77F1BEB8863288D5) int get_script_task_status(Ped targetPed, Hash taskHash)l
extern _native64(0x534AEBA6E5ED4CAB) int get_active_vehicle_mission_type(Vehicle veh)l
extern _native64(0x504D54DF3F6F2247) void task_leave_any_vehicle(Ped ped, int p1, int p2)l
extern _native64(0x7A192BE16D373D00) void task_aim_gun_scripted(Ped ped, Hash scriptTask, bool p2, bool p3)l
extern _native64(0x8605AF0DE8B3A5AC) void task_aim_gun_scripted_with_target(any p0, any p1, float p2, float p3, float p4, any p5, bool p6, bool p7)l
extern _native64(0x9724FB59A3E72AD0) void update_task_aim_gun_scripted_target(Ped p0, Ped p1, float p2, float p3, float p4, bool p5)l
extern _native64(0x3A8CADC7D37AACC5) const char* get_clip_set_for_scripted_gun_task(int p0)l
extern _native64(0x9B53BB6E8943AF53) void task_aim_gun_at_entity(Ped ped, Entity entity, int duration, bool p3)l
extern _native64(0x5AD23D40115353AC) void task_turn_ped_to_face_entity(Ped ped, Entity entity, int duration)l
extern _native64(0x6671F3EEC681BDA1) void task_aim_gun_at_coord(Ped ped, vector3 vec, int time, bool p5, bool p6)l
extern _native64(0x46A6CC01E0826106) void task_shoot_at_coord(Ped ped, vector3 vec, int duration, Hash firingPattern)l
extern _native64(0x7AA80209BDA643EB) void task_shuffle_to_next_vehicle_seat(Ped ped, Vehicle vehicle)l
extern _native64(0xE1EF3C1216AFF2CD) void clear_ped_tasks(Ped ped)l
extern _native64(0x176CECF6F920D707) void clear_ped_secondary_task(Ped ped)l
extern _native64(0x7F93691AB4B92272) void task_everyone_leave_vehicle(Vehicle vehicle)l
extern _native64(0xE39B4FF4FDEBDE27) void task_goto_entity_offset(Ped ped, any p1, any p2, vector3 vec, int duration)l
extern _native64(0x338E7EF52B6095A9) void task_goto_entity_offset_xy(any p0, any p1, any p2, float p3, float p4, float p5, float p6, any p7)l
extern _native64(0x1DDA930A0AC38571) void task_turn_ped_to_face_coord(Ped ped, vector3 vec, int duration)l
extern _native64(0xC429DCEEB339E129) void task_vehicle_temp_action(Ped driver, Vehicle vehicle, int action, int time)l
extern _native64(0x659427E0EF36BCDE) void task_vehicle_mission(any p0, any p1, any p2, any p3, float p4, any p5, float p6, float p7, bool p8)l
extern _native64(0x9454528DF15D657A) void task_vehicle_mission_ped_target(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, bool p8)l
extern _native64(0xF0AF20AA7731F8C3) void task_vehicle_mission_coors_target(Ped ped, Vehicle vehicle, vector3 vec, int p5, int p6, int p7, float p8, float p9, bool p10)l
extern _native64(0x0FA6E4B75F302400) void task_vehicle_escort(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance)l
extern _native64(0xFC545A9F0626E3B6) void _task_vehicle_follow(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle, float speed, int minDistance)l
extern _native64(0x3C08A8E30363B353) void task_vehicle_chase(Ped driver, Entity targetEnt)l
extern _native64(0x1E09C32048FEFD1C) void task_vehicle_heli_protect(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7)l
extern _native64(0xCC665AAC360D31E7) void set_task_vehicle_chase_behavior_flag(Ped ped, int flag, bool set)l
extern _native64(0x639B642FACBE4EDD) void set_task_vehicle_chase_ideal_pursuit_distance(Ped ped, float distance)l
extern _native64(0xAC83B1DB38D0ADA0) void task_heli_chase(Ped pilot, Entity entityToFollow, vector3 vec)l
extern _native64(0x2D2386F273FF7A25) void task_plane_chase(Ped pilot, Entity entityToFollow, vector3 vec)l
extern _native64(0xBF19721FA34D32C0) void task_plane_land(Ped pilot, Vehicle plane, vector3 runwayStart, vector3 runwayEnd)l
extern _native64(0xDAD029E187A2BEB4) void task_heli_mission(Ped pilot, Vehicle vehicle, Vehicle vehicleToFollow, Ped pedToFollow, vector3 pos, int mode, float speed, float radius, float angle, int p11, int height, float p13, int p14)l
extern _native64(0x23703CD154E83B88) void task_plane_mission(Ped pilot, Vehicle plane, Vehicle targetVehicle, Ped targetPed, vector3 destination, int missionType, float vehicleSpeed, float p9, float heading, float maxAltitude, float minAltitude)l
extern _native64(0x15C86013127CE63F) void task_boat_mission(Ped pedDriver, Vehicle boat, any p2, any p3, vector3 vec, any p7, float maxSpeed, int drivingStyle, float p10, any p11)l
extern _native64(0x2F8AF0E82773A171) void task_drive_by(Ped driverPed, Ped targetPed, Vehicle targetVehicle, vector3 target, float distanceToShoot, int pedAccuracy, bool p8, Hash firingPattern)l
extern _native64(0xE5B302114D8162EE) void set_driveby_task_target(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, vector3 vec)l
extern _native64(0xC35B5CDB2824CF69) void clear_driveby_task_underneath_driving_task(Ped ped)l
extern _native64(0x8785E6E40C7A8818) bool is_driveby_task_underneath_driving_task(Ped ped)l
extern _native64(0xDCFE42068FE0135A) bool control_mounted_weapon(Ped ped)l
extern _native64(0xCCD892192C6D2BB9) void set_mounted_weapon_target(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, vector3 vec)l
extern _native64(0xA320EF046186FA3B) bool is_mounted_weapon_task_underneath_driving_task(Ped ped)l
extern _native64(0xBD2A8EC3AF4DE7DB) void task_use_mobile_phone(Ped ped, int p1)l
extern _native64(0x5EE02954A14C69DB) void task_use_mobile_phone_timed(Ped ped, int duration)l
extern _native64(0x8C338E0263E4FD19) void task_chat_to_ped(Ped ped, Ped target, any p2, float p3, float p4, float p5, float p6, float p7)l
extern _native64(0x9A7D091411C5F684) void task_warp_ped_into_vehicle(Ped ped, Vehicle vehicle, int seat)l
extern _native64(0x08DA95E8298AE772) void task_shoot_at_entity(Entity entity, Entity target, int duration, Hash firingPattern)l
extern _native64(0x89D9FCC2435112F1) void task_climb(Ped ped, bool unused)l
extern _native64(0xB6C987F9285A3814) void task_climb_ladder(Ped ped, int p1)l
extern _native64(0xAAA34F8A7CB32098) void clear_ped_tasks_immediately(Ped ped)l
extern _native64(0x89221B16730234F0) void task_perform_sequence_from_progress(any p0, any p1, any p2, any p3)l
extern _native64(0xF1B9F16E89E2C93A) void set_next_desired_move_state(float p0)l
extern _native64(0x1E982AC8716912C5) void set_ped_desired_move_blend_ratio(Ped ped, float p1)l
extern _native64(0x8517D4A6CA8513ED) float get_ped_desired_move_blend_ratio(Ped ped)l
extern _native64(0xA9DA48FAB8A76C12) void task_goto_entity_aiming(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist)l
extern _native64(0xEB8517DDA73720DA) void task_set_decision_maker(Ped p0, Hash p1)l
extern _native64(0x933C06518B52A9A4) void task_set_sphere_defensive_area(any p0, float p1, float p2, float p3, float p4)l
extern _native64(0x95A6C46A31D1917D) void task_clear_defensive_area(any p0)l
extern _native64(0xD04FE6765D990A06) void task_ped_slide_to_coord(Ped ped, vector3 vec, float heading, float p5)l
extern _native64(0x5A4A6A6D3DC64F52) void task_ped_slide_to_coord_hdg_rate(Ped ped, vector3 vec, float heading, float p5, float p6)l
extern _native64(0xD5C12A75C7B9497F) ScrHandle add_cover_point(float p0, float p1, float p2, float p3, any p4, any p5, any p6, bool p7)l
extern _native64(0xAE287C923D891715) void remove_cover_point(ScrHandle coverpoint)l
extern _native64(0xA98B8E3C088E5A31) bool does_scripted_cover_point_exist_at_coords(vector3 vec)l
extern _native64(0x594A1028FC2A3E85) vector3 get_scripted_cover_point_coords(ScrHandle coverpoint)l
extern _native64(0xF166E48407BAC484) void task_combat_ped(Ped ped, Ped targetPed, int p2, int p3)l
extern _native64(0x944F30DCB7096BDE) void task_combat_ped_timed(any p0, Ped ped, int p2, any p3)l
extern _native64(0x75AC2B60386D89F2) void task_seek_cover_from_pos(Ped ped, vector3 vec, int duration, bool p5)l
extern _native64(0x84D32B3BEC531324) void task_seek_cover_from_ped(Ped ped, Ped target, int duration, bool p3)l
extern _native64(0xD43D95C7A869447F) void task_seek_cover_to_cover_point(any p0, any p1, float p2, float p3, float p4, any p5, bool p6)l
extern _native64(0x39246A6958EF072C) void task_seek_cover_to_coords(Ped ped, vector3 vec_1, vector3 vec_2, any p7, bool p8)l
extern _native64(0x4172393E6BE1FECE) void task_put_ped_directly_into_cover(Ped ped, vector3 vec, any timeout, bool p5, float p6, bool p7, bool p8, any p9, bool p10)l
extern _native64(0x79B258E397854D29) void task_exit_cover(any p0, any p1, float p2, float p3, float p4)l
extern _native64(0x1C6CD14A876FFE39) void task_put_ped_directly_into_melee(Ped ped, Ped meleeTarget, float p2, float p3, float p4, bool p5)l
extern _native64(0xAC96609B9995EDF8) void task_toggle_duck(bool p0, bool p1)l
extern _native64(0x4A58A47A72E3FCB4) void task_guard_current_position(Ped p0, float p1, float p2, bool p3)l
extern _native64(0xD2A207EEBDF9889B) void task_guard_assigned_defensive_area(any p0, float p1, float p2, float p3, float p4, float p5, any p6)l
extern _native64(0xC946FE14BE0EB5E2) void task_guard_sphere_defensive_area(Ped p0, float p1, float p2, float p3, float p4, float p5, any p6, float p7, float p8, float p9, float p10)l
extern _native64(0xAE032F8BBA959E90) void task_stand_guard(Ped ped, vector3 vec, float heading, const char* scenarioName)l
extern _native64(0x5C9B84BD7D31D908) void set_drive_task_cruise_speed(Ped driver, float cruiseSpeed)l
extern _native64(0x404A5AA9B9F0B746) void set_drive_task_max_cruise_speed(any p0, float p1)l
extern _native64(0xDACE1BE37D88AF67) void set_drive_task_driving_style(Ped ped, int drivingStyle)l
extern _native64(0x45C597097DD7CB81) void add_cover_blocking_area(vector3 player, vector3 radius, bool p6, bool p7, bool p8, bool p9)l
extern _native64(0xDB6708C0B46F56D8) void remove_all_cover_blocking_areas()l
extern _native64(0x142A02425FF02BD9) void task_start_scenario_in_place(Ped ped, const char* scenarioName, int unkDelay, bool playEnterAnim)l
extern _native64(0xFA4EFC79F69D4F07) void task_start_scenario_at_position(Ped ped, const char* scenarioName, vector3 vec, float heading, int duration, bool sittingScenario, bool teleport)l
extern _native64(0x277F471BA9DB000B) void task_use_nearest_scenario_to_coord(Ped ped, vector3 vec, float distance, int duration)l
extern _native64(0x58E2E0F23F6B76C3) void task_use_nearest_scenario_to_coord_warp(Ped ped, vector3 vec, float radius, any p5)l
extern _native64(0x9FDA1B3D7E7028B3) void task_use_nearest_scenario_chain_to_coord(any p0, float p1, float p2, float p3, float p4, any p5)l
extern _native64(0x97A28E63F0BA5631) void task_use_nearest_scenario_chain_to_coord_warp(any p0, float p1, float p2, float p3, float p4, any p5)l
extern _native64(0x5A59271FFADD33C1) bool does_scenario_exist_in_area(vector3 vec, float radius, bool b)l
extern _native64(0x0A9D0C2A3BBC86C1) bool does_scenario_of_type_exist_in_area(float p0, float p1, float p2, any* p3, float p4, bool p5)l
extern _native64(0x788756D73AC2E07C) bool is_scenario_occupied(float p0, float p1, float p2, float p3, bool p4)l
extern _native64(0x295E3CCEC879CCD7) bool ped_has_use_scenario_task(Ped ped)l
extern _native64(0x748040460F8DF5DC) void play_anim_on_running_scenario(Ped ped, const char* animDict, const char* animName)l
extern _native64(0xF9034C136C9E00D3) bool does_scenario_group_exist(const char* scenarioGroup)l
extern _native64(0x367A09DED4E05B99) bool is_scenario_group_enabled(const char* scenarioGroup)l
extern _native64(0x02C8E5B49848664E) void set_scenario_group_enabled(const char* scenarioGroup, bool p1)l
extern _native64(0xDD902D0349AFAD3A) void reset_scenario_groups_enabled()l
extern _native64(0x535E97E1F7FC0C6A) void set_exclusive_scenario_group(const char* scenarioGroup)l
extern _native64(0x4202BBCB8684563D) void reset_exclusive_scenario_group()l
extern _native64(0x3A815DB3EA088722) bool is_scenario_type_enabled(const char* scenarioType)l
extern _native64(0xEB47EC4E34FB7EE1) void set_scenario_type_enabled(const char* scenarioType, bool toggle)l
extern _native64(0x0D40EE2A7F2B2D6D) void reset_scenario_types_enabled()l
extern _native64(0xAA135F9482C82CC3) bool is_ped_active_in_scenario(Ped ped)l
extern _native64(0x621C6E4729388E41) bool unk_0x621C6E4729388E41(Ped ped)l
extern _native64(0x8FD89A6240813FD0) void unk_0x8FD89A6240813FD0(Ped ped, bool p1, bool p2)l
extern _native64(0x4CF5F55DAC3280A0) void task_combat_hated_targets_in_area(Ped ped, vector3 vec, float radius, any p5)l
extern _native64(0x7BF835BB9E2698C8) void task_combat_hated_targets_around_ped(Ped ped, float radius, int p2)l
extern _native64(0x2BBA30B854534A0C) void task_combat_hated_targets_around_ped_timed(any p0, float p1, any p2, any p3)l
extern _native64(0x7285951DBF6B5A51) void task_throw_projectile(int ped, vector3 vec)l
extern _native64(0xA21C51255B205245) void task_swap_weapon(Ped ped, bool p1)l
extern _native64(0x62D2916F56B9CD2D) void task_reload_weapon(Ped ped, bool unused)l
extern _native64(0x2A74E1D5F2F00EEC) bool is_ped_getting_up(Ped ped)l
extern _native64(0xCDDC2B77CE54AC6E) void task_writhe(Ped ped, Ped target, int time, int p3)l
extern _native64(0xDEB6D52126E7D640) bool is_ped_in_writhe(Ped ped)l
extern _native64(0xA36BFB5EE89F3D82) void open_patrol_route(const char* patrolRoute)l
extern _native64(0xB043ECA801B8CBC1) void close_patrol_route()l
extern _native64(0x8EDF950167586B7C) void add_patrol_route_node(int p0, const char* p1, vector3 vec_1, vector3 vec_2, int p8)l
extern _native64(0x23083260DEC3A551) void add_patrol_route_link(any p0, any p1)l
extern _native64(0xAF8A443CCC8018DC) void create_patrol_route()l
extern _native64(0x7767DD9D65E91319) void delete_patrol_route(const char* patrolRoute)l
extern _native64(0xBDA5DF49D080FE4E) void task_patrol(Ped ped, const char* p1, any p2, bool p3, bool p4)l
extern _native64(0xE5DA8615A6180789) void task_stay_in_cover(Ped ped)l
extern _native64(0x5CF0D8F9BBA0DD75) void add_vehicle_subtask_attack_coord(Ped ped, vector3 vec)l
extern _native64(0x85F462BADC7DA47F) void add_vehicle_subtask_attack_ped(Ped ped, Ped ped2)l
extern _native64(0x10AB107B887214D8) void task_vehicle_shoot_at_ped(Ped ped, Ped target, float p2)l
extern _native64(0xE41885592B08B097) void task_vehicle_aim_at_ped(Ped ped, Ped target)l
extern _native64(0x5190796ED39C9B6D) void task_vehicle_shoot_at_coord(Ped ped, vector3 vec, float p4)l
extern _native64(0x447C1E9EF844BC0F) void task_vehicle_aim_at_coord(Ped ped, vector3 vec)l
extern _native64(0x195AEEB13CEFE2EE) void task_vehicle_goto_navmesh(Ped ped, Vehicle vehicle, vector3 vec, float speed, int behaviorFlag, float stoppingRange)l
extern _native64(0x11315AB3385B8AC0) void task_go_to_coord_while_aiming_at_coord(Ped ped, vector3 vec, vector3 aimAt, float moveSpeed, bool p8, float p9, float p10, bool p11, any flags, bool p13, Hash firingPattern)l
extern _native64(0xB2A16444EAD9AE47) void task_go_to_coord_while_aiming_at_entity(any p0, float p1, float p2, float p3, any p4, float p5, bool p6, float p7, float p8, bool p9, any p10, bool p11, any p12, any p13)l
extern _native64(0xA55547801EB331FC) void task_go_to_coord_and_aim_at_hated_entities_near_coord(Ped pedHandle, vector3 goToLocation, vector3 focusLocation, float speed, bool shootAtEnemies, float distanceToStopAt, float noRoadsDistance, bool unkTrue, int unkFlag, int aimingFlag, Hash firingPattern)l
extern _native64(0x04701832B739DCE5) void task_go_to_entity_while_aiming_at_coord(any p0, any p1, float p2, float p3, float p4, float p5, bool p6, float p7, float p8, bool p9, bool p10, any p11)l
extern _native64(0x97465886D35210E9) void task_go_to_entity_while_aiming_at_entity(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, bool shootatEntity, float p5, float p6, bool p7, bool p8, Hash firingPattern)l
extern _native64(0x8C825BDC7741D37C) void set_high_fall_task(Ped ped, any p1, any p2, any p3)l
extern _native64(0x9EEFB62EB27B5792) void request_waypoint_recording(const char* name)l
extern _native64(0xCB4E8BE8A0063C5D) bool get_is_waypoint_recording_loaded(const char* name)l
extern _native64(0xFF1B8B4AA1C25DC8) void remove_waypoint_recording(const char* name)l
extern _native64(0x5343532C01A07234) bool waypoint_recording_get_num_points(const char* name, int* points)l
extern _native64(0x2FB897405C90B361) bool waypoint_recording_get_coord(const char* name, int point, vector3* coord)l
extern _native64(0x005622AEBC33ACA9) float waypoint_recording_get_speed_at_point(const char* name, int point)l
extern _native64(0xB629A298081F876F) bool waypoint_recording_get_closest_waypoint(const char* name, vector3 vec, int* point)l
extern _native64(0x0759591819534F7B) void task_follow_waypoint_recording(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0xE03B3F2D3DC59B64) bool is_waypoint_playback_going_on_for_ped(any p0)l
extern _native64(0x2720AAA75001E094) any get_ped_waypoint_progress(any p0)l
extern _native64(0xE6A877C64CAF1BC5) float get_ped_waypoint_distance(any p0)l
extern _native64(0xED98E10B0AFCE4B4) any set_ped_waypoint_route_offset(any p0, any p1, any p2, any p3)l
extern _native64(0xA5B769058763E497) float get_waypoint_distance_along_route(const char* p0, int p1)l
extern _native64(0x701375A7D43F01CB) bool waypoint_playback_get_is_paused(any p0)l
extern _native64(0x0F342546AA06FED5) void waypoint_playback_pause(any p0, bool p1, bool p2)l
extern _native64(0x244F70C84C547D2D) void waypoint_playback_resume(any p0, bool p1, any p2, any p3)l
extern _native64(0x7D7D2B47FA788E85) void waypoint_playback_override_speed(any p0, float p1, bool p2)l
extern _native64(0x6599D834B12D0800) void waypoint_playback_use_default_speed(any p0)l
extern _native64(0x5A353B8E6B1095B5) void use_waypoint_recording_as_assisted_movement_route(any* p0, bool p1, float p2, float p3)l
extern _native64(0x20E330937C399D29) void waypoint_playback_start_aiming_at_ped(any p0, any p1, bool p2)l
extern _native64(0x8968400D900ED8B3) void waypoint_playback_start_aiming_at_coord(any p0, float p1, float p2, float p3, bool p4)l
extern _native64(0xE70BA7B90F8390DC) void unk_0xE70BA7B90F8390DC(any p0, any p1, bool p2, any p3)l
extern _native64(0x057A25CFCC9DB671) void waypoint_playback_start_shooting_at_coord(any p0, float p1, float p2, float p3, bool p4, any p5)l
extern _native64(0x47EFA040EBB8E2EA) void waypoint_playback_stop_aiming_or_shooting(any p0)l
extern _native64(0x817268968605947A) void assisted_movement_request_route(const char* route)l
extern _native64(0x3548536485DD792B) void assisted_movement_remove_route(const char* route)l
extern _native64(0x60F9A4393A21F741) bool assisted_movement_is_route_loaded(const char* route)l
extern _native64(0xD5002D78B7162E1B) void assisted_movement_set_route_properties(const char* route, int props)l
extern _native64(0x13945951E16EF912) void assisted_movement_override_load_distance_this_frame(float dist)l
extern _native64(0x3123FAA6DB1CF7ED) void task_vehicle_follow_waypoint_recording(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, bool p8, float p9)l
extern _native64(0xF5134943EA29868C) bool is_waypoint_playback_going_on_for_vehicle(any p0)l
extern _native64(0x9824CFF8FC66E159) any get_vehicle_waypoint_progress(any p0)l
extern _native64(0x416B62AC8B9E5BBD) any get_vehicle_waypoint_target_point(any p0)l
extern _native64(0x8A4E6AC373666BC5) void vehicle_waypoint_playback_pause(any p0)l
extern _native64(0xDC04FCAA7839D492) void vehicle_waypoint_playback_resume(any p0)l
extern _native64(0x5CEB25A7D2848963) void vehicle_waypoint_playback_use_default_speed(any p0)l
extern _native64(0x121F0593E0A431D7) void vehicle_waypoint_playback_override_speed(any p0, float p1)l
extern _native64(0x90D2156198831D69) void task_set_blocking_of_non_temporary_events(Ped ped, bool toggle)l
extern _native64(0x4F056E1AFFEF17AB) void task_force_motion_state(Ped ped, Hash state, bool p2)l
extern _native64(0x2D537BA194896636) void _task_move_network(Ped ped, const char* task, float multiplier, bool p3, const char* animDict, int flags)l
extern _native64(0xD5B35BEA41919ACB) void _task_move_network_advanced(Ped ped, const char* p1, float p2, float p3, float p4, float p5, float p6, float p7, any p8, float p9, bool p10, const char* animDict, int flags)l
extern _native64(0x921CE12C489C4C41) bool unk_0x921CE12C489C4C41(int PlayerID)l
extern _native64(0x30ED88D5E0C56A37) bool unk_0x30ED88D5E0C56A37(any p0)l
extern _native64(0xD01015C7316AE176) any unk_0xD01015C7316AE176(Ped ped, const char* p1)l
extern _native64(0xAB13A5565480B6D9) any unk_0xAB13A5565480B6D9(any p0, any p1)l
extern _native64(0x717E4D1F2048376D) const char* unk_0x717E4D1F2048376D(Ped ped)l
extern _native64(0xD5BB4025AE449A4E) void unk_0xD5BB4025AE449A4E(Ped p0, const char* p1, float p2)l
extern _native64(0xB0A6CFD2C69C1088) void unk_0xB0A6CFD2C69C1088(Ped p0, any* p1, bool p2)l
extern _native64(0xA7FFBA498E4AAF67) bool unk_0xA7FFBA498E4AAF67(any p0, const char* p1)l
extern _native64(0xB4F47213DF45A64C) bool unk_0xB4F47213DF45A64C(any p0, any* p1)l
extern _native64(0x349CE7B56DAFD95C) bool is_move_blend_ratio_still(Ped ped)l
extern _native64(0xF133BBBE91E1691F) bool is_move_blend_ratio_walking(Ped ped)l
extern _native64(0xD4D8636C0199A939) bool is_move_blend_ratio_running(Ped ped)l
extern _native64(0x24A2AD74FA9814E2) bool is_move_blend_ratio_sprinting(Ped ped)l
extern _native64(0xAC29253EEF8F0180) bool is_ped_still(Ped ped)l
extern _native64(0xDE4C184B2B9B071A) bool is_ped_walking(Ped ped)l
extern _native64(0xC5286FFC176F28A2) bool is_ped_running(Ped ped)l
extern _native64(0x57E457CD2C0FC168) bool is_ped_sprinting(Ped ped)l
extern _native64(0xE45B7F222DE47E09) bool is_ped_strafing(Ped ped)l
extern _native64(0xEEA929141F699854) void task_synchronized_scene(Ped ped, int scene, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, any p9)l
extern _native64(0x2047C02158D6405A) void task_sweep_aim_entity(Ped ped, const char* anim, const char* p2, const char* p3, const char* p4, int p5, Vehicle vehicle, float p7, float p8)l
extern _native64(0xE4973DBDBE6E44B3) void update_task_sweep_aim_entity(Ped ped, Entity entity)l
extern _native64(0x7AFE8FDC10BC07D2) void task_sweep_aim_position(any p0, any* p1, any* p2, any* p3, any* p4, any p5, float p6, float p7, float p8, float p9, float p10)l
extern _native64(0xBB106883F5201FC4) void update_task_sweep_aim_position(any p0, float p1, float p2, float p3)l
extern _native64(0xF3B9A78A178572B1) void task_arrest_ped(Ped ped, Ped target)l
extern _native64(0x3DC52677769B4AE0) bool is_ped_running_arrest_task(Ped ped)l
extern _native64(0x90A09F3A45FED688) bool is_ped_being_arrested(Ped ped)l
extern _native64(0x67406F2C8F87FC4F) void uncuff_ped(Ped ped)l
extern _native64(0x74E559B3BC910685) bool is_ped_cuffed(Ped ped)l
#pragma endregion //}
#pragma region GAMEPLAY //{
extern _native64(0x8B3CA62B1EF19B62) int get_allocated_stack_size()l
extern _native64(0xFEAD16FC8F9DFC0F) int _get_free_stack_slots_count(int stackSize)l
extern _native64(0x444D98F98C11F3EC) void set_random_seed(int time)l
extern _native64(0x1D408577D440E81E) void set_time_scale(float time)l
extern _native64(0xC4301E5121A0ED73) void set_mission_flag(bool toggle)l
extern _native64(0xA33CDCCDA663159E) bool get_mission_flag()l
extern _native64(0x971927086CFD2158) void set_random_event_flag(bool p0)l
extern _native64(0xD2D57F1D764117B1) any get_random_event_flag()l
extern _native64(0x24DA7D7667FD7B09) const char* _get_global_char_buffer()l
extern _native64(0x4DCDF92BF64236CD) void unk_0x4DCDF92BF64236CD(any p0, any p1)l
extern _native64(0x31125FD509D9043F) void unk_0x31125FD509D9043F(any p0)l
extern _native64(0xEBD3205A207939ED) void unk_0xEBD3205A207939ED(any p0)l
extern _native64(0x97E7E2C04245115B) void unk_0x97E7E2C04245115B(any p0)l
extern _native64(0xEB078CA2B5E82ADD) void unk_0xEB078CA2B5E82ADD(any p0, any p1)l
extern _native64(0x703CC7F60CBB2B57) void unk_0x703CC7F60CBB2B57(any p0)l
extern _native64(0x8951EB9C6906D3C8) void unk_0x8951EB9C6906D3C8()l
extern _native64(0xBA4B8D83BDC75551) void unk_0xBA4B8D83BDC75551(any p0)l
extern _native64(0xE8B9C0EC9E183F35) any unk_0xE8B9C0EC9E183F35()l
extern _native64(0x65D2EBB47E1CEC21) void unk_0x65D2EBB47E1CEC21(bool p0)l
extern _native64(0x6F2135B6129620C1) void unk_0x6F2135B6129620C1(bool p0)l
extern _native64(0x8D74E26F54B4E5C3) void unk_0x8D74E26F54B4E5C3(const char* p0)l
extern _native64(0xB335F761606DB47C) bool unk_0xB335F761606DB47C(any* p0, any* p1, any p2, bool p3)l
extern _native64(0x564B884A05EC45A3) Hash get_prev_weather_type_hash_name()l
extern _native64(0x711327CD09C8F162) Hash get_next_weather_type_hash_name()l
extern _native64(0x44F28F86433B10A9) bool is_prev_weather_type(const char* weatherType)l
extern _native64(0x2FAA3A30BEC0F25D) bool is_next_weather_type(const char* weatherType)l
extern _native64(0x704983DF373B198F) void set_weather_type_persist(const char* weatherType)l
extern _native64(0xED712CA327900C8A) void set_weather_type_now_persist(const char* weatherType)l
extern _native64(0x29B487C359E19889) void set_weather_type_now(const char* weatherType)l
extern _native64(0xFB5045B7C42B75BF) void _set_weather_type_over_time(const char* weatherType, float time)l
extern _native64(0x8B05F884CF7E8020) void set_random_weather_type()l
extern _native64(0xCCC39339BEF76CF5) void clear_weather_type_persist()l
extern _native64(0xF3BBE884A14BB413) void _get_weather_type_transition(any* p0, any* p1, float* progress_or_time)l
extern _native64(0x578C752848ECFA0C) void _set_weather_type_transition(Hash weatherType1, Hash weatherType2, float percentWeather2)l
extern _native64(0xA43D5C6FE51ADBEF) void set_override_weather(const char* weatherType)l
extern _native64(0x338D2E3477711050) void clear_override_weather()l
extern _native64(0xB8F87EAD7533B176) void unk_0xB8F87EAD7533B176(float p0)l
extern _native64(0xC3EAD29AB273ECE8) void unk_0xC3EAD29AB273ECE8(float p0)l
extern _native64(0xA7A1127490312C36) void unk_0xA7A1127490312C36(float p0)l
extern _native64(0x31727907B2C43C55) void unk_0x31727907B2C43C55(float p0)l
extern _native64(0x405591EC8FD9096D) void unk_0x405591EC8FD9096D(float p0)l
extern _native64(0xF751B16FB32ABC1D) void unk_0xF751B16FB32ABC1D(float p0)l
extern _native64(0xB3E6360DDE733E82) void unk_0xB3E6360DDE733E82(float p0)l
extern _native64(0x7C9C0B1EEB1F9072) void unk_0x7C9C0B1EEB1F9072(float p0)l
extern _native64(0x6216B116083A7CB4) void unk_0x6216B116083A7CB4(float p0)l
extern _native64(0x9F5E6BB6B34540DA) void unk_0x9F5E6BB6B34540DA(float p0)l
extern _native64(0xB9854DFDE0D833D6) void unk_0xB9854DFDE0D833D6(float p0)l
extern _native64(0xC54A08C85AE4D410) void unk_0xC54A08C85AE4D410(float p0)l
extern _native64(0xA8434F1DFF41D6E7) void unk_0xA8434F1DFF41D6E7(float p0)l
extern _native64(0xC3C221ADDDE31A11) void unk_0xC3C221ADDDE31A11(float p0)l
extern _native64(0xAC3A74E8384A9919) void set_wind(float speed)l
extern _native64(0xEE09ECEDBABE47FC) void set_wind_speed(float speed)l
extern _native64(0xA8CF1CC0AFCD3F12) float get_wind_speed()l
extern _native64(0xEB0F4468467B4528) void set_wind_direction(float direction)l
extern _native64(0x1F400FEF721170DA) vector3 get_wind_direction()l
extern _native64(0x643E26EA6E024D92) void _set_rain_fx_intensity(float intensity)l
extern _native64(0x96695E368AD855F3) any get_rain_level()l
extern _native64(0xC5868A966E5BE3AE) any get_snow_level()l
extern _native64(0xF6062E089251C898) void _create_lightning_thunder()l
extern _native64(0x02DEAAC8F8EA7FE7) void unk_0x02DEAAC8F8EA7FE7(const char* p0)l
extern _native64(0x11B56FBBF7224868) void unk_0x11B56FBBF7224868(const char* p0)l
extern _native64(0xFC4842A34657BFCB) void _set_cloud_hat_transition(const char* type, float transitionTime)l
extern _native64(0xA74802FB8D0B7814) void unk_0xA74802FB8D0B7814(const char* p0, float p1)l
extern _native64(0x957E790EA1727B64) void _clear_cloud_hat()l
extern _native64(0xF36199225D6D8C86) void _set_cloud_hat_opacity(float opacity)l
extern _native64(0x20AC25E781AE4A84) float _get_cloud_hat_opacity()l
extern _native64(0x9CD27B0045628463) int get_game_timer()l
extern _native64(0x15C40837039FFAF7) float get_frame_time()l
extern _native64(0xE599A503B3837E1B) float unk_0xE599A503B3837E1B()l
extern _native64(0xFC8202EFC642E6F2) int get_frame_count()l
extern _native64(0x313CE5879CEB6FCD) float get_random_float_in_range(float startRange, float endRange)l
extern _native64(0xD53343AA4FB7DD28) int get_random_int_in_range(int startRange, int endRange)l
extern _native64(0xC906A7DAB05C8D2B) bool get_ground_z_for_3d_coord(vector3 vec, float* groundZ, bool unk)l
extern _native64(0x8BDC7BFC57A81E76) bool unk_0x8BDC7BFC57A81E76(vector3 vec, float* p3, vector3* p4)l
extern _native64(0xC843060B5765DCE7) float asin(float p0)l
extern _native64(0x1D08B970013C34B6) float acos(float p0)l
extern _native64(0x632106CC96E82E91) float tan(float p0)l
extern _native64(0xA9D1795CD5043663) float atan(float p0)l
extern _native64(0x8927CBF9D22261A4) float atan2(float p0, float p1)l
extern _native64(0xF1B760881820C952) float get_distance_between_coords(vector3 vec_1, vector3 vec_2, bool useZ)l
extern _native64(0x186FC4BE848E1C92) float get_angle_between_2d_vectors(vector2 vector_1, vector2 vector_2)l
extern _native64(0x2FFB6B224F4B2926) float get_heading_from_vector_2d(vector2 d)l
extern _native64(0x7F8F6405F4777AF6) float unk_0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9)l
extern _native64(0x21C235BC64831E5A) vector3 unk_0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9)l
extern _native64(0xF56DFB7B61BE7276) bool unk_0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, any* p12)l
extern _native64(0x933D6A9EEC1BACD0) void set_bit(int* address, int offset)l
extern _native64(0xE80492A9AC099A93) void clear_bit(int* address, int offset)l
extern _native64(0xD24D37CC275948CC) Hash get_hash_key(const char* value)l
extern _native64(0xF2F6A2FA49278625) void unk_0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, any* p9, any* p10, any* p11, any* p12)l
extern _native64(0xA61B4DF533DCB56E) bool is_area_occupied(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9, bool p10, any p11, bool p12)l
extern _native64(0xADCDE75E1C60F32D) bool is_position_occupied(vector3 vec, float range, bool p4, bool p5, bool p6, bool p7, bool p8, any p9, bool p10)l
extern _native64(0xE54E209C35FFA18D) bool is_point_obscured_by_a_mission_entity(float p0, float p1, float p2, float p3, float p4, float p5, any p6)l
extern _native64(0xA56F01F3765B93A0) void clear_area(vector3 vec, float radius, bool p4, bool ignoreCopCars, bool ignoreObjects, bool p7)l
extern _native64(0x957838AAF91BD12D) void _clear_area_of_everything(vector3 vec, float radius, bool p4, bool p5, bool p6, bool p7)l
extern _native64(0x01C7B9B38428AEB6) void clear_area_of_vehicles(vector3 vec, float radius, bool p4, bool p5, bool p6, bool p7, bool p8)l
extern _native64(0x11DB3500F042A8AA) void clear_angled_area_of_vehicles(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, bool p9, bool p10, bool p11)l
extern _native64(0xDD9B9B385AAC7F5B) void clear_area_of_objects(vector3 vec, float radius, int flags)l
extern _native64(0xBE31FD6CE464AC59) void clear_area_of_peds(vector3 vec, float radius, int flags)l
extern _native64(0x04F8FC8FCF58F88D) void clear_area_of_cops(vector3 vec, float radius, int flags)l
extern _native64(0x0A1CB9094635D1A6) void clear_area_of_projectiles(vector3 vec, float radius, int flags)l
extern _native64(0x7EC6F9A478A6A512) void unk_0x7EC6F9A478A6A512()l
extern _native64(0xC9BF75D28165FF77) void set_save_menu_active(bool unk)l
extern _native64(0x397BAA01068BAA96) int unk_0x397BAA01068BAA96()l
extern _native64(0xB938B7E6D3C0620C) void set_credits_active(bool toggle)l
extern _native64(0xB51B9AB9EF81868C) void unk_0xB51B9AB9EF81868C(bool toggle)l
extern _native64(0x075F1D57402C93BA) any unk_0x075F1D57402C93BA()l
extern _native64(0x9DC711BC69C548DF) void terminate_all_scripts_with_this_name(const char* scriptName)l
extern _native64(0x9243BAC96D64C050) void network_set_script_is_safe_for_network_game()l
extern _native64(0x1F464EF988465A81) int add_hospital_restart(vector3 vec, float p3, any p4)l
extern _native64(0xC8535819C450EBA8) void disable_hospital_restart(int hospitalIndex, bool toggle)l
extern _native64(0x452736765B31FC4B) any add_police_restart(float p0, float p1, float p2, float p3, any p4)l
extern _native64(0x23285DED6EBD7EA3) void disable_police_restart(int policeIndex, bool toggle)l
extern _native64(0x706B5EDCAA7FA663) void _set_custom_respawn_position(vector3 vec, float heading)l
extern _native64(0xA2716D40842EAF79) void _set_next_respawn_to_custom()l
extern _native64(0x2C2B3493FBF51C71) void _disable_automatic_respawn(bool disableRespawn)l
extern _native64(0x21FFB63D8C615361) void ignore_next_restart(bool toggle)l
extern _native64(0x4A18E01DF2C87B86) void set_fade_out_after_death(bool toggle)l
extern _native64(0x1E0B4DC0D990A4E7) void set_fade_out_after_arrest(bool toggle)l
extern _native64(0xDA66D2796BA33F12) void set_fade_in_after_death_arrest(bool toggle)l
extern _native64(0xF3D78F59DFE18D79) void set_fade_in_after_load(bool toggle)l
extern _native64(0xC0714D0A7EEECA54) any register_save_house(float p0, float p1, float p2, float p3, any* p4, any p5, any p6)l
extern _native64(0x4F548CABEAE553BC) void set_save_house(any p0, bool p1, bool p2)l
extern _native64(0x1162EA8AE9D24EEA) bool override_save_house(bool p0, float p1, float p2, float p3, float p4, bool p5, float p6, float p7)l
extern _native64(0xA4A0065E39C9F25C) any unk_0xA4A0065E39C9F25C(any p0, any p1, any p2, any p3)l
extern _native64(0x50EEAAD86232EE55) void do_auto_save()l
extern _native64(0x6E04F06094C87047) any unk_0x6E04F06094C87047()l
extern _native64(0x69240733738C19A0) bool is_auto_save_in_progress()l
extern _native64(0x2107A3773771186D) any unk_0x2107A3773771186D()l
extern _native64(0x06462A961E94B67C) void unk_0x06462A961E94B67C()l
extern _native64(0xE0E500246FF73D66) void begin_replay_stats(any p0, any p1)l
extern _native64(0x69FE6DC87BD2A5E9) void unk_0x69FE6DC87BD2A5E9(any p0)l
extern _native64(0xA23E821FBDF8A5F2) void end_replay_stats()l
extern _native64(0xD642319C54AADEB6) any unk_0xD642319C54AADEB6()l
extern _native64(0x5B1F2E327B6B6FE1) any unk_0x5B1F2E327B6B6FE1()l
extern _native64(0x2B626A0150E4D449) any unk_0x2B626A0150E4D449()l
extern _native64(0xDC9274A7EF6B2867) any unk_0xDC9274A7EF6B2867()l
extern _native64(0x8098C8D6597AAE18) any unk_0x8098C8D6597AAE18(any p0)l
extern _native64(0x1B1AB132A16FDA55) void clear_replay_stats()l
extern _native64(0x72DE52178C291CB5) any unk_0x72DE52178C291CB5()l
extern _native64(0x44A0BDC559B35F6E) any unk_0x44A0BDC559B35F6E()l
extern _native64(0xEB2104E905C6F2E9) any unk_0xEB2104E905C6F2E9()l
extern _native64(0x2B5E102E4A42F2BF) any unk_0x2B5E102E4A42F2BF()l
extern _native64(0x8A75CE2956274ADD) bool is_memory_card_in_use()l
extern _native64(0x867654CBC7606F2C) void shoot_single_bullet_between_coords(vector3 vec_1, vector3 vec_2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed)l
extern _native64(0xE3A7742E0B7A2F8B) void unk_0xE3A7742E0B7A2F8B(vector3 vec_1, vector3 vec_2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed, Entity entity)l
extern _native64(0xBFE5756E7407064A) void unk_0xBFE5756E7407064A(vector3 vec_1, vector3 vec_2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed, Entity entity, bool p14, bool p15, bool p16, bool p17)l
extern _native64(0x03E8D3D5F549087A) void get_model_dimensions(Hash modelHash, vector3* minimum, vector3* maximum)l
extern _native64(0x1454F2448DE30163) void set_fake_wanted_level(int fakeWantedLevel)l
extern _native64(0x4C9296CBCD1B971E) int get_fake_wanted_level()l
extern _native64(0xA921AA820C25702F) bool is_bit_set(int address, int offset)l
extern _native64(0xF14878FC50BEC6EE) void using_mission_creator(bool toggle)l
extern _native64(0xDEA36202FC3382DF) void unk_0xDEA36202FC3382DF(bool p0)l
extern _native64(0x19E00D7322C6F85B) void set_minigame_in_progress(bool toggle)l
extern _native64(0x2B4A15E44DE0F478) bool is_minigame_in_progress()l
extern _native64(0x7B30F65D7B710098) bool is_this_a_minigame_script()l
extern _native64(0x61A23B7EDA9BDA24) bool is_sniper_inverted()l
extern _native64(0xD3D15555431AB793) any unk_0xD3D15555431AB793()l
extern _native64(0xC488FF2356EA7791) int get_profile_setting(int profileSetting)l
extern _native64(0x0C515FAB3FF9EA92) bool are_strings_equal(const char* string1, const char* string2)l
extern _native64(0x1E34710ECD4AB0EB) int compare_strings(const char* str1, const char* str2, bool matchCase, int maxLength)l
extern _native64(0xF0D31AD191A74F87) int absi(int value)l
extern _native64(0x73D57CFFDD12C355) float absf(float value)l
extern _native64(0xFEFCF11B01287125) bool is_sniper_bullet_in_area(vector3 vec_1, vector3 vec_2)l
extern _native64(0x5270A8FBC098C3F8) bool is_projectile_in_area(vector3 vec_1, vector3 vec_2, bool ownedByPlayer)l
extern _native64(0x2E0DC353342C4A6D) bool is_projectile_type_in_area(vector3 vec_1, vector3 vec_2, int type, bool p7)l
extern _native64(0xF0BC12401061DEA0) bool is_projectile_type_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6, any p7, bool p8)l
extern _native64(0x34318593248C8FB2) bool unk_0x34318593248C8FB2(float p0, float p1, float p2, any p3, float p4, bool p5)l
extern _native64(0x8D7A43EC6A5FEA45) any unk_0x8D7A43EC6A5FEA45(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7, any p8)l
extern _native64(0xDFB4138EEFED7B81) bool unk_0xDFB4138EEFED7B81(Ped ped, Hash weaponHash, float radius, Entity* entity, bool p4)l
extern _native64(0x82FDE6A57EE4EE44) any unk_0x82FDE6A57EE4EE44(Ped ped, Hash weaponhash, float p2, float p3, float p4, bool p5)l
extern _native64(0x1A8B5F3C01E2B477) bool is_bullet_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7)l
extern _native64(0x3F2023999AD51C1F) bool is_bullet_in_area(float p0, float p1, float p2, float p3, bool p4)l
extern _native64(0xDE0F6D7450D37351) bool is_bullet_in_box(float p0, float p1, float p2, float p3, float p4, float p5, bool p6)l
extern _native64(0x9870ACFB89A90995) bool has_bullet_impacted_in_area(vector3 vec, float p3, bool p4, bool p5)l
extern _native64(0xDC8C5D7CFEAB8394) bool has_bullet_impacted_in_box(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7)l
extern _native64(0xA72BC0B675B1519E) bool is_orbis_version()l
extern _native64(0x4D982ADB1978442D) bool is_durango_version()l
extern _native64(0xF6201B4DAF662A9D) bool is_xbox360_version()l
extern _native64(0xCCA1072C29D096C2) bool is_ps3_version()l
extern _native64(0x48AF36444B965238) bool is_pc_version()l
extern _native64(0x9F1935CA1F724008) bool is_aussie_version()l
extern _native64(0xF22B6C47C6EAB066) bool is_string_null(const char* string)l
extern _native64(0xCA042B6957743895) bool is_string_null_or_empty(const char* string)l
extern _native64(0x5A5F40FE637EB584) bool string_to_int(const char* string, int* outInteger)l
extern _native64(0x8EF07E15701D61ED) void set_bits_in_range(int* var, int rangeStart, int rangeEnd, int p3)l
extern _native64(0x53158863FCC0893A) int get_bits_in_range(int var, int rangeStart, int rangeEnd)l
extern _native64(0x1A992DA297A4630C) int add_stunt_jump(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, any p15, any p16)l
extern _native64(0xBBE5D803A5360CBF) int add_stunt_jump_angled(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, any p17, any p18)l
extern _native64(0xDC518000E39DAE1F) void delete_stunt_jump(int p0)l
extern _native64(0xE369A5783B866016) void enable_stunt_jump_set(int p0)l
extern _native64(0xA5272EBEDD4747F6) void disable_stunt_jump_set(int p0)l
extern _native64(0xD79185689F8FD5DF) void unk_0xD79185689F8FD5DF(bool p0)l
extern _native64(0x7A3F19700A4D0525) bool is_stunt_jump_in_progress()l
extern _native64(0x2272B0A1343129F4) bool is_stunt_jump_message_showing()l
extern _native64(0x996DD1E1E02F1008) any unk_0x996DD1E1E02F1008()l
extern _native64(0x6856EC3D35C81EA4) any unk_0x6856EC3D35C81EA4()l
extern _native64(0xE6B7B0ACD4E4B75E) void cancel_stunt_jump()l
extern _native64(0x577D1284D6873711) void set_game_paused(bool toggle)l
extern _native64(0xAA391C728106F7AF) void set_this_script_can_be_paused(bool toggle)l
extern _native64(0xB98236CAAECEF897) void set_this_script_can_remove_blips_created_by_any_script(bool toggle)l
extern _native64(0x071E2A839DE82D90) bool _has_button_combination_just_been_entered(Hash hash, int amount)l
extern _native64(0x557E43C447E700A8) bool _has_cheat_string_just_been_entered(Hash hash)l
extern _native64(0x9BAE5AD2508DF078) void _use_freemode_map_behavior(bool toggle)l
extern _native64(0xC5F0A8EBD3F361CE) void _set_unk_map_flag(int flag)l
extern _native64(0x7EA2B6AF97ECA6ED) bool is_frontend_fading()l
extern _native64(0x7472BB270D7B4F3E) void populate_now()l
extern _native64(0xCBAD6729F7B1F4FC) int get_index_of_current_level()l
extern _native64(0x740E14FAD5842351) void set_gravity_level(int level)l
extern _native64(0xA9575F812C6A7997) void start_save_data(any* p0, any p1, bool p2)l
extern _native64(0x74E20C9145FB66FD) void stop_save_data()l
extern _native64(0xA09F896CE912481F) any unk_0xA09F896CE912481F(bool p0)l
extern _native64(0x34C9EE5986258415) void register_int_to_save(any* p0, const char* name)l
extern _native64(0xA735353C77334EA0) void unk_0xA735353C77334EA0(any* p0, any* p1)l
extern _native64(0x10C2FA78D0E128A1) void register_enum_to_save(any* p0, const char* name)l
extern _native64(0x7CAEC29ECB5DFEBB) void register_float_to_save(any* p0, const char* name)l
extern _native64(0xC8F4131414C835A1) void register_bool_to_save(any* p0, const char* name)l
extern _native64(0xEDB1232C5BEAE62F) void register_text_label_to_save(any* p0, const char* name)l
extern _native64(0x6F7794F28C6B2535) void unk_0x6F7794F28C6B2535(any* p0, const char* name)l
extern _native64(0x48F069265A0E4BEC) void unk_0x48F069265A0E4BEC(any* p0, const char* name)l
extern _native64(0x8269816F6CFD40F8) void unk_0x8269816F6CFD40F8(any* p0, const char* name)l
extern _native64(0xFAA457EF263E8763) void unk_0xFAA457EF263E8763(any* p0, const char* name)l
extern _native64(0xBF737600CDDBEADD) void _start_save_struct(any* p0, int p1, const char* structName)l
extern _native64(0xEB1774DF12BB9F12) void stop_save_struct()l
extern _native64(0x60FE567DF1B1AF9D) void _start_save_array(any* p0, int p1, const char* arrayName)l
extern _native64(0x04456F95153C6BE4) void stop_save_array()l
extern _native64(0xDC0F817884CDD856) void enable_dispatch_service(int dispatchType, bool toggle)l
extern _native64(0x9B2BD3773123EA2F) void unk_0x9B2BD3773123EA2F(int type, bool toggle)l
extern _native64(0xEB4A0C2D56441717) int unk_0xEB4A0C2D56441717(int p0)l
extern _native64(0x3F892CAF67444AE7) bool create_incident(int incidentType, vector3 vec, int p5, float radius, int* outIncidentID)l
extern _native64(0x05983472F0494E60) bool create_incident_with_entity(int incidentType, Ped ped, int amountOfPeople, float radius, int* outIncidentID)l
extern _native64(0x556C1AA270D5A207) void delete_incident(int incidentId)l
extern _native64(0xC8BC6461E629BEAA) bool is_incident_valid(int incidentId)l
extern _native64(0xB08B85D860E7BA3C) void unk_0xB08B85D860E7BA3C(any p0, any p1, any p2)l
extern _native64(0xD261BA3E7E998072) void unk_0xD261BA3E7E998072(any p0, float p1)l
extern _native64(0x6874E2190B0C1972) bool find_spawn_point_in_direction(vector3 vec_1, vector3 vec_2, float distance, vector3* spawnPoint)l
extern _native64(0x67F6413D3220E18D) any unk_0x67F6413D3220E18D(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7, any p8)l
extern _native64(0x1327E2FE9746BAEE) bool unk_0x1327E2FE9746BAEE(any p0)l
extern _native64(0xB129E447A2EDA4BF) void unk_0xB129E447A2EDA4BF(any p0, bool p1)l
extern _native64(0x32C7A7E8C43A1F80) any unk_0x32C7A7E8C43A1F80(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7)l
extern _native64(0xE6869BECDD8F2403) void unk_0xE6869BECDD8F2403(any p0, bool p1)l
extern _native64(0x28A04B411933F8A6) void enable_tennis_mode(Ped ped, bool toggle, bool p2)l
extern _native64(0x5D5479D115290C3F) bool is_tennis_mode(Ped ped)l
extern _native64(0xE266ED23311F24D4) void unk_0xE266ED23311F24D4(any p0, any* p1, any* p2, float p3, float p4, bool p5)l
extern _native64(0x17DF68D720AA77F8) bool unk_0x17DF68D720AA77F8(any p0)l
extern _native64(0x19BFED045C647C49) bool unk_0x19BFED045C647C49(any p0)l
extern _native64(0xE95B0C7D5BA3B96B) bool unk_0xE95B0C7D5BA3B96B(any p0)l
extern _native64(0x8FA9C42FC5D7C64B) void unk_0x8FA9C42FC5D7C64B(any p0, any p1, float p2, float p3, float p4, bool p5)l
extern _native64(0x54F157E0336A3822) void unk_0x54F157E0336A3822(any p0, const char* p1, float p2)l
extern _native64(0xD10F442036302D50) void unk_0xD10F442036302D50(any p0, any p1, any p2)l
extern _native64(0x77A84429DD9F0A15) void reset_dispatch_ideal_spawn_distance()l
extern _native64(0x6FE601A64180D423) void set_dispatch_ideal_spawn_distance(float p0)l
extern _native64(0x44F7CBC1BEB3327D) void set_dispatch_time_between_spawn_attempts(any p0, float p1)l
extern _native64(0x48838ED9937A15D1) void set_dispatch_time_between_spawn_attempts_multiplier(any p0, float p1)l
extern _native64(0x918C7B2D2FF3928B) any unk_0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6)l
extern _native64(0x2D4259F1FEB81DA9) any unk_0x2D4259F1FEB81DA9(float p0, float p1, float p2, float p3)l
extern _native64(0x264AC28B01B353A5) void remove_dispatch_spawn_blocking_area(any p0)l
extern _native64(0xAC7BFD5C1D83EA75) void reset_dispatch_spawn_blocking_areas()l
extern _native64(0xD9F692D349249528) void unk_0xD9F692D349249528()l
extern _native64(0xE532EC1A63231B4F) void unk_0xE532EC1A63231B4F(any p0, any p1)l
extern _native64(0xB8721407EE9C3FF6) void unk_0xB8721407EE9C3FF6(any p0, any p1, any p2)l
extern _native64(0xB3CD58CCA6CDA852) void unk_0xB3CD58CCA6CDA852()l
extern _native64(0x2587A48BC88DFADF) void unk_0x2587A48BC88DFADF(bool p0)l
extern _native64(0xCA78CFA0366592FE) void _display_onscreen_keyboard_2(int p0, const char* windowTitle, any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength)l
extern _native64(0x00DC833F2568DBF6) void display_onscreen_keyboard(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength)l
extern _native64(0x0CF2B696BBF945AE) int update_onscreen_keyboard()l
extern _native64(0x8362B09B91893647) const char* get_onscreen_keyboard_result()l
extern _native64(0x3ED1438C1F5C6612) void unk_0x3ED1438C1F5C6612(int p0)l
extern _native64(0xA6A12939F16D85BE) void unk_0xA6A12939F16D85BE(Hash hash, bool p1)l
extern _native64(0x1EAE0A6E978894A2) void unk_0x1EAE0A6E978894A2(int p0, bool p1)l
extern _native64(0xA66C71C98D5F2CFB) any set_explosive_ammo_this_frame(Player player)l
extern _native64(0x11879CDD803D30F4) any set_fire_ammo_this_frame(Player player)l
extern _native64(0xFF1BED81BFDC0FE0) any set_explosive_melee_this_frame(Player player)l
extern _native64(0x57FFF03E423A4C0B) any set_super_jump_this_frame(Player player)l
extern _native64(0x6FDDF453C0C756EC) bool unk_0x6FDDF453C0C756EC()l
extern _native64(0xFB00CA71DA386228) void unk_0xFB00CA71DA386228()l
extern _native64(0x5AA3BEFA29F03AD4) any unk_0x5AA3BEFA29F03AD4()l
extern _native64(0xE3D969D2785FFB5E) void unk_0xE3D969D2785FFB5E()l
extern _native64(0xC0AA53F866B3134D) void _reset_localplayer_state()l
extern _native64(0x0A60017F841A54F2) void unk_0x0A60017F841A54F2(any p0, any p1, any p2, any p3)l
extern _native64(0x1FF6BF9A63E5757F) void unk_0x1FF6BF9A63E5757F()l
extern _native64(0x1BB299305C3E8C13) void unk_0x1BB299305C3E8C13(any p0, any p1, any p2, any p3)l
extern _native64(0x8EF5573A1F801A5C) bool unk_0x8EF5573A1F801A5C(any p0, any* p1, any* p2)l
extern _native64(0x92790862E36C2ADA) void unk_0x92790862E36C2ADA()l
extern _native64(0xC7DB36C24634F52B) void unk_0xC7DB36C24634F52B()l
extern _native64(0x437138B6A830166A) void unk_0x437138B6A830166A()l
extern _native64(0x37DEB0AA183FB6D8) void unk_0x37DEB0AA183FB6D8()l
extern _native64(0xEA2F2061875EED90) any unk_0xEA2F2061875EED90()l
extern _native64(0x3BBBD13E5041A79E) any unk_0x3BBBD13E5041A79E()l
extern _native64(0xA049A5BE0F04F2F8) any unk_0xA049A5BE0F04F2F8()l
extern _native64(0x4750FC27570311EC) any unk_0x4750FC27570311EC()l
extern _native64(0x1B2366C3F2A5C8DF) any unk_0x1B2366C3F2A5C8DF()l
extern _native64(0xEB6891F03362FB12) void _force_social_club_update()l
extern _native64(0x14832BF2ABA53FC5) any unk_0x14832BF2ABA53FC5()l
extern _native64(0xC79AE21974B01FB2) void unk_0xC79AE21974B01FB2()l
extern _native64(0x684A41975F077262) bool unk_0x684A41975F077262()l
extern _native64(0xABB2FA71C83A1B72) any unk_0xABB2FA71C83A1B72()l
extern _native64(0x4EBB7E87AA0DBED4) void _show_ped_in_pause_menu(bool toggle)l
extern _native64(0x9689123E3F213AA5) bool unk_0x9689123E3F213AA5()l
extern _native64(0x9D8D44ADBBA61EF2) void unk_0x9D8D44ADBBA61EF2(bool p0)l
extern _native64(0x23227DF0B2115469) void unk_0x23227DF0B2115469()l
extern _native64(0xD10282B6E3751BA0) any unk_0xD10282B6E3751BA0()l
extern _native64(0x213AEB2B90CBA7AC) void _memmove(void* ptr1, const void* ptr2, int bufferSize64)l
#pragma endregion //}
#pragma region AUDIO //{
extern _native64(0xF9E56683CA8E11A5) void play_ped_ringtone(const char* ringtoneName, Ped ped, bool p2)l
extern _native64(0x1E8E5E20937E3137) bool is_ped_ringtone_playing(Ped ped)l
extern _native64(0x6C5AE23EFA885092) void stop_ped_ringtone(Ped ped)l
extern _native64(0x7497D2CE2C30D24C) bool is_mobile_phone_call_ongoing()l
extern _native64(0xC8B1B2425604CDD0) any unk_0xC8B1B2425604CDD0()l
extern _native64(0xD2C91A0B572AAE56) void create_new_scripted_conversation()l
extern _native64(0xC5EF963405593646) void add_line_to_conversation(int p0, const char* p1, const char* p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9, bool p10, bool p11, bool p12)l
extern _native64(0x95D9F4BC443956E7) void add_ped_to_conversation(any p0, any ped, const char* p2)l
extern _native64(0x33E3C6C6F2F0B506) void unk_0x33E3C6C6F2F0B506(any p0, float p1, float p2, float p3)l
extern _native64(0x892B6AB8F33606F5) void unk_0x892B6AB8F33606F5(any p0, any p1)l
extern _native64(0xB6AE90EDDE95C762) void set_microphone_position(bool p0, vector3 vec_1, vector3 vec_2, vector3 vec_3)l
extern _native64(0x0B568201DD99F0EB) void unk_0x0B568201DD99F0EB(bool p0)l
extern _native64(0x61631F5DF50D1C34) void unk_0x61631F5DF50D1C34(bool p0)l
extern _native64(0x252E5F915EABB675) void start_script_phone_conversation(bool p0, bool p1)l
extern _native64(0x6004BCB0E226AAEA) void preload_script_phone_conversation(bool p0, bool p1)l
extern _native64(0x6B17C62C9635D2DC) void start_script_conversation(bool p0, bool p1, bool p2, bool p3)l
extern _native64(0x3B3CAD6166916D87) void preload_script_conversation(bool p0, bool p1, bool p2, bool p3)l
extern _native64(0x23641AFE870AF385) void start_preloaded_conversation()l
extern _native64(0xE73364DB90778FFA) any unk_0xE73364DB90778FFA()l
extern _native64(0x16754C556D2EDE3D) bool is_scripted_conversation_ongoing()l
extern _native64(0xDF0D54BE7A776737) bool is_scripted_conversation_loaded()l
extern _native64(0x480357EE890C295A) any get_current_scripted_conversation_line()l
extern _native64(0x8530AD776CD72B12) void pause_scripted_conversation(bool p0)l
extern _native64(0x9AEB285D1818C9AC) void restart_scripted_conversation()l
extern _native64(0xD79DEEFB53455EBA) any stop_scripted_conversation(bool p0)l
extern _native64(0x9663FE6B7A61EB00) void skip_to_next_scripted_conversation_line()l
extern _native64(0xA018A12E5C5C2FA6) void interrupt_conversation(any p0, any* p1, any* p2)l
extern _native64(0x8A694D7A68F8DC38) void unk_0x8A694D7A68F8DC38(Ped p0, const char* p1, const char* p2)l
extern _native64(0xAA19F5572C38B564) any unk_0xAA19F5572C38B564(any* p0)l
extern _native64(0xB542DE8C3D1CB210) void unk_0xB542DE8C3D1CB210(bool p0)l
extern _native64(0xC6ED9D5092438D91) void register_script_with_audio(any p0)l
extern _native64(0xA8638BE228D4751A) void unregister_script_with_audio()l
extern _native64(0x7345BDD95E62E0F2) bool request_mission_audio_bank(const char* p0, bool p1)l
extern _native64(0xFE02FFBED8CA9D99) bool request_ambient_audio_bank(const char* p0, bool p1)l
extern _native64(0x2F844A8B08D76685) bool request_script_audio_bank(const char* p0, bool p1)l
extern _native64(0x8F8C0E370AE62F5C) any hint_ambient_audio_bank(any p0, any p1)l
extern _native64(0xFB380A29641EC31A) any hint_script_audio_bank(any p0, any p1)l
extern _native64(0x0EC92A1BF0857187) void release_mission_audio_bank()l
extern _native64(0x65475A218FFAA93D) void release_ambient_audio_bank()l
extern _native64(0x77ED170667F50170) void release_named_script_audio_bank(const char* audioBank)l
extern _native64(0x7A2D8AD0A9EB9C3F) void release_script_audio_bank()l
extern _native64(0x19AF7ED9B9D23058) void unk_0x19AF7ED9B9D23058()l
extern _native64(0x9AC92EED5E4793AB) void unk_0x9AC92EED5E4793AB()l
extern _native64(0x430386FE9BF80B45) int get_sound_id()l
extern _native64(0x353FC880830B88FA) void release_sound_id(int soundId)l
extern _native64(0x7FF4944CC209192D) void play_sound(Player soundId, const char* audioName, const char* audioRef, bool p3, any p4, bool p5)l
extern _native64(0x67C540AA08E4A6F5) void play_sound_frontend(int soundId, const char* audioName, const char* audioRef, bool p3)l
extern _native64(0xCADA5A0D0702381E) void unk_0xCADA5A0D0702381E(const char* p0, const char* soundset)l
extern _native64(0xE65F427EB70AB1ED) void play_sound_from_entity(int soundId, const char* audioName, Entity entity, const char* audioRef, bool p4, any p5)l
extern _native64(0x8D8686B622B88120) void play_sound_from_coord(int soundId, const char* audioName, vector3 vec, const char* audioRef, bool p6, int range, bool p8)l
extern _native64(0xA3B0C41BA5CC0BB5) void stop_sound(int soundId)l
extern _native64(0x2DE3F0A134FFBC0D) int get_network_id_from_sound_id(int soundId)l
extern _native64(0x75262FD12D0A1C84) int get_sound_id_from_network_id(int netId)l
extern _native64(0xAD6B3148A78AE9B6) void set_variable_on_sound(int soundId, any* p1, float p2)l
extern _native64(0x2F9D3834AEB9EF79) void set_variable_on_stream(const char* p0, float p1)l
extern _native64(0xF2A9CDABCEA04BD6) void override_underwater_stream(any* p0, bool p1)l
extern _native64(0x733ADF241531E5C2) void unk_0x733ADF241531E5C2(const char* name, float p1)l
extern _native64(0xFCBDCE714A7C88E5) bool has_sound_finished(int soundId)l
extern _native64(0x8E04FEDD28D42462) void _play_ambient_speech1(Ped ped, const char* speechName, const char* speechParam)l
extern _native64(0xC6941B4A3A8FBBB9) void _play_ambient_speech2(Ped ped, const char* speechName, const char* speechParam)l
extern _native64(0x3523634255FC3318) void _play_ambient_speech_with_voice(Ped p0, const char* speechName, const char* voiceName, const char* speechParam, bool p4)l
extern _native64(0xED640017ED337E45) void _play_ambient_speech_at_coords(const char* p0, const char* p1, float p2, float p3, float p4, const char* p5)l
extern _native64(0x13AD665062541A7E) void override_trevor_rage(any* p0)l
extern _native64(0xE78503B10C4314E0) void reset_trevor_rage()l
extern _native64(0xEA241BB04110F091) void set_player_angry(Ped playerPed, bool disabled)l
extern _native64(0xBC9AE166038A5CEC) void play_pain(Ped ped, int painID, int p1)l
extern _native64(0xD01005D2BA2EB778) void unk_0xD01005D2BA2EB778(any* p0)l
extern _native64(0xDDC635D5B3262C56) void unk_0xDDC635D5B3262C56(any* p0)l
extern _native64(0x6C8065A3B780185B) void set_ambient_voice_name(Ped ped, const char* name)l
extern _native64(0x40CF0D12D142A9E8) void unk_0x40CF0D12D142A9E8(Ped ped)l
extern _native64(0x7CDC8C3B89F661B3) void unk_0x7CDC8C3B89F661B3(Ped playerPed, Hash p1)l
extern _native64(0xA5342D390CDA41D6) void unk_0xA5342D390CDA41D6(any p0, bool p1)l
extern _native64(0x7A73D05A607734C7) void unk_0x7A73D05A607734C7(Ped ped)l
extern _native64(0xB8BEC0CA6F0EDB0F) void stop_current_playing_ambient_speech(Ped ped)l
extern _native64(0x9072C8B49907BFAD) bool is_ambient_speech_playing(Ped p0)l
extern _native64(0xCC9AA18DCC7084F4) bool is_scripted_speech_playing(any p0)l
extern _native64(0x729072355FA39EC9) bool is_any_speech_playing(Ped ped)l
extern _native64(0x49B99BF3FDA89A7A) bool unk_0x49B99BF3FDA89A7A(Ped ped, const char* speechName, bool unk)l
extern _native64(0x049E937F18F4020C) bool is_ped_in_current_conversation(Ped ped)l
extern _native64(0x95D2D383D5396B8A) void set_ped_is_drunk(Ped ped, bool toggle)l
extern _native64(0xEE066C7006C49C0A) void unk_0xEE066C7006C49C0A(any p0, any p1, any* p2)l
extern _native64(0xC265DF9FB44A9FBD) bool unk_0xC265DF9FB44A9FBD(any p0)l
extern _native64(0xCC97B29285B1DC3B) void set_animal_mood(Ped animal, int mood)l
extern _native64(0xB35CE999E8EF317E) bool is_mobile_phone_radio_active()l
extern _native64(0xBF286C554784F3DF) void set_mobile_phone_radio_state(bool state)l
extern _native64(0xE8AF77C4C06ADC93) int get_player_radio_station_index()l
extern _native64(0xF6D733C32076AD03) const char* get_player_radio_station_name()l
extern _native64(0xB28ECA15046CA8B9) const char* get_radio_station_name(int radioStation)l
extern _native64(0xA571991A7FE6CCEB) any get_player_radio_station_genre()l
extern _native64(0xA151A7394A214E65) bool is_radio_retuning()l
extern _native64(0x0626A247D2405330) any unk_0x0626A247D2405330()l
extern _native64(0xFF266D1D0EB1195D) void unk_0xFF266D1D0EB1195D()l
extern _native64(0xDD6BCF9E94425DF9) void unk_0xDD6BCF9E94425DF9()l
extern _native64(0xC69EDA28699D5107) void set_radio_to_station_name(const char* stationName)l
extern _native64(0x1B9C0099CB942AC6) void set_veh_radio_station(Vehicle vehicle, const char* radioStation)l
extern _native64(0xC1805D05E6D4FE10) void unk_0xC1805D05E6D4FE10(Vehicle vehicle)l
extern _native64(0xACF57305B12AF907) void set_emitter_radio_station(const char* emitterName, const char* radioStation)l
extern _native64(0x399D2D3B33F1B8EB) void set_static_emitter_enabled(const char* emitterName, bool toggle)l
extern _native64(0xA619B168B8A8570F) void set_radio_to_station_index(int radioStation)l
extern _native64(0xF7F26C6E9CC9EBB8) void set_frontend_radio_active(bool active)l
extern _native64(0xB165AB7C248B2DC1) void unlock_mission_news_story(int newsStory)l
extern _native64(0x66E49BF55B4B1874) int get_number_of_passenger_voice_variations(any p0)l
extern _native64(0x50B196FC9ED6545B) int get_audible_music_track_text_id()l
extern _native64(0xCD536C4D33DCC900) void play_end_credits_music(bool play)l
extern _native64(0x6DDBBDD98E2E9C25) void skip_radio_forward()l
extern _native64(0x344F393B027E38C3) void freeze_radio_station(const char* radioStation)l
extern _native64(0xFC00454CF60B91DD) void unfreeze_radio_station(const char* radioStation)l
extern _native64(0xC1AA9F53CE982990) void set_radio_auto_unfreeze(bool toggle)l
extern _native64(0x88795F13FACDA88D) void set_initial_player_station(const char* radioStation)l
extern _native64(0x19F21E63AE6EAE4E) void set_user_radio_control_enabled(bool toggle)l
extern _native64(0xB39786F201FEE30B) void set_radio_track(const char* radioStation, const char* radioTrack)l
extern _native64(0xBB6F1CAEC68B0BCE) void set_vehicle_radio_loud(Vehicle vehicle, bool toggle)l
extern _native64(0x032A116663A4D5AC) bool _is_vehicle_radio_loud(Vehicle vehicle)l
extern _native64(0x1098355A16064BB3) void set_mobile_radio_enabled_during_gameplay(bool Toggle)l
extern _native64(0x109697E2FFBAC8A1) bool unk_0x109697E2FFBAC8A1()l
extern _native64(0x5F43D83FD6738741) bool _is_player_vehicle_radio_enabled()l
extern _native64(0x3B988190C0AA6C0B) void set_vehicle_radio_enabled(Vehicle vehicle, bool toggle)l
extern _native64(0x4E404A9361F75BB2) void unk_0x4E404A9361F75BB2(const char* radioStation, const char* p1, bool p2)l
extern _native64(0x1654F24A88A8E3FE) void unk_0x1654F24A88A8E3FE(const char* radioStation)l
extern _native64(0xF1620ECB50E01DE7) int _max_radio_station_index()l
extern _native64(0x8D67489793FF428B) int find_radio_station_index(int station)l
extern _native64(0x774BD811F656A122) void unk_0x774BD811F656A122(const char* radioStation, bool p1)l
extern _native64(0x2C96CDB04FCA358E) void unk_0x2C96CDB04FCA358E(float p0)l
extern _native64(0x031ACB6ABA18C729) void unk_0x031ACB6ABA18C729(const char* radioStation, const char* p1)l
extern _native64(0xF3365489E0DD50F9) void unk_0xF3365489E0DD50F9(any p0, bool p1)l
extern _native64(0xBDA07E5950085E46) void set_ambient_zone_state(any* p0, bool p1, bool p2)l
extern _native64(0x218DD44AAAC964FF) void clear_ambient_zone_state(const char* zoneName, bool p1)l
extern _native64(0x9748FA4DE50CCE3E) void set_ambient_zone_list_state(any* p0, bool p1, bool p2)l
extern _native64(0x120C48C614909FA4) void clear_ambient_zone_list_state(any* p0, bool p1)l
extern _native64(0x1D6650420CEC9D3B) void set_ambient_zone_state_persistent(const char* ambientZone, bool p1, bool p2)l
extern _native64(0xF3638DAE8C4045E1) void set_ambient_zone_list_state_persistent(const char* ambientZone, bool p1, bool p2)l
extern _native64(0x01E2817A479A7F9B) bool is_ambient_zone_enabled(const char* ambientZone)l
extern _native64(0x3B4BF5F0859204D9) void set_cutscene_audio_override(const char* p0)l
extern _native64(0xBCC29F935ED07688) void get_player_headset_sound_alternate(const char* p0, float p1)l
extern _native64(0xDFEBD56D9BD1EB16) any play_police_report(const char* name, float p1)l
extern _native64(0xB4F90FAF7670B16F) void _disable_police_reports()l
extern _native64(0x1B9025BDA76822B6) void blip_siren(Vehicle vehicle)l
extern _native64(0x3CDC1E622CCE0356) void override_veh_horn(Vehicle vehicle, bool mute, int p2)l
extern _native64(0x9D6BFC12B05C6121) bool is_horn_active(Vehicle vehicle)l
extern _native64(0x395BF71085D1B1D9) void set_aggressive_horns(bool toggle)l
extern _native64(0x02E93C796ABD3A97) void unk_0x02E93C796ABD3A97(bool p0)l
extern _native64(0x58BB377BEC7CD5F4) void unk_0x58BB377BEC7CD5F4(bool p0, bool p1)l
extern _native64(0xD11FA52EB849D978) bool is_stream_playing()l
extern _native64(0x4E72BBDBCA58A3DB) int get_stream_play_time()l
extern _native64(0x1F1F957154EC51DF) bool load_stream(const char* streamName, const char* soundSet)l
extern _native64(0x59C16B79F53B3712) bool load_stream_with_start_offset(const char* streamName, int startOffset, const char* soundSet)l
extern _native64(0x89049DD63C08B5D1) void play_stream_from_ped(Ped ped)l
extern _native64(0xB70374A758007DFA) void play_stream_from_vehicle(Vehicle vehicle)l
extern _native64(0xEBAA9B64D76356FD) void play_stream_from_object(Object object)l
extern _native64(0x58FCE43488F9F5F4) void play_stream_frontend()l
extern _native64(0x21442F412E8DE56B) void special_frontend_equal(vector3 vec)l
extern _native64(0xA4718A1419D18151) void stop_stream()l
extern _native64(0x9D64D7405520E3D3) void stop_ped_speaking(Ped ped, bool shaking)l
extern _native64(0xA9A41C1E940FB0E8) void disable_ped_pain_audio(Ped ped, bool toggle)l
extern _native64(0x932C2D096A2C3FFF) bool is_ambient_speech_disabled(Ped ped)l
extern _native64(0x1FEF0683B96EBCF2) void set_siren_with_no_driver(Vehicle vehicle, bool toggle)l
extern _native64(0x9C11908013EA4715) void _sound_vehicle_horn_this_frame(Vehicle vehicle)l
extern _native64(0x76D683C108594D0E) void set_horn_enabled(Vehicle vehicle, bool toggle)l
extern _native64(0xE5564483E407F914) void set_audio_vehicle_priority(Vehicle vehicle, any p1)l
extern _native64(0x9D3AF56E94C9AE98) void unk_0x9D3AF56E94C9AE98(any p0, float p1)l
extern _native64(0xFA932DE350266EF8) void use_siren_as_horn(Vehicle vehicle, bool toggle)l
extern _native64(0x4F0C413926060B38) void _set_vehicle_audio(Vehicle vehicle, const char* audioName)l
extern _native64(0xF1F8157B8C3F171C) void unk_0xF1F8157B8C3F171C(any p0, const char* p1, const char* p2)l
extern _native64(0xD2DCCD8E16E20997) void unk_0xD2DCCD8E16E20997(any p0)l
extern _native64(0x5DB8010EE71FDEF2) bool unk_0x5DB8010EE71FDEF2(Vehicle vehicle)l
extern _native64(0x59E7B488451F4D3A) void unk_0x59E7B488451F4D3A(any p0, float p1)l
extern _native64(0x01BB4D577D38BD9E) void unk_0x01BB4D577D38BD9E(any p0, float p1)l
extern _native64(0x1C073274E065C6D2) void unk_0x1C073274E065C6D2(any p0, bool p1)l
extern _native64(0x2BE4BC731D039D5A) void unk_0x2BE4BC731D039D5A(any p0, bool p1)l
extern _native64(0x4A04DE7CAB2739A1) void set_vehicle_boost_active(Vehicle vehicle, bool Toggle)l
extern _native64(0x6FDDAD856E36988A) void unk_0x6FDDAD856E36988A(any p0, bool p1)l
extern _native64(0x06C0023BED16DD6B) void unk_0x06C0023BED16DD6B(any p0, bool p1)l
extern _native64(0x3A539D52857EA82D) void play_vehicle_door_open_sound(Vehicle vehicle, int p1)l
extern _native64(0x62A456AA4769EF34) void play_vehicle_door_close_sound(Vehicle vehicle, int p1)l
extern _native64(0xC15907D667F7CFB2) void unk_0xC15907D667F7CFB2(Vehicle vehicle, bool toggle)l
extern _native64(0x6D28DC1671E334FD) bool is_game_in_control_of_music()l
extern _native64(0x3BD3F52BA9B1E4E8) void set_gps_active(bool active)l
extern _native64(0xB138AAB8A70D3C69) void play_mission_complete_audio(const char* audioName)l
extern _native64(0x19A30C23F5827F8A) bool is_mission_complete_playing()l
extern _native64(0x6F259F82D873B8B8) any unk_0x6F259F82D873B8B8()l
extern _native64(0xF154B8D1775B2DEC) void unk_0xF154B8D1775B2DEC(bool p0)l
extern _native64(0x013A80FC08F6E4F2) bool start_audio_scene(const char* scene)l
extern _native64(0xDFE8422B3B94E688) void stop_audio_scene(const char* scene)l
extern _native64(0xBAC7FC81A75EC1A1) void stop_audio_scenes()l
extern _native64(0xB65B60556E2A9225) bool is_audio_scene_active(const char* scene)l
extern _native64(0xEF21A9EF089A2668) void set_audio_scene_variable(const char* scene, const char* variable, float value)l
extern _native64(0xA5F377B175A699C5) void unk_0xA5F377B175A699C5(any p0)l
extern _native64(0x153973AB99FE8980) void _dynamic_mixer_related_fn(Entity p0, const char* p1, float p2)l
extern _native64(0x18EB48CFC41F2EA0) void unk_0x18EB48CFC41F2EA0(any p0, float p1)l
extern _native64(0x845FFC3A4FEEFA3E) any audio_is_scripted_music_playing()l
extern _native64(0x1E5185B72EF5158A) bool prepare_music_event(const char* eventName)l
extern _native64(0x5B17A90291133DA5) bool cancel_music_event(const char* eventName)l
extern _native64(0x706D57B0F50DA710) bool trigger_music_event(const char* eventName)l
extern _native64(0xA097AB275061FB21) any unk_0xA097AB275061FB21()l
extern _native64(0xE7A0D23DC414507B) any get_music_playtime()l
extern _native64(0xFBE20329593DEC9D) void unk_0xFBE20329593DEC9D(any p0, any p1, any p2, any p3)l
extern _native64(0xB32209EFFDC04913) any clear_all_broken_glass()l
extern _native64(0x70B8EC8FC108A634) void unk_0x70B8EC8FC108A634(bool p0, any p1)l
extern _native64(0x149AEE66F0CB3A99) void unk_0x149AEE66F0CB3A99(float p0, float p1)l
extern _native64(0x8BF907833BE275DE) void unk_0x8BF907833BE275DE(float p0, float p1)l
extern _native64(0x062D5EAD4DA2FA6A) void unk_0x062D5EAD4DA2FA6A()l
extern _native64(0x9D74AE343DB65533) bool prepare_alarm(const char* alarmName)l
extern _native64(0x0355EF116C4C97B2) void start_alarm(const char* alarmName, bool p2)l
extern _native64(0xA1CADDCD98415A41) void stop_alarm(const char* alarmName, bool toggle)l
extern _native64(0x2F794A877ADD4C92) void stop_all_alarms(bool stop)l
extern _native64(0x226435CB96CCFC8C) bool is_alarm_playing(const char* alarmName)l
extern _native64(0x02165D55000219AC) Hash get_vehicle_default_horn(Vehicle vehicle)l
extern _native64(0xACB5DCCA1EC76840) Hash unk_0xACB5DCCA1EC76840(Vehicle vehicle)l
extern _native64(0xF54BB7B61036F335) void reset_ped_audio_flags(any p0)l
extern _native64(0xD2CC78CD3D0B50F9) void unk_0xD2CC78CD3D0B50F9(any p0, bool p1)l
extern _native64(0xBF4DC1784BE94DFA) void unk_0xBF4DC1784BE94DFA(any p0, bool p1, any p2)l
extern _native64(0x75773E11BA459E90) void unk_0x75773E11BA459E90(any p0, bool p1)l
extern _native64(0xD57AAAE0E2214D11) void unk_0xD57AAAE0E2214D11()l
extern _native64(0x552369F549563AD5) void _force_ambient_siren(bool value)l
extern _native64(0x43FA0DFC5DF87815) void unk_0x43FA0DFC5DF87815(Vehicle vehicle, bool p1)l
extern _native64(0xB9EFD5C25018725A) void set_audio_flag(const char* flagName, bool toggle)l
extern _native64(0xC7ABCACA4985A766) any prepare_synchronized_audio_event(const char* p0, any p1)l
extern _native64(0x029FE7CD1B7E2E75) bool prepare_synchronized_audio_event_for_scene(any p0, any* p1)l
extern _native64(0x8B2FD4560E55DD2D) bool play_synchronized_audio_event(any p0)l
extern _native64(0x92D6A88E64A94430) bool stop_synchronized_audio_event(any p0)l
extern _native64(0xC8EDE9BDBCCBA6D4) void unk_0xC8EDE9BDBCCBA6D4(any* p0, float p1, float p2, float p3)l
extern _native64(0x950A154B8DAB6185) void _set_synchronized_audio_event_position_this_frame(const char* p0, Entity p1)l
extern _native64(0x12561FCBB62D5B9C) void unk_0x12561FCBB62D5B9C(int p0)l
extern _native64(0x044DBAD7A7FA2BE5) void unk_0x044DBAD7A7FA2BE5(const char* p0, const char* p1)l
extern _native64(0xB4BBFD9CD8B3922B) void unk_0xB4BBFD9CD8B3922B(const char* p0)l
extern _native64(0xE4E6DD5566D28C82) void unk_0xE4E6DD5566D28C82()l
extern _native64(0x3A48AB4445D499BE) any unk_0x3A48AB4445D499BE()l
extern _native64(0x4ADA3F19BE4A6047) void unk_0x4ADA3F19BE4A6047(Ped ped)l
extern _native64(0x0150B6FF25A9E2E5) void unk_0x0150B6FF25A9E2E5()l
extern _native64(0xBEF34B1D9624D5DD) void unk_0xBEF34B1D9624D5DD(bool p0)l
extern _native64(0x806058BBDC136E06) void unk_0x806058BBDC136E06()l
extern _native64(0x544810ED9DB6BBE6) any unk_0x544810ED9DB6BBE6()l
extern _native64(0x5B50ABB1FE3746F4) any unk_0x5B50ABB1FE3746F4()l
#pragma endregion //}
#pragma region CUTSCENE //{
extern _native64(0x7A86743F475D9E09) void request_cutscene(const char* cutsceneName, int p1)l
extern _native64(0xC23DE0E91C30B58C) void _request_cutscene_ex(const char* cutsceneName, int p1, int p2)l
extern _native64(0x440AF51A3462B86F) void remove_cutscene()l
extern _native64(0xC59F528E9AB9F339) bool has_cutscene_loaded()l
extern _native64(0x228D3D94F8A11C3C) bool has_this_cutscene_loaded(const char* cutsceneName)l
extern _native64(0x8D9DF6ECA8768583) void unk_0x8D9DF6ECA8768583(int p0)l
extern _native64(0xB56BBBCC2955D9CB) bool unk_0xB56BBBCC2955D9CB()l
extern _native64(0x71B74D2AE19338D0) bool unk_0x71B74D2AE19338D0(int p0)l
extern _native64(0x4C61C75BEE8184C2) void unk_0x4C61C75BEE8184C2(const char* p0, any p1, any p2)l
extern _native64(0x06A3524161C502BA) void unk_0x06A3524161C502BA(any* p0)l
extern _native64(0xA1C996C2A744262E) bool unk_0xA1C996C2A744262E(any* p0)l
extern _native64(0xD00D76A7DFC9D852) void unk_0xD00D76A7DFC9D852(any* p0)l
extern _native64(0x0ABC54DE641DC0FC) any unk_0x0ABC54DE641DC0FC(any* p0)l
extern _native64(0x186D5CB5E7B0FF7B) void start_cutscene(int p0)l
extern _native64(0x1C9ADDA3244A1FBF) void start_cutscene_at_coords(vector3 vec, int p3)l
extern _native64(0xC7272775B4DC786E) void stop_cutscene(bool p0)l
extern _native64(0xD220BDD222AC4A1E) void stop_cutscene_immediately()l
extern _native64(0xB812B3FD1C01CF27) void set_cutscene_origin(vector3 vec, float p3, int p4)l
extern _native64(0x011883F41211432A) void unk_0x011883F41211432A(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0xE625BEABBAFFDAB9) int get_cutscene_time()l
extern _native64(0xEE53B14A19E480D4) int get_cutscene_total_duration()l
extern _native64(0x40C8656EDAEDD569) bool was_cutscene_skipped()l
extern _native64(0x7C0A893088881D57) bool has_cutscene_finished()l
extern _native64(0x991251AFC3981F84) bool is_cutscene_active()l
extern _native64(0xD3C2E180A40F031E) bool is_cutscene_playing()l
extern _native64(0x49010A6A396553D8) int get_cutscene_section_playing()l
extern _native64(0x0A2E9FDB9A8C62F6) Entity get_entity_index_of_cutscene_entity(const char* cutsceneEntName, Hash modelHash)l
extern _native64(0x583DF8E3D4AFBD98) int unk_0x583DF8E3D4AFBD98()l
extern _native64(0x4CEBC1ED31E8925E) bool unk_0x4CEBC1ED31E8925E(const char* cutsceneName)l
extern _native64(0xE40C1C56DF95C2E8) void register_entity_for_cutscene(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4)l
extern _native64(0xC0741A26499654CD) Entity get_entity_index_of_registered_entity(const char* cutsceneEntName, Hash modelHash)l
extern _native64(0x7F96F23FA9B73327) void unk_0x7F96F23FA9B73327(Hash modelHash)l
extern _native64(0x9896CE4721BE84BA) void set_cutscene_trigger_area(float p0, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0x645D0B458D8E17B5) bool can_set_enter_state_for_registered_entity(const char* cutsceneEntName, Hash modelHash)l
extern _native64(0x4C6A6451C79E4662) bool can_set_exit_state_for_registered_entity(const char* cutsceneEntName, Hash modelHash)l
extern _native64(0xB2CBCD0930DFB420) bool can_set_exit_state_for_camera(bool p0)l
extern _native64(0xC61B86C9F61EB404) void unk_0xC61B86C9F61EB404(bool toggle)l
extern _native64(0x8093F23ABACCC7D4) void set_cutscene_fade_values(bool p0, bool p1, bool p2, bool p3)l
extern _native64(0x20746F7B1032A3C7) void unk_0x20746F7B1032A3C7(bool p0, bool p1, bool p2, bool p3)l
extern _native64(0x06EE9048FD080382) void unk_0x06EE9048FD080382(bool p0)l
extern _native64(0xA0FE76168A189DDB) int unk_0xA0FE76168A189DDB()l
extern _native64(0x2F137B508DE238F2) void unk_0x2F137B508DE238F2(bool p0)l
extern _native64(0xE36A98D8AB3D3C66) void unk_0xE36A98D8AB3D3C66(bool p0)l
extern _native64(0x5EDEF0CF8C1DAB3C) any unk_0x5EDEF0CF8C1DAB3C()l
extern _native64(0x41FAA8FB2ECE8720) void unk_0x41FAA8FB2ECE8720(bool p0)l
extern _native64(0x2131046957F31B04) void register_synchronised_script_speech()l
extern _native64(0xBA01E7B6DEEFBBC9) void set_cutscene_ped_component_variation(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash)l
extern _native64(0x2A56C06EBEF2B0D9) void unk_0x2A56C06EBEF2B0D9(const char* cutsceneEntName, Ped ped, Hash modelHash)l
extern _native64(0x499EF20C5DB25C59) bool does_cutscene_entity_exist(const char* cutsceneEntName, Hash modelHash)l
extern _native64(0x0546524ADE2E9723) void set_cutscene_ped_prop_variation(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash)l
extern _native64(0x708BDD8CD795B043) bool unk_0x708BDD8CD795B043()l
#pragma endregion //}
#pragma region INTERIOR //{
extern _native64(0xE4A84ABF135EF91A) int get_interior_group_id(int interiorID)l
extern _native64(0x9E3B3E6D66F6E22F) vector3 get_offset_from_interior_in_world_coords(int interiorID, vector3 vec)l
extern _native64(0xBC72B5D7A1CBD54D) bool is_interior_scene()l
extern _native64(0x26B0E73D7EAAF4D3) bool is_valid_interior(int interiorID)l
extern _native64(0xB365FC0C4E27FFA7) void clear_room_for_entity(Entity entity)l
extern _native64(0x52923C4710DD9907) void force_room_for_entity(Entity entity, int interiorID, Hash roomHashKey)l
extern _native64(0x47C2A06D4F5F424B) Hash get_room_key_from_entity(Entity entity)l
extern _native64(0x399685DB942336BC) Hash get_key_for_entity_in_room(Entity entity)l
extern _native64(0x2107BA504071A6BB) int get_interior_from_entity(Entity entity)l
extern _native64(0x82EBB79E258FA2B7) void unk_0x82EBB79E258FA2B7(Entity entity, int interiorID)l
extern _native64(0x920D853F3E17F1DA) void unk_0x920D853F3E17F1DA(int interiorID, Hash roomHashKey)l
extern _native64(0xAF348AFCB575A441) void unk_0xAF348AFCB575A441(const char* roomName)l
extern _native64(0x405DC2AEF6AF95B9) void unk_0x405DC2AEF6AF95B9(Hash roomHashKey)l
extern _native64(0xA6575914D2A0B450) Hash _get_room_key_from_gameplay_cam()l
extern _native64(0x23B59D8912F94246) void unk_0x23B59D8912F94246()l
extern _native64(0xB0F7F8663821D9C3) int get_interior_at_coords(vector3 vec)l
extern _native64(0x3F6167F351168730) void add_pickup_to_interior_room_by_name(Pickup pickup, const char* roomName)l
extern _native64(0x2CA429C029CCF247) void _load_interior(int interiorID)l
extern _native64(0x261CCE7EED010641) void unpin_interior(int interiorID)l
extern _native64(0x6726BDCCC1932F0E) bool is_interior_ready(int interiorID)l
extern _native64(0x4C2330E61D3DEB56) any unk_0x4C2330E61D3DEB56(int interiorID)l
extern _native64(0x05B7A89BD78797FC) int get_interior_at_coords_with_type(vector3 vec, const char* interiorType)l
extern _native64(0xF0F77ADB9F67E79D) int _unk_get_interior_at_coords(vector3 vec, int unk)l
extern _native64(0xEEA5AC2EDA7C33E8) bool _are_coords_colliding_with_exterior(vector3 vec)l
extern _native64(0xEC4CF9FCB29A4424) int get_interior_from_collision(vector3 vec)l
extern _native64(0x55E86AF2712B36A1) void _enable_interior_prop(int interiorID, const char* propName)l
extern _native64(0x420BD37289EEE162) void _disable_interior_prop(int interiorID, const char* propName)l
extern _native64(0x35F7DD45E8C0A16D) bool _is_interior_prop_enabled(int interiorID, const char* propName)l
extern _native64(0x41F37C3427C75AE0) void refresh_interior(int interiorID)l
extern _native64(0xA97F257D0151A6AB) void _hide_map_object_this_frame(Hash mapObjectHash)l
extern _native64(0x6170941419D7D8EC) void disable_interior(int interiorID, bool toggle)l
extern _native64(0xBC5115A5A939DD15) bool is_interior_disabled(int interiorID)l
extern _native64(0xD9175F941610DB54) void cap_interior(int interiorID, bool toggle)l
extern _native64(0x92BAC8ACF88CEC26) bool is_interior_capped(int interiorID)l
extern _native64(0x9E6542F0CE8E70A3) void unk_0x9E6542F0CE8E70A3(bool toggle)l
#pragma endregion //}
#pragma region CAM //{
extern _native64(0x07E5B515DB0636FC) void render_script_cams(bool render, bool ease, int easeTime, bool p3, bool p4)l
extern _native64(0xC819F3CBB62BF692) void unk_0xC819F3CBB62BF692(bool render, any p1, any p2)l
extern _native64(0xC3981DCE61D9E13F) Cam create_cam(const char* camName, bool p1)l
extern _native64(0xB51194800B257161) Cam create_cam_with_params(const char* camName, vector3 pos, vector3 rot, float fov, bool p8, int p9)l
extern _native64(0x5E3CF89C6BCCA67D) Cam create_camera(Hash camHash, bool p1)l
extern _native64(0x6ABFA3E16460F22D) Cam create_camera_with_params(Hash camHash, vector3 pos, vector3 rot, float fov, bool p8, any p9)l
extern _native64(0x865908C81A2C22E9) void destroy_cam(Cam cam, bool thisScriptCheck)l
extern _native64(0x8E5FB15663F79120) void destroy_all_cams(bool thisScriptCheck)l
extern _native64(0xA7A932170592B50E) bool does_cam_exist(Cam cam)l
extern _native64(0x026FB97D0A425F84) void set_cam_active(Cam cam, bool active)l
extern _native64(0xDFB2B516207D3534) bool is_cam_active(Cam cam)l
extern _native64(0x02EC0AF5C5A49B7A) bool is_cam_rendering(Cam cam)l
extern _native64(0x5234F9F10919EABA) Cam get_rendering_cam()l
extern _native64(0xBAC038F7459AE5AE) vector3 get_cam_coord(Cam cam)l
extern _native64(0x7D304C1C955E3E12) vector3 get_cam_rot(Cam cam, int rotationOrder)l
extern _native64(0xC3330A45CCCDB26A) float get_cam_fov(Cam cam)l
extern _native64(0xC520A34DAFBF24B1) float get_cam_near_clip(Cam cam)l
extern _native64(0xB60A9CFEB21CA6AA) float get_cam_far_clip(Cam cam)l
extern _native64(0x255F8DAFD540D397) float get_cam_far_dof(Cam cam)l
extern _native64(0xBFD8727AEA3CCEBA) void set_cam_params(Cam cam, vector3 pos, vector3 rot, float fieldOfView, any p8, int p9, int p10, int p11)l
extern _native64(0x4D41783FB745E42E) void set_cam_coord(Cam cam, vector3 pos)l
extern _native64(0x85973643155D0B07) void set_cam_rot(Cam cam, vector3 rot, int rotationOrder)l
extern _native64(0xB13C14F66A00D047) void set_cam_fov(Cam cam, float fieldOfView)l
extern _native64(0xC7848EFCCC545182) void set_cam_near_clip(Cam cam, float nearClip)l
extern _native64(0xAE306F2A904BF86E) void set_cam_far_clip(Cam cam, float farClip)l
extern _native64(0x6F0F77FBA9A8F2E6) void set_cam_motion_blur_strength(Cam cam, float strength)l
extern _native64(0x3FA4BF0A7AB7DE2C) void set_cam_near_dof(Cam cam, float nearDOF)l
extern _native64(0xEDD91296CD01AEE0) void set_cam_far_dof(Cam cam, float farDOF)l
extern _native64(0x5EE29B4D7D5DF897) void set_cam_dof_strength(Cam cam, float dofStrength)l
extern _native64(0x3CF48F6F96E749DC) void set_cam_dof_planes(Cam cam, float p1, float p2, float p3, float p4)l
extern _native64(0x16A96863A17552BB) void set_cam_use_shallow_dof_mode(Cam cam, bool toggle)l
extern _native64(0xA13B0222F3D94A94) void set_use_hi_dof()l
extern _native64(0xF55E4046F6F831DC) void unk_0xF55E4046F6F831DC(any p0, float p1)l
extern _native64(0xE111A7C0D200CBC5) void unk_0xE111A7C0D200CBC5(any p0, float p1)l
extern _native64(0x7DD234D6F3914C5B) void _set_cam_dof_fnumber_of_lens(Cam camera, float p1)l
extern _native64(0xC669EEA5D031B7DE) void _set_cam_dof_focus_distance_bias(Cam camera, float p1)l
extern _native64(0xC3654A441402562D) void _set_cam_dof_max_near_in_focus_distance(Cam camera, float p1)l
extern _native64(0x2C654B4943BDDF7C) void _set_cam_dof_max_near_in_focus_distance_blend_level(Cam camera, float p1)l
extern _native64(0xFEDB7D269E8C60E3) void attach_cam_to_entity(Cam cam, Entity entity, vector3 Offset, bool isRelative)l
extern _native64(0x61A3DBA14AB7F411) void attach_cam_to_ped_bone(Cam cam, Ped ped, int boneIndex, vector3 vec, bool heading)l
extern _native64(0xA2FABBE87F4BAD82) void detach_cam(Cam cam)l
extern _native64(0x45F1DE9C34B93AE6) void set_cam_inherit_roll_vehicle(Cam cam, bool p1)l
extern _native64(0xF75497BB865F0803) void point_cam_at_coord(Cam cam, vector3 vec)l
extern _native64(0x5640BFF86B16E8DC) void point_cam_at_entity(Cam cam, Entity entity, float p2, float p3, float p4, bool p5)l
extern _native64(0x68B2B5F33BA63C41) void point_cam_at_ped_bone(Cam cam, int ped, int boneIndex, vector3 vec, bool p6)l
extern _native64(0xF33AB75780BA57DE) void stop_cam_pointing(Cam cam)l
extern _native64(0x8C1DC7770C51DC8D) void set_cam_affects_aiming(Cam cam, bool toggle)l
extern _native64(0x661B5C8654ADD825) void unk_0x661B5C8654ADD825(any p0, bool p1)l
extern _native64(0xA2767257A320FC82) void unk_0xA2767257A320FC82(any p0, bool p1)l
extern _native64(0x271017B9BA825366) void unk_0x271017B9BA825366(any p0, bool p1)l
extern _native64(0x1B93E0107865DD40) void set_cam_debug_name(Cam camera, const char* name)l
extern _native64(0x8609C75EC438FB3B) void add_cam_spline_node(Cam camera, vector3 vec, vector3 Rot, int length, int p8, int p9)l
extern _native64(0x0A9F2A468B328E74) void unk_0x0A9F2A468B328E74(any p0, any p1, any p2, any p3)l
extern _native64(0x0FB82563989CF4FB) void unk_0x0FB82563989CF4FB(any p0, any p1, any p2, any p3)l
extern _native64(0x609278246A29CA34) void unk_0x609278246A29CA34(any p0, any p1, any p2)l
extern _native64(0x242B5874F0A4E052) void set_cam_spline_phase(Cam cam, float p1)l
extern _native64(0xB5349E36C546509A) float get_cam_spline_phase(Cam cam)l
extern _native64(0xD9D0E694C8282C96) float get_cam_spline_node_phase(Cam cam)l
extern _native64(0x1381539FEE034CDA) void set_cam_spline_duration(int cam, int timeDuration)l
extern _native64(0xD1B0F412F109EA5D) void unk_0xD1B0F412F109EA5D(any p0, any p1)l
extern _native64(0xB22B17DF858716A6) bool get_cam_spline_node_index(Cam cam)l
extern _native64(0x83B8201ED82A9A2D) void unk_0x83B8201ED82A9A2D(any p0, any p1, any p2, float p3)l
extern _native64(0xA6385DEB180F319F) void unk_0xA6385DEB180F319F(any p0, any p1, float p2)l
extern _native64(0x40B62FA033EB0346) void override_cam_spline_velocity(Cam cam, int p1, float p2, float p3)l
extern _native64(0x7DCF7C708D292D55) void override_cam_spline_motion_blur(Cam cam, int p1, float p2, float p3)l
extern _native64(0x7BF1A54AE67AC070) void unk_0x7BF1A54AE67AC070(any p0, any p1, any p2)l
extern _native64(0x0290F35C0AD97864) bool is_cam_spline_paused(any p0)l
extern _native64(0x9FBDA379383A52A4) void set_cam_active_with_interp(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation)l
extern _native64(0x036F97C908C2B52C) bool is_cam_interpolating(Cam cam)l
extern _native64(0x6A25241C340D3822) void shake_cam(Cam cam, const char* type, float amplitude)l
extern _native64(0xA2746EEAE3E577CD) void animated_shake_cam(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude)l
extern _native64(0x6B24BFE83A2BE47B) bool is_cam_shaking(Cam cam)l
extern _native64(0xD93DB43B82BC0D00) void set_cam_shake_amplitude(Cam cam, float amplitude)l
extern _native64(0xBDECF64367884AC3) void stop_cam_shaking(Cam cam, bool p1)l
extern _native64(0xF4C8CF9E353AFECA) void unk_0xF4C8CF9E353AFECA(const char* p0, float p1)l
extern _native64(0xC2EAE3FB8CDBED31) void unk_0xC2EAE3FB8CDBED31(const char* p0, const char* p1, const char* p2, float p3)l
extern _native64(0xC912AF078AF19212) bool is_script_global_shaking()l
extern _native64(0x1C9D7949FA533490) void stop_script_global_shaking(bool p0)l
extern _native64(0x9A2D0FB2E7852392) bool play_cam_anim(Cam cam, const char* animName, const char* animDictionary, vector3 vec, vector3 Rot, bool p9, int p10)l
extern _native64(0xC90621D8A0CEECF2) bool is_cam_playing_anim(Cam cam, const char* animName, const char* animDictionary)l
extern _native64(0x4145A4C44FF3B5A6) void set_cam_anim_current_phase(Cam cam, float phase)l
extern _native64(0xA10B2DB49E92A6B0) float get_cam_anim_current_phase(Cam cam)l
extern _native64(0xE32EFE9AB4A9AA0C) bool play_synchronized_cam_anim(any p0, any p1, const char* animName, const char* animDictionary)l
extern _native64(0x503F5920162365B2) void unk_0x503F5920162365B2(any p0, float p1, float p2, float p3)l
extern _native64(0xF9D02130ECDD1D77) void _set_camera_range(Cam cam, float range)l
extern _native64(0xC91C6C55199308CA) void unk_0xC91C6C55199308CA(any p0, float p1, float p2, float p3)l
extern _native64(0xC8B5C4A79CC18B94) void unk_0xC8B5C4A79CC18B94(Cam p0)l
extern _native64(0x5C48A1D6E3B33179) bool unk_0x5C48A1D6E3B33179(any p0)l
extern _native64(0xB16FCE9DDC7BA182) bool is_screen_faded_out()l
extern _native64(0x5A859503B0C08678) bool is_screen_faded_in()l
extern _native64(0x797AC7CB535BA28F) bool is_screen_fading_out()l
extern _native64(0x5C544BC6C57AC575) bool is_screen_fading_in()l
extern _native64(0xD4E8E24955024033) void do_screen_fade_in(int duration)l
extern _native64(0x891B5B39AC6302AF) void do_screen_fade_out(int duration)l
extern _native64(0xDCD4EA924F42D01A) any set_widescreen_borders(bool p0, int p1)l
extern _native64(0x14D6F5678D8F1B37) vector3 get_gameplay_cam_coord()l
extern _native64(0x837765A25378F0BB) vector3 get_gameplay_cam_rot(int rotationOrder)l
extern _native64(0x65019750A0324133) float get_gameplay_cam_fov()l
extern _native64(0x487A82C650EB7799) void custom_menu_coordinates(float p0)l
extern _native64(0x0225778816FDC28C) void unk_0x0225778816FDC28C(float p0)l
extern _native64(0x743607648ADD4587) float get_gameplay_cam_relative_heading()l
extern _native64(0xB4EC2312F4E5B1F1) void set_gameplay_cam_relative_heading(float heading)l
extern _native64(0x3A6867B4845BEDA2) float get_gameplay_cam_relative_pitch()l
extern _native64(0x6D0858B8EDFD2B7D) any set_gameplay_cam_relative_pitch(float x, float Value2)l
extern _native64(0x103991D4A307D472) void _set_gameplay_cam_raw_yaw(float yaw)l
extern _native64(0x759E13EBC1C15C5A) void _set_gameplay_cam_raw_pitch(float pitch)l
extern _native64(0x469F2ECDEC046337) void unk_0x469F2ECDEC046337(bool p0)l
extern _native64(0xFD55E49555E017CF) void shake_gameplay_cam(const char* shakeName, float intensity)l
extern _native64(0x016C090630DF1F89) bool is_gameplay_cam_shaking()l
extern _native64(0xA87E00932DB4D85D) void set_gameplay_cam_shake_amplitude(float amplitude)l
extern _native64(0x0EF93E9F3D08C178) void stop_gameplay_cam_shaking(bool p0)l
extern _native64(0x8BBACBF51DA047A8) void unk_0x8BBACBF51DA047A8(any p0)l
extern _native64(0x39B5D1B10383F0C8) bool is_gameplay_cam_rendering()l
extern _native64(0x3044240D2E0FA842) bool unk_0x3044240D2E0FA842()l
extern _native64(0x705A276EBFF3133D) bool unk_0x705A276EBFF3133D()l
extern _native64(0xDB90C6CCA48940F1) void unk_0xDB90C6CCA48940F1(bool p0)l
extern _native64(0xEA7F0AD7E9BA676F) void _enable_crosshair_this_frame()l
extern _native64(0x70FDA869F3317EA9) bool is_gameplay_cam_looking_behind()l
extern _native64(0x2AED6301F67007D5) void unk_0x2AED6301F67007D5(Entity entity)l
extern _native64(0x49482F9FCD825AAA) void unk_0x49482F9FCD825AAA(Entity entity)l
extern _native64(0xFD3151CD37EA2245) void unk_0xFD3151CD37EA2245(any p0)l
extern _native64(0xDD79DF9F4D26E1C9) void unk_0xDD79DF9F4D26E1C9()l
extern _native64(0xE33D59DA70B58FDF) bool is_sphere_visible(vector3 vec, float radius)l
extern _native64(0xC6D3D26810C8E0F9) bool is_follow_ped_cam_active()l
extern _native64(0x44A113DD6FFC48D1) bool set_follow_ped_cam_cutscene_chat(const char* p0, int p1)l
extern _native64(0x271401846BD26E92) void unk_0x271401846BD26E92(bool p0, bool p1)l
extern _native64(0xC8391C309684595A) void unk_0xC8391C309684595A()l
extern _native64(0x8F993D26E0CA5E8E) any _clamp_gameplay_cam_yaw(float minimum, float maximum)l
extern _native64(0xA516C198B7DCA1E1) any _clamp_gameplay_cam_pitch(float minimum, float maximum)l
extern _native64(0xDF2E1F7742402E81) void _animate_gameplay_cam_zoom(float p0, float distance)l
extern _native64(0xE9EA16D6E54CDCA4) any unk_0xE9EA16D6E54CDCA4(Vehicle p0, int p1)l
extern _native64(0xDE2EF5DA284CC8DF) void _disable_first_person_cam_this_frame()l
extern _native64(0x59424BD75174C9B1) void unk_0x59424BD75174C9B1()l
extern _native64(0x33E6C8EFD0CD93E9) int get_follow_ped_cam_zoom_level()l
extern _native64(0x8D4D46230B2C353A) int get_follow_ped_cam_view_mode()l
extern _native64(0x5A4F9EDF1673F704) void set_follow_ped_cam_view_mode(int viewMode)l
extern _native64(0xCBBDE6D335D6D496) bool is_follow_vehicle_cam_active()l
extern _native64(0x91EF6EE6419E5B97) void unk_0x91EF6EE6419E5B97(bool p0)l
extern _native64(0x9DFE13ECDC1EC196) void set_time_idle_drop(bool p0, bool p1)l
extern _native64(0xEE82280AB767B690) int get_follow_vehicle_cam_zoom_level()l
extern _native64(0x19464CB6E4078C8A) void set_follow_vehicle_cam_zoom_level(int zoomLevel)l
extern _native64(0xA4FF579AC0E3AAAE) int get_follow_vehicle_cam_view_mode()l
extern _native64(0xAC253D7842768F48) void set_follow_vehicle_cam_view_mode(int viewMode)l
extern _native64(0xEE778F8C7E1142E2) any unk_0xEE778F8C7E1142E2(any p0)l
extern _native64(0x2A2173E46DAECD12) void unk_0x2A2173E46DAECD12(any p0, any p1)l
extern _native64(0x19CAFA3C87F7C2FF) any unk_0x19CAFA3C87F7C2FF()l
extern _native64(0x68EDDA28A5976D07) bool is_aim_cam_active()l
extern _native64(0x74BD83EA840F6BC9) bool unk_0x74BD83EA840F6BC9()l
extern _native64(0x5E346D934122613F) bool is_first_person_aim_cam_active()l
extern _native64(0x1A31FE0049E542F6) void disable_aim_cam_this_update()l
extern _native64(0x7EC52CC40597D170) float _get_gameplay_cam_zoom()l
extern _native64(0x70894BD0915C5BCA) any unk_0x70894BD0915C5BCA(float p0)l
extern _native64(0xCED08CBE8EBB97C7) void unk_0xCED08CBE8EBB97C7(float p0, float p1)l
extern _native64(0x2F7F2B26DD3F18EE) void unk_0x2F7F2B26DD3F18EE(float p0, float p1)l
extern _native64(0xBCFC632DB7673BF0) void unk_0xBCFC632DB7673BF0(float p0, float p1)l
extern _native64(0x0AF7B437918103B3) void unk_0x0AF7B437918103B3(float p0)l
extern _native64(0x42156508606DE65E) void unk_0x42156508606DE65E(float p0)l
extern _native64(0x4008EDF7D6E48175) void unk_0x4008EDF7D6E48175(bool p0)l
extern _native64(0xA200EB1EE790F448) vector3 _get_gameplay_cam_coords()l
extern _native64(0x5B4E4C817FCC2DFB) vector3 _get_gameplay_cam_rot(int rotationOrder)l
extern _native64(0x26903D9CD1175F2C) int unk_0x26903D9CD1175F2C(any p0, any p1)l
extern _native64(0x80EC114669DAEFF4) float unk_0x80EC114669DAEFF4()l
extern _native64(0x5F35F6732C3FBBA0) float unk_0x5F35F6732C3FBBA0(any p0)l
extern _native64(0xD0082607100D7193) float unk_0xD0082607100D7193()l
extern _native64(0xDFC8CBC606FDB0FC) float unk_0xDFC8CBC606FDB0FC()l
extern _native64(0xA03502FC581F7D9B) float unk_0xA03502FC581F7D9B()l
extern _native64(0x9780F32BCAF72431) float unk_0x9780F32BCAF72431()l
extern _native64(0x162F9D995753DC19) float unk_0x162F9D995753DC19()l
extern _native64(0xD51ADCD2D8BC0FB3) void set_gameplay_coord_hint(float p0, float p1, float p2, any p3, any p4, any p5, any p6)l
extern _native64(0x2B486269ACD548D3) void set_gameplay_ped_hint(Ped p0, vector3 vec_1, bool p4, any p5, any p6, any p7)l
extern _native64(0xA2297E18F3E71C2E) void set_gameplay_vehicle_hint(any p0, float p1, float p2, float p3, bool p4, any p5, any p6, any p7)l
extern _native64(0x83E87508A2CA2AC6) void set_gameplay_object_hint(any p0, float p1, float p2, float p3, bool p4, any p5, any p6, any p7)l
extern _native64(0x189E955A8313E298) void set_gameplay_entity_hint(Entity entity, vector3 Offset, bool p4, int p5, int p6, int p7, any p8)l
extern _native64(0xE520FF1AD2785B40) bool is_gameplay_hint_active()l
extern _native64(0xF46C581C61718916) void stop_gameplay_hint(bool p0)l
extern _native64(0xCCD078C2665D2973) void unk_0xCCD078C2665D2973(bool p0)l
extern _native64(0x247ACBC4ABBC9D1C) void unk_0x247ACBC4ABBC9D1C(bool p0)l
extern _native64(0xBF72910D0F26F025) any unk_0xBF72910D0F26F025()l
extern _native64(0x513403FB9C56211F) void set_gameplay_hint_fov(float FOV)l
extern _native64(0xF8BDBF3D573049A1) void unk_0xF8BDBF3D573049A1(float p0)l
extern _native64(0xD1F8363DFAD03848) void unk_0xD1F8363DFAD03848(float p0)l
extern _native64(0x5D7B620DAE436138) void unk_0x5D7B620DAE436138(float p0)l
extern _native64(0xC92717EF615B6704) void unk_0xC92717EF615B6704(float p0)l
extern _native64(0xE3433EADAAF7EE40) void get_is_multiplayer_brief(bool p0)l
extern _native64(0x51669F7D1FB53D9F) void set_cinematic_button_active(bool p0)l
extern _native64(0xB15162CB5826E9E8) bool is_cinematic_cam_rendering()l
extern _native64(0xDCE214D9ED58F3CF) void shake_cinematic_cam(const char* p0, float p1)l
extern _native64(0xBBC08F6B4CB8FF0A) bool is_cinematic_cam_shaking()l
extern _native64(0xC724C701C30B2FE7) void set_cinematic_cam_shake_amplitude(float p0)l
extern _native64(0x2238E588E588A6D7) void stop_cinematic_cam_shaking(bool p0)l
extern _native64(0xADFF1B2A555F5FBA) void _disable_vehicle_first_person_cam_this_frame()l
extern _native64(0x62ECFCFDEE7885D6) void unk_0x62ECFCFDEE7885D6()l
extern _native64(0x9E4CFFF989258472) void unk_0x9E4CFFF989258472()l
extern _native64(0xF4F2C0D4EE209E20) void unk_0xF4F2C0D4EE209E20()l
extern _native64(0xCA9D2AA3E326D720) bool unk_0xCA9D2AA3E326D720()l
extern _native64(0x4F32C0D5A90A9B40) bool _is_in_vehicle_cam_disabled()l
extern _native64(0x741B0129D4560F31) void create_cinematic_shot(any p0, int p1, any p2, Entity entity)l
extern _native64(0xCC9F3371A7C28BC9) bool is_cinematic_shot_active(any p0)l
extern _native64(0x7660C6E75D3A078E) void stop_cinematic_shot(any p0)l
extern _native64(0xA41BCD7213805AAC) void unk_0xA41BCD7213805AAC(bool p0)l
extern _native64(0xDC9DA9E8789F5246) void unk_0xDC9DA9E8789F5246()l
extern _native64(0xDCF0754AC3D6FD4E) void set_cinematic_mode_active(bool p0)l
extern _native64(0x1F2300CB7FA7B7F6) any unk_0x1F2300CB7FA7B7F6()l
extern _native64(0x17FCA7199A530203) any unk_0x17FCA7199A530203()l
extern _native64(0xDB629FFD9285FA06) void stop_cutscene_cam_shaking()l
extern _native64(0x12DED8CA53D47EA5) void unk_0x12DED8CA53D47EA5(float p0)l
extern _native64(0x89215EC747DF244A) Entity unk_0x89215EC747DF244A(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8)l
extern _native64(0x5A43C76F7FC7BA5F) void unk_0x5A43C76F7FC7BA5F()l
extern _native64(0x80C8B1846639BB19) void _set_cam_effect(int p0)l
extern _native64(0x5C41E6BABC9E2112) void unk_0x5C41E6BABC9E2112(any p0)l
extern _native64(0x21E253A7F8DA5DFB) void unk_0x21E253A7F8DA5DFB(const char* vehicleName)l
extern _native64(0x11FA5D3479C7DD47) void unk_0x11FA5D3479C7DD47(any p0)l
extern _native64(0xEAF0FA793D05C592) any unk_0xEAF0FA793D05C592()l
extern _native64(0x8BFCEB5EA1B161B6) any unk_0x8BFCEB5EA1B161B6()l
#pragma endregion //}
#pragma region WEAPON //{
extern _native64(0xC8B46D7727D864AA) void enable_laser_sight_rendering(bool toggle)l
extern _native64(0x0DB57B41EC1DB083) Hash get_weapon_component_type_model(Hash componentHash)l
extern _native64(0xF46CDC33180FDA94) Hash get_weapontype_model(Hash weaponHash)l
extern _native64(0x4215460B9B8B7FA0) Hash get_weapontype_slot(Hash weaponHash)l
extern _native64(0xC3287EE3050FB74C) Hash get_weapontype_group(Hash weaponHash)l
extern _native64(0xADF692B254977C0C) void set_current_ped_weapon(Ped ped, Hash weaponHash, bool equipNow)l
extern _native64(0x3A87E44BB9A01D54) bool get_current_ped_weapon(Ped ped, Hash* weaponHash, bool p2)l
extern _native64(0x3B390A939AF0B5FC) Entity get_current_ped_weapon_entity_index(Ped ped)l
extern _native64(0x8483E98E8B888AE2) Hash get_best_ped_weapon(Ped ped, bool p1)l
extern _native64(0x75C55983C2C39DAA) bool set_current_ped_vehicle_weapon(Ped ped, Hash weaponHash)l
extern _native64(0x1017582BCD3832DC) bool get_current_ped_vehicle_weapon(Ped ped, Hash* weaponHash)l
extern _native64(0x475768A975D5AD17) bool is_ped_armed(Ped ped, int p1)l
extern _native64(0x937C71165CF334B3) bool is_weapon_valid(Hash weaponHash)l
extern _native64(0x8DECB02F88F428BC) bool has_ped_got_weapon(Ped ped, Hash weaponHash, bool p2)l
extern _native64(0xB80CA294F2F26749) bool is_ped_weapon_ready_to_shoot(Ped ped)l
extern _native64(0xEFFED78E9011134D) Hash get_ped_weapontype_in_slot(Ped ped, Hash weaponSlot)l
extern _native64(0x015A522136D7F951) int get_ammo_in_ped_weapon(Ped ped, Hash weaponhash)l
extern _native64(0x78F0424C34306220) void add_ammo_to_ped(Ped ped, Hash weaponHash, int ammo)l
extern _native64(0x14E56BC5B5DB6A19) void set_ped_ammo(Ped ped, Hash weaponHash, int ammo)l
extern _native64(0x3EDCB0505123623B) void set_ped_infinite_ammo(Ped ped, bool toggle, Hash weaponHash)l
extern _native64(0x183DADC6AA953186) void set_ped_infinite_ammo_clip(Ped ped, bool toggle)l
extern _native64(0xBF0FD6E56C964FCB) void give_weapon_to_ped(Ped ped, Hash weaponHash, int ammoCount, bool isHidden, bool equipNow)l
extern _native64(0xB282DC6EBD803C75) void give_delayed_weapon_to_ped(Ped ped, Hash weaponHash, int time, bool equipNow)l
extern _native64(0xF25DF915FA38C5F3) void remove_all_ped_weapons(Ped ped, bool p1)l
extern _native64(0x4899CB088EDF59B8) void remove_weapon_from_ped(Ped ped, Hash weaponHash)l
extern _native64(0x6F6981D2253C208F) void hide_ped_weapon_for_scripted_cutscene(Ped ped, bool toggle)l
extern _native64(0x0725A4CCFDED9A70) void set_ped_current_weapon_visible(Ped ped, bool visible, bool deselectWeapon, bool p3, bool p4)l
extern _native64(0x476AE72C1D19D1A8) void set_ped_drops_weapons_when_dead(Ped ped, bool toggle)l
extern _native64(0x2D343D2219CD027A) bool has_ped_been_damaged_by_weapon(Ped ped, Hash weaponHash, int weaponType)l
extern _native64(0x0E98F88A24C5F4B8) void clear_ped_last_weapon_damage(Ped ped)l
extern _native64(0x131D401334815E94) bool has_entity_been_damaged_by_weapon(Entity entity, Hash weaponHash, int weaponType)l
extern _native64(0xAC678E40BE7C74D2) void clear_entity_last_weapon_damage(Entity entity)l
extern _native64(0x6B7513D9966FBEC0) void set_ped_drops_weapon(Ped ped)l
extern _native64(0x208A1888007FC0E6) void set_ped_drops_inventory_weapon(Ped ped, Hash weaponHash, vector3 Offset, any p5)l
extern _native64(0xA38DCFFCEA8962FA) int get_max_ammo_in_clip(Ped ped, Hash weaponHash, bool p2)l
extern _native64(0x2E1202248937775C) bool get_ammo_in_clip(Ped ped, Hash weaponHash, int* ammo)l
extern _native64(0xDCD2A934D65CB497) bool set_ammo_in_clip(Ped ped, Hash weaponHash, int ammo)l
extern _native64(0xDC16122C7A20C933) bool get_max_ammo(Ped ped, Hash weaponHash, int* ammo)l
extern _native64(0x5FD1E1F011E76D7E) void set_ped_ammo_by_type(Ped ped, any ammoType, int ammo)l
extern _native64(0x39D22031557946C1) int get_ped_ammo_by_type(Ped ped, any ammoType)l
extern _native64(0xA4EFEF9440A5B0EF) void set_ped_ammo_to_drop(any p0, any p1)l
extern _native64(0xE620FD3512A04F18) void unk_0xE620FD3512A04F18(float p0)l
extern _native64(0x7FEAD38B326B9F74) Hash get_ped_ammo_type_from_weapon(Ped ped, Hash weaponHash)l
extern _native64(0x6C4D0409BA1A2BC2) bool get_ped_last_weapon_impact_coord(Ped ped, vector3* coords)l
extern _native64(0xD0D7B1E680ED4A1A) void set_ped_gadget(Ped ped, Hash gadgetHash, bool p2)l
extern _native64(0xF731332072F5156C) bool get_is_ped_gadget_equipped(Ped ped, Hash gadgetHash)l
extern _native64(0x0A6DB4965674D243) Hash get_selected_ped_weapon(Ped ped)l
extern _native64(0xFC4BD125DE7611E4) void explode_projectiles(Ped ped, Hash weaponHash, bool p2)l
extern _native64(0xFC52E0F37E446528) void remove_all_projectiles_of_type(Hash weaponHash, bool p1)l
extern _native64(0x840F03E9041E2C9C) float _get_lockon_range_of_current_ped_weapon(Ped ped)l
extern _native64(0x814C9D19DFD69679) float get_max_range_of_current_ped_weapon(Ped ped)l
extern _native64(0x717C8481234E3B88) bool has_vehicle_got_projectile_attached(Ped driver, Vehicle vehicle, Hash weaponHash, any p3)l
extern _native64(0xD966D51AA5B28BB9) void give_weapon_component_to_ped(Ped ped, Hash weaponHash, Hash componentHash)l
extern _native64(0x1E8BE90C74FB4C09) void remove_weapon_component_from_ped(Ped ped, Hash weaponHash, Hash componentHash)l
extern _native64(0xC593212475FAE340) bool has_ped_got_weapon_component(Ped ped, Hash weaponHash, Hash componentHash)l
extern _native64(0x0D78DE0572D3969E) bool is_ped_weapon_component_active(Ped ped, Hash weaponHash, Hash componentHash)l
extern _native64(0x8C0D57EA686FAD87) bool _ped_skip_next_reloading(Ped ped)l
extern _native64(0x20AE33F3AC9C0033) bool make_ped_reload(Ped ped)l
extern _native64(0x5443438F033E29C3) void request_weapon_asset(Hash weaponHash, int p1, int p2)l
extern _native64(0x36E353271F0E90EE) bool has_weapon_asset_loaded(Hash weaponHash)l
extern _native64(0xAA08EF13F341C8FC) void remove_weapon_asset(Hash weaponHash)l
extern _native64(0x9541D3CF0D398F36) Object create_weapon_object(Hash weaponHash, int ammoCount, vector3 vec, bool showWorldModel, float heading, any p7)l
extern _native64(0x33E179436C0B31DB) void give_weapon_component_to_weapon_object(Object weaponObject, Hash addonHash)l
extern _native64(0xF7D82B0D66777611) void remove_weapon_component_from_weapon_object(any p0, any p1)l
extern _native64(0x76A18844E743BF91) bool has_weapon_got_weapon_component(Object weapon, Hash addonHash)l
extern _native64(0xB1FA61371AF7C4B7) void give_weapon_object_to_ped(Object weaponObject, Ped ped)l
extern _native64(0x5CEE3DF569CECAB0) bool does_weapon_take_weapon_component(Hash weaponHash, Hash componentHash)l
extern _native64(0xCAE1DC9A0E22A16D) Object get_weapon_object_from_ped(Ped ped, bool p1)l
extern _native64(0x50969B9B89ED5738) void set_ped_weapon_tint_index(Ped ped, Hash weaponHash, int tintIndex)l
extern _native64(0x2B9EEDC07BD06B9F) int get_ped_weapon_tint_index(Ped ped, Hash weaponHash)l
extern _native64(0xF827589017D4E4A9) void set_weapon_object_tint_index(Object weapon, int tintIndex)l
extern _native64(0xCD183314F7CD2E57) int get_weapon_object_tint_index(Object weapon)l
extern _native64(0x5DCF6C5CAB2E9BF7) int get_weapon_tint_count(Hash weaponHash)l
extern _native64(0xD92C739EE34C9EBA) bool get_weapon_hud_stats(Hash weaponHash, int* outData)l
extern _native64(0xB3CAF387AE12E9F8) bool get_weapon_component_hud_stats(Hash componentHash, int* outData)l
extern _native64(0x3133B907D8B32053) float unk_0x3133B907D8B32053(any p0, any p1)l
extern _native64(0x583BE370B1EC6EB4) int get_weapon_clip_size(Hash weaponHash)l
extern _native64(0x8378627201D5497D) void set_ped_chance_of_firing_blanks(Ped ped, vector2 Bias)l
extern _native64(0xB4C8D77C80C0421E) Entity unk_0xB4C8D77C80C0421E(Ped ped, float p1)l
extern _native64(0x48164DBB970AC3F0) void request_weapon_high_detail_model(Entity weaponObject)l
extern _native64(0x65F0C5AE05943EC7) bool is_ped_current_weapon_silenced(Ped ped)l
extern _native64(0x4B7620C47217126C) bool set_weapon_smokegrenade_assigned(Ped ped)l
extern _native64(0xCEA66DAD478CD39B) any set_flash_light_fade_distance(float distance)l
extern _native64(0x1055AC3A667F09D9) void set_weapon_animation_override(Ped ped, Hash animStyle)l
extern _native64(0x3BE0BB12D25FB305) int get_weapon_damage_type(Hash weaponHash)l
extern _native64(0xE4DCEC7FD5B739A5) void unk_0xE4DCEC7FD5B739A5(Ped ped)l
extern _native64(0xBC7BE5ABC0879F74) bool can_use_weapon_on_parachute(Hash weaponHash)l
extern _native64(0x4757F00BC6323CFE) void _set_weapon_damage_modifier(Hash weaponHash, float modifier)l
#pragma endregion //}
#pragma region ITEMSET //{
extern _native64(0x35AD299F50D91B24) any create_itemset(bool p0)l
extern _native64(0xDE18220B1C183EDA) void destroy_itemset(any p0)l
extern _native64(0xB1B1EA596344DFAB) bool is_itemset_valid(any p0)l
extern _native64(0xE3945201F14637DD) bool add_to_itemset(any p0, any p1)l
extern _native64(0x25E68244B0177686) void remove_from_itemset(any p0, any p1)l
extern _native64(0xD9127E83ABF7C631) any get_itemset_size(any p0)l
extern _native64(0x7A197E2521EE2BAB) any get_indexed_item_in_itemset(any p0, any p1)l
extern _native64(0x2D0FC594D1E9C107) bool is_in_itemset(any p0, any p1)l
extern _native64(0x41BC0D722FC04221) void clean_itemset(any p0)l
#pragma endregion //}
#pragma region STREAMING //{
extern _native64(0xBD6E84632DD4CB3F) void load_all_objects_now()l
extern _native64(0x4448EB75B4904BDB) void load_scene(vector3 vec)l
extern _native64(0xC4582015556D1C46) any network_update_load_scene()l
extern _native64(0x64E630FAF5F60F44) void network_stop_load_scene()l
extern _native64(0x41CA5A33160EA4AB) bool is_network_loading_scene()l
extern _native64(0xE37B76C387BE28ED) void set_interior_active(int interiorID, bool toggle)l
extern _native64(0x963D27A58DF860AC) void request_model(Hash model)l
extern _native64(0xA0261AEF7ACFC51E) void request_menu_ped_model(Hash model)l
extern _native64(0x98A4EB5D89A0C952) bool has_model_loaded(Hash model)l
extern _native64(0x8A7A40100EDFEC58) void unk_0x8A7A40100EDFEC58(int interiorID, const char* roomName)l
extern _native64(0xE532F5D78798DAAB) void set_model_as_no_longer_needed(Hash model)l
extern _native64(0x35B9E0803292B641) bool is_model_in_cdimage(Hash model)l
extern _native64(0xC0296A2EDF545E92) bool is_model_valid(Hash model)l
extern _native64(0x19AAC8F07BFEC53E) bool is_model_a_vehicle(Hash model)l
extern _native64(0x07503F7948F491A7) any request_collision_at_coord(vector3 vec)l
extern _native64(0x923CB32A3B874FCB) void request_collision_for_model(Hash model)l
extern _native64(0x22CCA434E368F03A) bool has_collision_for_model_loaded(Hash model)l
extern _native64(0xC9156DC11411A9EA) void request_additional_collision_at_coord(float p0, float p1, float p2)l
extern _native64(0x2DA49C3B79856961) bool does_anim_dict_exist(const char* animDict)l
extern _native64(0xD3BD40951412FEF6) void request_anim_dict(const char* animDict)l
extern _native64(0xD031A9162D01088C) bool has_anim_dict_loaded(const char* animDict)l
extern _native64(0xF66A602F829E2A06) void remove_anim_dict(const char* animDict)l
extern _native64(0x6EA47DAE7FAD0EED) void request_anim_set(const char* animSet)l
extern _native64(0xC4EA073D86FB29B0) bool has_anim_set_loaded(const char* animSet)l
extern _native64(0x16350528F93024B3) void remove_anim_set(const char* animSet)l
extern _native64(0xD2A71E1A77418A49) void request_clip_set(const char* clipSet)l
extern _native64(0x318234F4F3738AF3) bool has_clip_set_loaded(const char* clipSet)l
extern _native64(0x01F73A131C18CD94) void remove_clip_set(const char* clipSet)l
extern _native64(0x41B4893843BBDB74) void request_ipl(const char* iplName)l
extern _native64(0xEE6C5AD3ECE0A82D) void remove_ipl(const char* iplName)l
extern _native64(0x88A741E44A2B3495) bool is_ipl_active(const char* iplName)l
extern _native64(0x6E0C692677008888) void set_streaming(bool toggle)l
extern _native64(0x717CD6E6FAEBBEDC) void set_game_pauses_for_streaming(bool toggle)l
extern _native64(0x77B5F9A36BF96710) void set_reduce_ped_model_budget(bool toggle)l
extern _native64(0x80C527893080CCF3) void set_reduce_vehicle_model_budget(bool toggle)l
extern _native64(0x42CBE54462D92634) void set_ditch_police_models(bool toggle)l
extern _native64(0x4060057271CEBC89) int get_number_of_streaming_requests()l
extern _native64(0x944955FB2A3935C8) any request_ptfx_asset()l
extern _native64(0xCA7D9B86ECA7481B) bool has_ptfx_asset_loaded()l
extern _native64(0x88C6814073DD4A73) void remove_ptfx_asset()l
extern _native64(0xB80D8756B4668AB6) void request_named_ptfx_asset(const char* fxName)l
extern _native64(0x8702416E512EC454) bool has_named_ptfx_asset_loaded(const char* fxName)l
extern _native64(0x5F61EBBE1A00F96D) void _remove_named_ptfx_asset(const char* fxName)l
extern _native64(0xCB9E1EB3BE2AF4E9) void set_vehicle_population_budget(int p0)l
extern _native64(0x8C95333CFC3340F3) void set_ped_population_budget(int p0)l
extern _native64(0x31B73D1EA9F01DA2) void clear_focus()l
extern _native64(0xBB7454BAFF08FE25) void _set_focus_area(vector3 vec, vector3 offset)l
extern _native64(0x198F77705FA0931D) void set_focus_entity(Entity entity)l
extern _native64(0x2DDFF3FB9075D747) bool is_entity_focus(Entity entity)l
extern _native64(0x0811381EF5062FEC) void unk_0x0811381EF5062FEC(Entity p0)l
extern _native64(0xAF12610C644A35C9) void unk_0xAF12610C644A35C9(const char* p0, bool p1)l
extern _native64(0x4E52E752C76E7E7A) void unk_0x4E52E752C76E7E7A(any p0)l
extern _native64(0x219C7B8D53E429FD) any format_focus_heading(vector3 vec, float rad, any p4, any p5)l
extern _native64(0x1F3F018BC3AFA77C) any unk_0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, any p7, any p8)l
extern _native64(0x0AD9710CEE2F590F) any unk_0x0AD9710CEE2F590F(float p0, float p1, float p2, float p3, float p4, float p5, any p6)l
extern _native64(0x1EE7D8DF4425F053) void unk_0x1EE7D8DF4425F053(any p0)l
extern _native64(0x7D41E9D2D17C5B2D) any unk_0x7D41E9D2D17C5B2D(any p0)l
extern _native64(0x07C313F94746702C) any unk_0x07C313F94746702C(any p0)l
extern _native64(0xBC9823AB80A3DCAC) any unk_0xBC9823AB80A3DCAC()l
extern _native64(0x212A8D0D2BABFAC2) bool new_load_scene_start(float p0, float p1, float p2, float p3, float p4, float p5, float p6, any p7)l
extern _native64(0xACCFB4ACF53551B0) bool new_load_scene_start_sphere(float p0, float p1, float p2, float p3, any p4)l
extern _native64(0xC197616D221FF4A4) void new_load_scene_stop()l
extern _native64(0xA41A05B6CB741B85) bool is_new_load_scene_active()l
extern _native64(0x01B8247A7A8B9AD1) bool is_new_load_scene_loaded()l
extern _native64(0x71E7B2E657449AAD) any unk_0x71E7B2E657449AAD()l
extern _native64(0xFAA23F2CBA159D67) void start_player_switch(Ped from, Ped to, int flags, int switchType)l
extern _native64(0x95C0A5BBDC189AA1) void stop_player_switch()l
extern _native64(0xD9D2CFFF49FAB35F) bool is_player_switch_in_progress()l
extern _native64(0xB3C94A90D9FC9E62) int get_player_switch_type()l
extern _native64(0xB5D7B26B45720E05) int get_ideal_player_switch_type(vector3 vec_1, vector3 vec_2)l
extern _native64(0x470555300D10B2A5) int get_player_switch_state()l
extern _native64(0x20F898A5D9782800) int get_player_short_switch_state()l
extern _native64(0x5F2013F8BC24EE69) void unk_0x5F2013F8BC24EE69(int p0)l
extern _native64(0x78C0D93253149435) any unk_0x78C0D93253149435()l
extern _native64(0xC208B673CE446B61) void set_player_switch_outro(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, any p8)l
extern _native64(0x0FDE9DBFC0A6BC65) void unk_0x0FDE9DBFC0A6BC65(any* p0)l
extern _native64(0x43D1680C6D19A8E9) void unk_0x43D1680C6D19A8E9()l
extern _native64(0x74DE2E8739086740) void unk_0x74DE2E8739086740()l
extern _native64(0x8E2A065ABDAE6994) void unk_0x8E2A065ABDAE6994()l
extern _native64(0xAD5FDF34B81BFE79) void unk_0xAD5FDF34B81BFE79()l
extern _native64(0xDFA80CB25D0A19B3) any unk_0xDFA80CB25D0A19B3()l
extern _native64(0xD4793DFF3AF2ABCD) void unk_0xD4793DFF3AF2ABCD()l
extern _native64(0xBD605B8E0E18B3BB) void unk_0xBD605B8E0E18B3BB()l
extern _native64(0xAAB3200ED59016BC) void _switch_out_player(Ped ped, int flags, int unknown)l
extern _native64(0xD8295AF639FD9CB8) void unk_0xD8295AF639FD9CB8(any p0)l
extern _native64(0x933BBEEB8C61B5F4) any unk_0x933BBEEB8C61B5F4()l
extern _native64(0x08C2D6C52A3104BB) int set_player_inverted_up()l
extern _native64(0x5B48A06DD0E792A5) any unk_0x5B48A06DD0E792A5()l
extern _native64(0x5B74EA8CFD5E3E7E) any destroy_player_in_pause_menu()l
extern _native64(0x1E9057A74FD73E23) void unk_0x1E9057A74FD73E23()l
extern _native64(0x0C15B0E443B2349D) any unk_0x0C15B0E443B2349D()l
extern _native64(0xA76359FC80B2438E) void unk_0xA76359FC80B2438E(float p0)l
extern _native64(0xBED8CA5FF5E04113) void unk_0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3)l
extern _native64(0x472397322E92A856) void unk_0x472397322E92A856()l
extern _native64(0x40AEFD1A244741F2) void unk_0x40AEFD1A244741F2(bool p0)l
extern _native64(0x03F1A106BDA7DD3E) void unk_0x03F1A106BDA7DD3E()l
extern _native64(0x95A7DABDDBB78AE7) void unk_0x95A7DABDDBB78AE7(any* p0, any* p1)l
extern _native64(0x63EB2B972A218CAC) void unk_0x63EB2B972A218CAC()l
extern _native64(0xFB199266061F820A) any unk_0xFB199266061F820A()l
extern _native64(0xF4A0DADB70F57FA6) void unk_0xF4A0DADB70F57FA6()l
extern _native64(0x5068F488DDB54DD8) any unk_0x5068F488DDB54DD8()l
extern _native64(0x3D245789CE12982C) void prefetch_srl(const char* srl)l
extern _native64(0xD0263801A4C5B0BB) bool is_srl_loaded()l
extern _native64(0x9BADDC94EF83B823) void begin_srl()l
extern _native64(0x0A41540E63C9EE17) void end_srl()l
extern _native64(0xA74A541C6884E7B8) void set_srl_time(float p0)l
extern _native64(0xEF39EE20C537E98C) void unk_0xEF39EE20C537E98C(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0xBEB2D9A1D9A8F55A) void unk_0xBEB2D9A1D9A8F55A(any p0, any p1, any p2, any p3)l
extern _native64(0x20C6C7E4EB082A7F) void unk_0x20C6C7E4EB082A7F(bool p0)l
extern _native64(0xF8155A7F03DDFC8E) void unk_0xF8155A7F03DDFC8E(any p0)l
extern _native64(0xB85F26619073E775) void set_hd_area(vector3 vec, float ground)l
extern _native64(0xCE58B1CFB9290813) void clear_hd_area()l
extern _native64(0xB5A4DB34FE89B88A) void unk_0xB5A4DB34FE89B88A()l
extern _native64(0xCCE26000E9A6FAD7) void shutdown_creator_budget()l
extern _native64(0x0BC3144DEB678666) bool unk_0x0BC3144DEB678666(Hash modelHash)l
extern _native64(0xF086AD9354FAC3A3) void unk_0xF086AD9354FAC3A3(any p0)l
extern _native64(0x3D3D8B3BE5A83D35) any unk_0x3D3D8B3BE5A83D35()l
#pragma endregion //}
#pragma region SCRIPT //{
extern _native64(0x6EB5F71AA68F2E8E) void request_script(const char* scriptName)l
extern _native64(0xC90D2DCACD56184C) void set_script_as_no_longer_needed(const char* scriptName)l
extern _native64(0xE6CC9F3BA0FB9EF1) bool has_script_loaded(const char* scriptName)l
extern _native64(0xFC04745FBE67C19A) bool does_script_exist(const char* scriptName)l
extern _native64(0xD62A67D26D9653E6) void request_script_with_name_hash(Hash scriptHash)l
extern _native64(0xC5BC038960E9DB27) void set_script_with_name_hash_as_no_longer_needed(Hash scriptHash)l
extern _native64(0x5F0F0C783EB16C04) bool has_script_with_name_hash_loaded(Hash scriptHash)l
extern _native64(0xF86AA3C56BA31381) bool _does_script_with_name_hash_exist(Hash scriptHash)l
extern _native64(0xC8B189ED9138BCD4) void terminate_thread(int threadId)l
extern _native64(0x46E9AE36D8FA6417) bool is_thread_active(int threadId)l
extern _native64(0x05A42BA9FC8DA96B) const char* _get_name_of_thread(int threadId)l
extern _native64(0xDADFADA5A20143A8) void _begin_enumerating_threads()l
extern _native64(0x30B4FA1C82DD4B9F) int _get_id_of_next_thread_in_enumeration()l
extern _native64(0xC30338E8088E2E21) int get_id_of_this_thread()l
extern _native64(0x1090044AD1DA76FA) void terminate_this_thread()l
extern _native64(0x2C83A9DA6BFFC4F9) int _get_number_of_instances_of_script_with_name_hash(Hash scriptHash)l
extern _native64(0x442E0A7EDE4A738A) const char* get_this_script_name()l
extern _native64(0x8A1C8B1738FFE87E) Hash get_hash_of_this_script_name()l
extern _native64(0x5F92A689A06620AA) int get_number_of_events(bool p0)l
extern _native64(0x936E6168A9BCEDB5) bool get_event_exists(bool p0, int p1)l
extern _native64(0xD8F66A3A60C62153) int get_event_at_index(bool p0, int p1)l
extern _native64(0x2902843FCD2B2D79) bool get_event_data(bool p0, int p1, const void* p2, int p3)l
extern _native64(0x5AE99C571D5BBE5D) void trigger_script_event(bool p0, const void* args, int argCount, int bitset)l
extern _native64(0x078EBE9809CCD637) void shutdown_loading_screen()l
extern _native64(0x5262CC1995D07E09) void set_no_loading_screen(bool toggle)l
extern _native64(0x18C1270EA7F199BC) bool _get_no_loading_screen()l
extern _native64(0xB1577667C3708F9B) void unk_0xB1577667C3708F9B()l
#pragma endregion //}
#pragma region UI //{
extern _native64(0xABA17D7CE615ADBF) void _set_loading_prompt_text_entry(const char* string)l
extern _native64(0xBD12F8228410D9B4) void _show_loading_prompt(int busySpinnerType)l
extern _native64(0x10D373323E5B9C0D) void _remove_loading_prompt()l
extern _native64(0xC65AB383CD91DF98) void unk_0xC65AB383CD91DF98()l
extern _native64(0xD422FCC5F239A915) bool _is_loading_prompt_being_displayed()l
extern _native64(0xB2A592B04648A9CB) any unk_0xB2A592B04648A9CB()l
extern _native64(0x9245E81072704B8A) void unk_0x9245E81072704B8A(bool p0)l
extern _native64(0xAAE7CE1D63167423) void _show_cursor_this_frame()l
extern _native64(0x8DB8CFFD58B62552) void _set_cursor_sprite(int spriteId)l
extern _native64(0x98215325A695E78A) void unk_0x98215325A695E78A(bool p0)l
extern _native64(0x3D9ACB1EB139E702) any unk_0x3D9ACB1EB139E702()l
extern _native64(0x632B2940C67F4EA9) bool unk_0x632B2940C67F4EA9(int scaleformHandle, any* p1, any* p2, any* p3)l
extern _native64(0x6F1554B0CC2089FA) void unk_0x6F1554B0CC2089FA(bool p0)l
extern _native64(0x55598D21339CB998) void unk_0x55598D21339CB998(float p0)l
extern _native64(0x25F87B30C382FCA7) void unk_0x25F87B30C382FCA7()l
extern _native64(0xA8FDB297A8D25FBA) void unk_0xA8FDB297A8D25FBA()l
extern _native64(0xBE4390CB40B3E627) void _remove_notification(int notificationId)l
extern _native64(0xA13C11E1B5C06BFC) void unk_0xA13C11E1B5C06BFC()l
extern _native64(0x583049884A2EEE3C) void unk_0x583049884A2EEE3C()l
extern _native64(0xFDB423997FA30340) void unk_0xFDB423997FA30340()l
extern _native64(0xE1CD1E48E025E661) void unk_0xE1CD1E48E025E661()l
extern _native64(0xA9CBFD40B3FA3010) any unk_0xA9CBFD40B3FA3010()l
extern _native64(0xD4438C0564490E63) void unk_0xD4438C0564490E63()l
extern _native64(0xB695E2CD0A2DA9EE) void unk_0xB695E2CD0A2DA9EE()l
extern _native64(0x82352748437638CA) int _get_current_notification()l
extern _native64(0x56C8B608CFD49854) void unk_0x56C8B608CFD49854()l
extern _native64(0xADED7F5748ACAFE6) void unk_0xADED7F5748ACAFE6()l
extern _native64(0x92F0DA1E27DB96DC) void unk_0x92F0DA1E27DB96DC(int p0)l
extern _native64(0x17430B918701C342) void _set_notification_flash_color(RGBA colour)l
extern _native64(0x17AD8C9706BDD88A) void unk_0x17AD8C9706BDD88A(any p0)l
extern _native64(0x4A0C7C9BB10ABB36) void unk_0x4A0C7C9BB10ABB36(bool p0)l
extern _native64(0xFDD85225B2DEA55E) void unk_0xFDD85225B2DEA55E()l
extern _native64(0xFDEC055AB549E328) void unk_0xFDEC055AB549E328()l
extern _native64(0x80FE4F3AB4E1B62A) void unk_0x80FE4F3AB4E1B62A()l
extern _native64(0xBAE4F9B97CD43B30) void unk_0xBAE4F9B97CD43B30(bool p0)l
extern _native64(0x317EBA71D7543F52) void unk_0x317EBA71D7543F52(any* p0, any* p1, any* p2, any* p3)l
extern _native64(0x202709F4C58A0424) void _set_notification_text_entry(const char* type)l
extern _native64(0x2B7E9A4EAAA93C89) int _set_notification_message_2(const char* p0, int p1, int p2, int p3, bool p4, const char* picName1, const char* picName2)l
extern _native64(0x1CCD9A37359072CF) int _set_notification_message(const char* picName1, const char* picName2, bool flash, int iconType, const char* sender, const char* subject)l
extern _native64(0xC6F580E4C94926AC) int _set_notification_message_3(const char* picName1, const char* picName2, bool p2, any p3, const char* p4, const char* p5)l
extern _native64(0x1E6611149DB3DB6B) int _set_notification_message_4(const char* picName1, const char* picName2, bool flash, int iconType, const char* sender, const char* subject, float duration)l
extern _native64(0x5CBF7BADE20DB93E) int _set_notification_message_clan_tag(const char* picName1, const char* picName2, bool flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag)l
extern _native64(0x531B84E7DA981FB6) int _set_notification_message_clan_tag_2(const char* picName1, const char* picName2, bool flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9)l
extern _native64(0x2ED7843F8F801023) int _draw_notification(bool blink, bool p1)l
extern _native64(0x44FA03975424A0EE) int _draw_notification_2(bool blink, bool p1)l
extern _native64(0x378E809BF61EC840) int _draw_notification_3(bool blink, bool p1)l
extern _native64(0xAA295B6F28BD587D) int _draw_notification_icon(const char* p0, const char* p1, int p2, int p3, const char* p4)l
extern _native64(0x97C9E4E7024A8F2C) int _notification_send_apartment_invite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0, int clanDesc, RGB colour)l
extern _native64(0x137BC35589E34E1E) int _notification_send_clan_invite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0, int clanDesc, const char* playerName, RGB colour)l
extern _native64(0x33EE12743CCD6343) any unk_0x33EE12743CCD6343(any p0, any p1, any p2)l
extern _native64(0xC8F3AAF93D0600BF) any unk_0xC8F3AAF93D0600BF(any p0, any p1, any p2, any p3)l
extern _native64(0x7AE0589093A2E088) any unk_0x7AE0589093A2E088(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0xF020C96915705B3A) int _draw_notification_4(bool blink, bool p1)l
extern _native64(0x8EFCCF6EC66D85E4) any unk_0x8EFCCF6EC66D85E4(any* p0, any* p1, any* p2, bool p3, bool p4)l
extern _native64(0xB6871B0555B02996) any unk_0xB6871B0555B02996(any* p0, any* p1, any p2, any* p3, any* p4, any p5)l
extern _native64(0xD202B92CBF1D816F) any unk_0xD202B92CBF1D816F(int type, int image, const char* text)l
extern _native64(0xDD6CB2CCE7C2735C) any unk_0xDD6CB2CCE7C2735C(int type, const char* button, const char* text)l
extern _native64(0xB87A37EEB7FAA67D) void begin_text_command_print(const char* GxtEntry)l
extern _native64(0x9D77056A530643F6) void end_text_command_print(int duration, bool drawImmediately)l
extern _native64(0x853648FD1063A213) void begin_text_command_is_message_displayed(const char* text)l
extern _native64(0x8A9BA1AB3E237613) bool end_text_command_is_message_displayed()l
extern _native64(0x25FBB336DF1804CB) void begin_text_command_display_text(const char* text)l
extern _native64(0xCD015E5BB0D96A57) void end_text_command_display_text(vector2 vector)l
extern _native64(0x54CE8AC98E120CAB) void _begin_text_command_width(const char* text)l
extern _native64(0x85F061DA64ED2F67) float _end_text_command_get_width(int font)l
extern _native64(0x521FB041D93DD0E4) void _begin_text_command_line_count(const char* entry)l
extern _native64(0x9040DFB09BE75706) int _end_text_command_get_line_count(vector2 vector)l
extern _native64(0x8509B634FBE7DA11) void begin_text_command_display_help(const char* inputType)l
extern _native64(0x238FFE5C7B0498A6) void end_text_command_display_help(any p0, bool loop, bool beep, int shape)l
extern _native64(0x0A24DA3A41B718F5) void begin_text_command_is_this_help_message_being_displayed(const char* labelName)l
extern _native64(0x10BDDBFC529428DD) bool end_text_command_is_this_help_message_being_displayed(int p0)l
extern _native64(0xF9113A30DE5C6670) void begin_text_command_set_blip_name(const char* gxtentry)l
extern _native64(0xBC38B49BCB83BC9B) void end_text_command_set_blip_name(Blip blip)l
extern _native64(0x23D69E0465570028) void _begin_text_command_objective(const char* p0)l
extern _native64(0xCFDBDF5AE59BA0F4) void _end_text_command_objective(bool p0)l
extern _native64(0xE124FA80A759019C) void begin_text_command_clear_print(const char* text)l
extern _native64(0xFCC75460ABA29378) void end_text_command_clear_print()l
extern _native64(0x8F9EE5687F8EECCD) void _begin_text_command_timer(const char* p0)l
extern _native64(0xA86911979638106F) void _end_text_command_timer(bool p0)l
extern _native64(0x03B504CF259931BC) void add_text_component_integer(int value)l
extern _native64(0xE7DCB5B874BCD96E) void add_text_component_float(float value, int decimalPlaces)l
extern _native64(0xC63CD5D2920ACBE7) void add_text_component_substring_text_label(const char* labelName)l
extern _native64(0x17299B63C7683A2B) void add_text_component_substring_text_label_hash_key(Hash gxtEntryHash)l
extern _native64(0x80EAD8E2E1D5D52E) void add_text_component_substring_blip_name(Blip blip)l
extern _native64(0x6C188BE134E074AA) void add_text_component_substring_player_name(const char* text)l
extern _native64(0x1115F16B8AB9E8BF) void add_text_component_substring_time(int timestamp, int flags)l
extern _native64(0x0E4C749FF9DE9CC4) void add_text_component_formatted_integer(int value, bool commaSeparated)l
extern _native64(0x761B77454205A61D) void _add_text_component_app_title(const char* p0, int p1)l
extern _native64(0x94CF4AC034C9C986) void add_text_component_substring_website(const char* website)l
extern _native64(0x5F68520888E69014) void _add_text_component_scaleform(const char* p0)l
extern _native64(0x39BBF623FC803EAC) void _set_notification_color_next(int p0)l
extern _native64(0x169BD9382084C8C0) const char* _get_text_substring(const char* text, int position, int length)l
extern _native64(0xB2798643312205C5) const char* _get_text_substring_safe(const char* text, int position, int length, int maxLength)l
extern _native64(0xCE94AEBA5D82908A) const char* _get_text_substring_slice(const char* text, int startPosition, int endPosition)l
extern _native64(0x7B5280EBA9840C72) const char* _get_label_text(const char* labelName)l
extern _native64(0xCC33FA791322B9D9) void clear_prints()l
extern _native64(0x9D292F73ADBD9313) void clear_brief()l
extern _native64(0x6178F68A87A4D3A0) void clear_all_help_messages()l
extern _native64(0xCF708001E1E536DD) void clear_this_print(const char* p0)l
extern _native64(0x2CEA2839313C09AC) void clear_small_prints()l
extern _native64(0x1C7302E725259789) bool does_text_block_exist(const char* gxt)l
extern _native64(0x71A78003C8E71424) void request_additional_text(const char* gxt, int slot)l
extern _native64(0x6009F9F1AE90D8A6) void _request_additional_text_2(const char* gxt, int slot)l
extern _native64(0x02245FE4BED318B8) bool has_additional_text_loaded(int slot)l
extern _native64(0x2A179DF17CCF04CD) void clear_additional_text(int p0, bool p1)l
extern _native64(0x8B6817B71B85EBF0) bool is_streaming_additional_text(int p0)l
extern _native64(0xADBF060E2B30C5BC) bool has_this_additional_text_loaded(const char* gxt, int slot)l
extern _native64(0x7984C03AA5CC2F41) bool is_message_being_displayed()l
extern _native64(0xAC09CA973C564252) bool does_text_label_exist(const char* gxt)l
extern _native64(0x801BD273D3A23F74) int get_length_of_string_with_this_text_label(const char* gxt)l
extern _native64(0xF030907CCBB8A9FD) int get_length_of_literal_string(const char* string)l
extern _native64(0x43E4111189E54F0E) int _get_length_of_string(const char* p0)l
extern _native64(0xD0EF8A959B8A4CB9) const char* get_street_name_from_hash_key(Hash hash)l
extern _native64(0x1930DFA731813EC4) bool is_hud_preference_switched_on()l
extern _native64(0x9EB6522EA68F22FE) bool is_radar_preference_switched_on()l
extern _native64(0xAD6DACA4BA53E0A4) bool is_subtitle_preference_switched_on()l
extern _native64(0xA6294919E56FF02A) void display_hud(bool toggle)l
extern _native64(0x7669F9E39DC17063) void unk_0x7669F9E39DC17063()l
extern _native64(0x402F9ED62087E898) void unk_0x402F9ED62087E898()l
extern _native64(0xA0EBB943C300E693) any display_radar(bool Toggle)l
extern _native64(0xA86478C6958735C5) bool is_hud_hidden()l
extern _native64(0x157F93B036700462) bool is_radar_hidden()l
extern _native64(0xAF754F20EB5CD51A) bool _is_radar_enabled()l
extern _native64(0x4F7D8A9BFB0B43E9) void set_blip_route(Blip blip, bool enabled)l
extern _native64(0x837155CD2F63DA09) void set_blip_route_colour(Blip blip, int colour)l
extern _native64(0x60296AF4BA14ABC5) void add_next_message_to_previous_briefs(bool p0)l
extern _native64(0x57D760D55F54E071) void unk_0x57D760D55F54E071(bool p0)l
extern _native64(0xBD12C5EEE184C337) void responding_as_temp(float p0)l
extern _native64(0x096EF57A0C999BBA) void set_radar_zoom(int zoomLevel)l
extern _native64(0xF98E4B3E56AFC7B1) void unk_0xF98E4B3E56AFC7B1(any p0, float p1)l
extern _native64(0xCB7CC0D58405AD41) void _set_radar_zoom_level_this_frame(float zoomLevel)l
extern _native64(0xD2049635DEB9C375) void unk_0xD2049635DEB9C375()l
extern _native64(0x7C9C91AB74A0360F) void get_hud_colour(int hudColorIndex, int* r, int* g, int* b, int* a)l
extern _native64(0xD68A5FF8A3A89874) void unk_0xD68A5FF8A3A89874(RGBA colour)l
extern _native64(0x16A304E6CB2BFAB9) void unk_0x16A304E6CB2BFAB9(RGBA colour)l
extern _native64(0x1CCC708F0F850613) void _set_hud_colours_switch(int hudColorIndex, int hudColorIndex2)l
extern _native64(0xF314CF4F0211894E) void _set_hud_colour(int hudColorIndex, RGBA colour)l
extern _native64(0x02CFBA0C9E9275CE) void flash_ability_bar(bool toggle)l
extern _native64(0x9969599CCFF5D85E) void set_ability_bar_value(float p0, float p1)l
extern _native64(0xA18AFB39081B6A1F) any flash_wanted_display(bool p0)l
extern _native64(0xBA8D65C1C65702E5) void unk_0xBA8D65C1C65702E5(bool p0)l
extern _native64(0xDB88A37483346780) float _get_text_scale_height(float size, int font)l
extern _native64(0x07C837F9A01C34C9) void set_text_scale(float p0, float size)l
extern _native64(0xBE6B23FFA53FB442) void set_text_colour(RGBA colour)l
extern _native64(0xC02F4DBFB51D988B) void set_text_centre(bool align)l
extern _native64(0x6B3C4650BC8BEE47) void set_text_right_justify(bool toggle)l
extern _native64(0x4E096588B13FFECA) void set_text_justification(int justifyType)l
extern _native64(0x63145D9C883A1A70) void set_text_wrap(float start, float end)l
extern _native64(0xA50ABC31E3CDFAFF) void set_text_leading(bool p0)l
extern _native64(0x038C1F517D7FDCF8) void set_text_proportional(bool p0)l
extern _native64(0x66E0276CC5F6B9DA) void set_text_font(int fontType)l
extern _native64(0x1CA3E9EAC9D93E5E) void set_text_drop_shadow()l
extern _native64(0x465C84BC39F1C351) void set_text_dropshadow(int distance, RGBA colour)l
extern _native64(0x2513DFB0FB8400FE) void set_text_outline()l
extern _native64(0x441603240D202FA6) void set_text_edge(int p0, RGBA colour)l
extern _native64(0x5F15302936E07111) void set_text_render_id(int renderId)l
extern _native64(0x52F0982D7FD156B6) int get_default_script_rendertarget_render_id()l
extern _native64(0x57D9C12635E25CE3) bool register_named_rendertarget(const char* p0, bool p1)l
extern _native64(0x78DCDC15C9F116B4) bool is_named_rendertarget_registered(const char* p0)l
extern _native64(0xE9F6FFE837354DD4) bool release_named_rendertarget(any* p0)l
extern _native64(0xF6C09E276AEB3F2D) void link_named_rendertarget(Hash hash)l
extern _native64(0x1A6478B61C6BDC3B) any get_named_rendertarget_render_id(const char* p0)l
extern _native64(0x113750538FA31298) bool is_named_rendertarget_linked(Hash hash)l
extern _native64(0x8DFCED7A656F8802) void clear_help(bool toggle)l
extern _native64(0xDAD37F45428801AE) bool is_help_message_on_screen()l
extern _native64(0x214CD562A939246A) bool unk_0x214CD562A939246A()l
extern _native64(0x4D79439A6B55AC67) bool is_help_message_being_displayed()l
extern _native64(0x327EDEEEAC55C369) bool is_help_message_fading_out()l
extern _native64(0x4A9923385BDB9DAD) bool unk_0x4A9923385BDB9DAD()l
extern _native64(0x186E5D252FA50E7D) int _get_blip_info_id_iterator()l
extern _native64(0x9A3FF3DE163034E8) int get_number_of_active_blips()l
extern _native64(0x14F96AA50D6FBEA7) Blip get_next_blip_info_id(int blipSprite)l
extern _native64(0x1BEDE233E6CD2A1F) Blip get_first_blip_info_id(int blipSprite)l
extern _native64(0xFA7C7F0AADF25D09) vector3 get_blip_info_id_coord(Blip blip)l
extern _native64(0x1E314167F701DC3B) int get_blip_info_id_display(Blip blip)l
extern _native64(0xBE9B0959FFD0779B) int get_blip_info_id_type(Blip blip)l
extern _native64(0x4BA4E2553AFEDC2C) Entity get_blip_info_id_entity_index(Blip blip)l
extern _native64(0x9B6786E4C03DD382) Pickup get_blip_info_id_pickup_index(Blip blip)l
extern _native64(0xBC8DBDCA2436F7E8) Blip get_blip_from_entity(Entity entity)l
extern _native64(0x46818D79B1F7499A) Blip add_blip_for_radius(vector3 pos, float radius)l
extern _native64(0x5CDE92C702A8FCE7) Blip add_blip_for_entity(Entity entity)l
extern _native64(0xBE339365C863BD36) Blip add_blip_for_pickup(Pickup pickup)l
extern _native64(0x5A039BB0BCA604B6) Blip add_blip_for_coord(vector3 vec)l
extern _native64(0x72DD432F3CDFC0EE) void unk_0x72DD432F3CDFC0EE(vector3 pos, float radius, int p4)l
extern _native64(0x60734CC207C9833C) void unk_0x60734CC207C9833C(bool p0)l
extern _native64(0xAE2AF67E9D9AF65D) void set_blip_coords(Blip blip, vector3 pos)l
extern _native64(0x586AFE3FF72D996E) vector3 get_blip_coords(Blip blip)l
extern _native64(0xDF735600A4696DAF) void set_blip_sprite(Blip blip, int spriteId)l
extern _native64(0x1FC877464A04FC4F) int get_blip_sprite(Blip blip)l
extern _native64(0xEAA0FFE120D92784) void set_blip_name_from_text_file(Blip blip, const char* gxtEntry)l
extern _native64(0x127DE7B20C60A6A3) void set_blip_name_to_player_name(Blip blip, Player player)l
extern _native64(0x45FF974EEE1C8734) void set_blip_alpha(Blip blip, int alpha)l
extern _native64(0x970F608F0EE6C885) int get_blip_alpha(Blip blip)l
extern _native64(0x2AEE8F8390D2298C) void set_blip_fade(Blip blip, int opacity, int duration)l
extern _native64(0xF87683CDF73C3F6E) void set_blip_rotation(Blip blip, int rotation)l
extern _native64(0xD3CD6FD297AE87CC) void set_blip_flash_timer(Blip blip, int duration)l
extern _native64(0xAA51DB313C010A7E) void set_blip_flash_interval(Blip blip, any p1)l
extern _native64(0x03D7FB09E75D6B7E) void set_blip_colour(Blip blip, int color)l
extern _native64(0x14892474891E09EB) void set_blip_secondary_colour(Blip blip, FloatRGB colour)l
extern _native64(0xDF729E8D20CF7327) int get_blip_colour(Blip blip)l
extern _native64(0x729B5F1EFBC0AAEE) int get_blip_hud_colour(Blip blip)l
extern _native64(0xDA5F8727EB75B926) bool is_blip_short_range(Blip blip)l
extern _native64(0xE41CA53051197A27) bool is_blip_on_minimap(Blip blip)l
extern _native64(0xDD2238F57B977751) bool unk_0xDD2238F57B977751(any p0)l
extern _native64(0x54318C915D27E4CE) void unk_0x54318C915D27E4CE(any p0, bool p1)l
extern _native64(0xE2590BC29220CEBB) void set_blip_high_detail(Blip blip, bool toggle)l
extern _native64(0x24AC0137444F9FD5) void set_blip_as_mission_creator_blip(Blip blip, bool toggle)l
extern _native64(0x26F49BF3381D933D) bool is_mission_creator_blip(Blip blip)l
extern _native64(0x5C90988E7C8E1AF4) Blip disable_blip_name_for_var()l
extern _native64(0x4167EFE0527D706E) bool unk_0x4167EFE0527D706E()l
extern _native64(0xF1A6C18B35BCADE6) void unk_0xF1A6C18B35BCADE6(bool p0)l
extern _native64(0xB14552383D39CE3E) void set_blip_flashes(Blip blip, bool toggle)l
extern _native64(0x2E8D9498C56DD0D1) void set_blip_flashes_alternate(Blip blip, bool toggle)l
extern _native64(0xA5E41FD83AD6CEF0) bool is_blip_flashing(Blip blip)l
extern _native64(0xBE8BE4FE60E27B72) void set_blip_as_short_range(Blip blip, bool toggle)l
extern _native64(0xD38744167B2FA257) void set_blip_scale(Blip blip, float scale)l
extern _native64(0xAE9FC9EF6A9FAC79) void set_blip_priority(Blip blip, int priority)l
extern _native64(0x9029B2F3DA924928) void set_blip_display(Blip blip, int displayId)l
extern _native64(0x234CDD44D996FD9A) void set_blip_category(Blip blip, int index)l
extern _native64(0x86A652570E5F25DD) void remove_blip(Blip* blip)l
extern _native64(0x6F6F290102C02AB4) void set_blip_as_friendly(Blip blip, bool toggle)l
extern _native64(0x742D6FD43115AF73) void pulse_blip(Blip blip)l
extern _native64(0xA3C0B359DCB848B6) void show_number_on_blip(Blip blip, int number)l
extern _native64(0x532CFF637EF80148) void hide_number_on_blip(Blip blip)l
extern _native64(0x75A16C3DA34F1245) void unk_0x75A16C3DA34F1245(any p0, bool p1)l
extern _native64(0x74513EA3E505181E) void _set_blip_checked(Blip blip, bool toggle)l
extern _native64(0x5FBCA48327B914DF) void show_heading_indicator_on_blip(Blip blip, bool toggle)l
extern _native64(0xB81656BC81FE24D1) void _set_blip_friendly(Blip blip, bool toggle)l
extern _native64(0x23C3EB807312F01A) void _set_blip_friend(Blip blip, bool toggle)l
extern _native64(0xDCFB5D4DB8BF367E) void unk_0xDCFB5D4DB8BF367E(any p0, bool p1)l
extern _native64(0xC4278F70131BAA6D) void unk_0xC4278F70131BAA6D(any p0, bool p1)l
extern _native64(0x2B6D467DAB714E8D) void _set_blip_shrink(Blip blip, bool toggle)l
extern _native64(0x25615540D894B814) void unk_0x25615540D894B814(any p0, bool p1)l
extern _native64(0xA6DB27D19ECBB7DA) bool does_blip_exist(Blip blip)l
extern _native64(0xA7E4E2D361C2627F) void set_waypoint_off()l
extern _native64(0xD8E694757BCEA8E9) void unk_0xD8E694757BCEA8E9()l
extern _native64(0x81FA173F170560D1) void refresh_waypoint()l
extern _native64(0x1DD1F58F493F1DA5) bool is_waypoint_active()l
extern _native64(0xFE43368D2AA4F2FC) void set_new_waypoint(vector2 vector)l
extern _native64(0xB203913733F27884) void set_blip_bright(Blip blip, bool toggle)l
extern _native64(0x13127EC3665E8EE1) void set_blip_show_cone(Blip blip, bool toggle)l
extern _native64(0xC594B315EDF2D4AF) void unk_0xC594B315EDF2D4AF(Ped ped)l
extern _native64(0x75A9A10948D1DEA6) any set_minimap_component(int p0, bool p1, int p2)l
extern _native64(0x60E892BA4F5BDCA4) void unk_0x60E892BA4F5BDCA4()l
extern _native64(0xDCD4EC3F419D02FA) Blip get_main_player_blip_id()l
extern _native64(0x41350B4FC28E3941) void unk_0x41350B4FC28E3941(bool p0)l
extern _native64(0x4B0311D3CDC4648F) void hide_loading_on_fade_this_frame()l
extern _native64(0x59E727A1C9D3E31A) void set_radar_as_interior_this_frame(Hash interior, vector2 vector, int z, int zoom)l
extern _native64(0xE81B7D2A3DAB2D81) void set_radar_as_exterior_this_frame()l
extern _native64(0x77E2DD177910E1CF) void _set_player_blip_position_this_frame(vector2 vector)l
extern _native64(0x9049FE339D5F6F6F) any unk_0x9049FE339D5F6F6F()l
extern _native64(0x5FBAE526203990C9) void _disable_radar_this_frame()l
extern _native64(0x20FE7FDFEEAD38C0) void unk_0x20FE7FDFEEAD38C0()l
extern _native64(0x6D14BFDC33B34F55) void _center_player_on_radar_this_frame()l
extern _native64(0xC3B07BA00A83B0F1) void set_widescreen_format(any p0)l
extern _native64(0x276B6CE369C33678) void display_area_name(bool toggle)l
extern _native64(0x96DEC8D5430208B7) void display_cash(bool toggle)l
extern _native64(0x170F541E1CADD1DE) void unk_0x170F541E1CADD1DE(bool p0)l
extern _native64(0x0772DF77852C2E30) void _set_player_cash_change(int cash, int bank)l
extern _native64(0xA5E78BA2B1331C55) void display_ammo_this_frame(bool display)l
extern _native64(0x73115226F4814E62) void display_sniper_scope_this_frame()l
extern _native64(0x719FF505F097FD20) void hide_hud_and_radar_this_frame()l
extern _native64(0xE67C6DFD386EA5E7) void unk_0xE67C6DFD386EA5E7(bool p0)l
extern _native64(0xC2D15BEF167E27BC) void unk_0xC2D15BEF167E27BC()l
extern _native64(0x95CF81BD06EE1887) void unk_0x95CF81BD06EE1887()l
extern _native64(0xDD21B55DF695CD0A) void set_multiplayer_bank_cash()l
extern _native64(0xC7C6789AA1CFEDD0) void remove_multiplayer_bank_cash()l
extern _native64(0xFD1D220394BCB824) void set_multiplayer_hud_cash(int p0, int p1)l
extern _native64(0x968F270E39141ECA) void remove_multiplayer_hud_cash()l
extern _native64(0xD46923FC481CA285) void hide_help_text_this_frame()l
extern _native64(0x960C9FF8F616E41C) void display_help_text_this_frame(const char* message, bool p1)l
extern _native64(0xEB354E5376BC81A7) void _show_weapon_wheel(bool forcedShow)l
extern _native64(0x0AFC4AF510774B47) void unk_0x0AFC4AF510774B47()l
extern _native64(0xA48931185F0536FE) Hash unk_0xA48931185F0536FE()l
extern _native64(0x72C1056D678BB7D8) void unk_0x72C1056D678BB7D8(Hash weaponHash)l
extern _native64(0xA13E93403F26C812) any unk_0xA13E93403F26C812(any p0)l
extern _native64(0x14C9FDCC41F81F63) void unk_0x14C9FDCC41F81F63(bool p0)l
extern _native64(0x5B440763A4C8D15B) void set_gps_flags(int p0, float p1)l
extern _native64(0x21986729D6A3A830) void clear_gps_flags()l
extern _native64(0x1EAC5F91BCBC5073) void unk_0x1EAC5F91BCBC5073(bool p0)l
extern _native64(0x7AA5B4CE533C858B) void clear_gps_race_track()l
extern _native64(0xDB34E8D56FC13B08) void unk_0xDB34E8D56FC13B08(any p0, bool p1, bool p2)l
extern _native64(0x311438A071DD9B1A) void unk_0x311438A071DD9B1A(any p0, any p1, any p2)l
extern _native64(0x900086F371220B6F) void unk_0x900086F371220B6F(bool p0, any p1, any p2)l
extern _native64(0xE6DE0561D9232A64) void unk_0xE6DE0561D9232A64()l
extern _native64(0x3D3D15AF7BCAAF83) void unk_0x3D3D15AF7BCAAF83(any p0, bool p1, bool p2)l
extern _native64(0xA905192A6781C41B) void unk_0xA905192A6781C41B(vector3 vec)l
extern _native64(0x3DDA37128DD1ACA8) void unk_0x3DDA37128DD1ACA8(bool p0)l
extern _native64(0x67EEDEA1B9BAFD94) void unk_0x67EEDEA1B9BAFD94()l
extern _native64(0xFF4FB7C8CDFA3DA7) void clear_gps_player_waypoint()l
extern _native64(0x320D0E0D936A0E9B) void set_gps_flashes(bool toggle)l
extern _native64(0x7B21E0BB01E8224A) void unk_0x7B21E0BB01E8224A(any p0)l
extern _native64(0xF2DD778C22B15BDA) void flash_minimap_display()l
extern _native64(0x6B1DE27EE78E6A19) void unk_0x6B1DE27EE78E6A19(any p0)l
extern _native64(0x6AFDFB93754950C7) void toggle_stealth_radar(bool toggle)l
extern _native64(0x1A5CD7752DD28CD3) void key_hud_colour(bool p0, any p1)l
extern _native64(0x5F28ECF5FC84772F) void set_mission_name(bool p0, const char* name)l
extern _native64(0xE45087D85F468BC2) void unk_0xE45087D85F468BC2(bool p0, any* p1)l
extern _native64(0x817B86108EB94E51) void unk_0x817B86108EB94E51(bool p0, any* p1, any* p2, any* p3, any* p4, any* p5, any* p6, any* p7, any* p8)l
extern _native64(0x58FADDED207897DC) void set_minimap_block_waypoint(bool toggle)l
extern _native64(0x9133955F1A2DA957) void _set_north_yankton_map(bool toggle)l
extern _native64(0xF8DEE0A5600CBB93) void _set_minimap_revealed(bool toggle)l
extern _native64(0xE0130B41D3CF4574) float unk_0xE0130B41D3CF4574()l
extern _native64(0x6E31B91145873922) bool _is_minimap_area_revealed(vector2 vector, float radius)l
extern _native64(0x62E849B7EB28E770) void unk_0x62E849B7EB28E770(bool p0)l
extern _native64(0x0923DBF87DFF735E) void unk_0x0923DBF87DFF735E(vector3 vec)l
extern _native64(0x71BDB63DBAF8DA59) void unk_0x71BDB63DBAF8DA59(any p0)l
extern _native64(0x35EDD5B2E3FF01C0) void unk_0x35EDD5B2E3FF01C0()l
extern _native64(0x299FAEBB108AE05B) void lock_minimap_angle(int angle)l
extern _native64(0x8183455E16C42E3A) void unlock_minimap_angle()l
extern _native64(0x1279E861A329E73F) void lock_minimap_position(vector2 vector)l
extern _native64(0x3E93E06DB8EF1F30) void unlock_minimap_position()l
extern _native64(0xD201F3FF917A506D) void _set_minimap_attitude_indicator_level(float altitude, bool p1)l
extern _native64(0x3F5CC444DCAAA8F2) void unk_0x3F5CC444DCAAA8F2(any p0, any p1, bool p2)l
extern _native64(0x975D66A0BC17064C) void unk_0x975D66A0BC17064C(any p0)l
extern _native64(0x06A320535F5F0248) void unk_0x06A320535F5F0248(any p0)l
extern _native64(0x231C8F89D0539D8F) void _set_radar_bigmap_enabled(bool toggleBigMap, bool showFullMap)l
extern _native64(0xBC4C9EA5391ECC0D) bool is_hud_component_active(int id)l
extern _native64(0xDD100EB17A94FF65) bool is_scripted_hud_component_active(int id)l
extern _native64(0xE374C498D8BADC14) void hide_scripted_hud_component_this_frame(int id)l
extern _native64(0x09C0403ED9A751C2) bool unk_0x09C0403ED9A751C2(any p0)l
extern _native64(0x6806C51AD12B83B8) void hide_hud_component_this_frame(int id)l
extern _native64(0x0B4DF1FA60C0E664) void show_hud_component_this_frame(int id)l
extern _native64(0xA4DEDE28B1814289) void unk_0xA4DEDE28B1814289()l
extern _native64(0x12782CE0A636E9F0) void reset_reticule_values()l
extern _native64(0x450930E616475D0D) void reset_hud_component_values(int id)l
extern _native64(0xAABB1F56E2A17CED) void set_hud_component_position(int id, vector2 vector)l
extern _native64(0x223CA69A8C4417FD) vector3 get_hud_component_position(int id)l
extern _native64(0xB57D8DD645CFA2CF) void clear_reminder_message()l
extern _native64(0xF9904D11F1ACBEC3) bool _get_screen_coord_from_world_coord(vector3 world, float* screenX, float* screenY)l
extern _native64(0x523A590C1A3CC0D3) void unk_0x523A590C1A3CC0D3()l
extern _native64(0xEE4C0E6DBC6F2C6F) void unk_0xEE4C0E6DBC6F2C6F()l
extern _native64(0x9135584D09A3437E) any unk_0x9135584D09A3437E()l
extern _native64(0x2432784ACA090DA4) bool unk_0x2432784ACA090DA4(any p0)l
extern _native64(0x7679CC1BCEBE3D4C) void unk_0x7679CC1BCEBE3D4C(any p0, float p1, float p2)l
extern _native64(0x784BA7E0ECEB4178) void unk_0x784BA7E0ECEB4178(any p0, vector3 vec)l
extern _native64(0xB094BC1DB4018240) void unk_0xB094BC1DB4018240(any p0, any p1, float p2, float p3)l
extern _native64(0x788E7FD431BD67F1) void unk_0x788E7FD431BD67F1(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0x50085246ABD3FEFA) void clear_floating_help(any p0, bool p1)l
extern _native64(0x6DD05E9D83EFA4C9) void _create_mp_gamer_tag_color(int headDisplayId, const char* username, bool pointedClanTag, bool isRockstarClan, const char* clanTag, any p5, RGB colour)l
extern _native64(0x6E0EB3EB47C8D7AA) bool unk_0x6E0EB3EB47C8D7AA()l
extern _native64(0xBFEFE3321A3F5015) int _create_mp_gamer_tag(Ped ped, const char* username, bool pointedClanTag, bool isRockstarClan, const char* clanTag, any p5)l
extern _native64(0x31698AA80E0223F8) void remove_mp_gamer_tag(int gamerTagId)l
extern _native64(0x4E929E7A5796FD26) bool is_mp_gamer_tag_active(int gamerTagId)l
extern _native64(0x595B5178E412E199) bool add_trevor_random_modifier(int gamerTagId)l
extern _native64(0x63BB75ABEDC1F6A0) void set_mp_gamer_tag_visibility(int gamerTagId, int component, bool toggle)l
extern _native64(0xEE76FF7E6A0166B0) void unk_0xEE76FF7E6A0166B0(int headDisplayId, bool p1)l
extern _native64(0xA67F9C46D612B6F1) void unk_0xA67F9C46D612B6F1(int headDisplayId, bool p1)l
extern _native64(0x613ED644950626AE) void set_mp_gamer_tag_colour(int gamerTagId, int flag, int color)l
extern _native64(0x3158C77A7E888AB4) void _set_mp_gamer_tag_health_bar_color(int headDisplayId, int color)l
extern _native64(0xD48FE545CD46F857) void set_mp_gamer_tag_alpha(int gamerTagId, int component, int alpha)l
extern _native64(0xCF228E2AA03099C3) void set_mp_gamer_tag_wanted_level(int gamerTagId, int wantedlvl)l
extern _native64(0xDEA2B8283BAA3944) void set_mp_gamer_tag_name(int gamerTagId, const char* string)l
extern _native64(0xEB709A36958ABE0D) bool unk_0xEB709A36958ABE0D(int gamerTagId)l
extern _native64(0x7B7723747CCB55B6) void unk_0x7B7723747CCB55B6(int gamerTagId, const char* string)l
extern _native64(0x01A358D9128B7A86) any unk_0x01A358D9128B7A86()l
extern _native64(0x97D47996FC48CBAD) int get_current_website_id()l
extern _native64(0xE3B05614DCE1D014) any unk_0xE3B05614DCE1D014(any p0)l
extern _native64(0xB99C4E4D9499DF29) void unk_0xB99C4E4D9499DF29(bool p0)l
extern _native64(0xAF42195A42C63BBA) any unk_0xAF42195A42C63BBA()l
extern _native64(0x7B1776B3B53F8D74) void set_warning_message(const char* entryLine1, int instructionalKey, const char* entryLine2, bool p3, any p4, any* p5, any* p6, bool background)l
extern _native64(0xDC38CC1E35B6A5D7) void _set_warning_message_2(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, bool p4, any p5, any* p6, any* p7, bool background)l
extern _native64(0x701919482C74B5AB) void _set_warning_message_3(const char* entryHeader, const char* entryLine1, any instructionalKey, const char* entryLine2, bool p4, any p5, any p6, any* p7, any* p8, bool p9)l
extern _native64(0x0C5A80A9E096D529) bool unk_0x0C5A80A9E096D529(any p0, any* p1, any p2, any p3, any p4, any p5)l
extern _native64(0xDAF87174BE7454FF) bool unk_0xDAF87174BE7454FF(any p0)l
extern _native64(0x6EF54AB721DC6242) void unk_0x6EF54AB721DC6242()l
extern _native64(0xE18B138FABC53103) bool is_warning_message_active()l
extern _native64(0x7792424AA0EAC32E) void unk_0x7792424AA0EAC32E()l
extern _native64(0x5354C5BA2EA868A4) void _set_map_full_screen(bool toggle)l
extern _native64(0x1EAE6DD17B7A5EFA) void unk_0x1EAE6DD17B7A5EFA(any p0)l
extern _native64(0x551DF99658DB6EE8) any unk_0x551DF99658DB6EE8(float p0, float p1, float p2)l
extern _native64(0x2708FC083123F9FF) void unk_0x2708FC083123F9FF()l
extern _native64(0x1121BFA1A1A522A8) any unk_0x1121BFA1A1A522A8()l
extern _native64(0x82CEDC33687E1F50) void unk_0x82CEDC33687E1F50(bool p0)l
extern _native64(0x211C4EF450086857) void unk_0x211C4EF450086857()l
extern _native64(0xBF4F34A85CA2970C) void unk_0xBF4F34A85CA2970C()l
extern _native64(0xEF01D36B9C9D0C7B) void activate_frontend_menu(Hash menuhash, bool Toggle_Pause, int component)l
extern _native64(0x10706DC6AD2D49C0) void restart_frontend_menu(Hash menuHash, int p1)l
extern _native64(0x2309595AD6145265) Hash _get_current_frontend_menu()l
extern _native64(0xDF47FC56C71569CF) void set_pause_menu_active(bool toggle)l
extern _native64(0x6D3465A73092F0E6) void disable_frontend_this_frame()l
extern _native64(0xBA751764F0821256) void unk_0xBA751764F0821256()l
extern _native64(0xCC3FDDED67BCFC63) void unk_0xCC3FDDED67BCFC63()l
extern _native64(0x745711A75AB09277) void set_frontend_active(bool active)l
extern _native64(0xB0034A223497FFCB) bool is_pause_menu_active()l
extern _native64(0x2F057596F2BD0061) any unk_0x2F057596F2BD0061()l
extern _native64(0x272ACD84970869C5) int get_pause_menu_state()l
extern _native64(0x5BFF36D6ED83E0AE) vector3 unk_0x5BFF36D6ED83E0AE()l
extern _native64(0x1C491717107431C7) bool is_pause_menu_restarting()l
extern _native64(0x2162C446DFDF38FD) void _log_debug_info(const char* p0)l
extern _native64(0x77F16B447824DA6C) void unk_0x77F16B447824DA6C(any p0)l
extern _native64(0xCDCA26E80FAECB8F) void unk_0xCDCA26E80FAECB8F()l
extern _native64(0xDD564BDD0472C936) void _add_frontend_menu_context(Hash hash)l
extern _native64(0x444D8CF241EC25C5) void object_decal_toggle(Hash hash)l
extern _native64(0x84698AB38D0C6636) bool unk_0x84698AB38D0C6636(Hash hash)l
extern _native64(0x2A25ADC48F87841F) any unk_0x2A25ADC48F87841F()l
extern _native64(0xDE03620F8703A9DF) any unk_0xDE03620F8703A9DF()l
extern _native64(0x359AF31A4B52F5ED) any unk_0x359AF31A4B52F5ED()l
extern _native64(0x13C4B962653A5280) any unk_0x13C4B962653A5280()l
extern _native64(0xC8E1071177A23BE5) bool unk_0xC8E1071177A23BE5(any* p0, any* p1, any* p2)l
extern _native64(0x4895BDEA16E7C080) void enable_deathblood_seethrough(bool p0)l
extern _native64(0xC78E239AC5B2DDB9) void unk_0xC78E239AC5B2DDB9(bool p0, any p1, any p2)l
extern _native64(0xF06EBB91A81E09E3) void unk_0xF06EBB91A81E09E3(bool p0)l
extern _native64(0x3BAB9A4E4F2FF5C7) any unk_0x3BAB9A4E4F2FF5C7()l
extern _native64(0xEC9264727EEC0F28) void unk_0xEC9264727EEC0F28()l
extern _native64(0x14621BB1DF14E2B2) void unk_0x14621BB1DF14E2B2()l
extern _native64(0x66E7CB63C97B7D20) any unk_0x66E7CB63C97B7D20()l
extern _native64(0x593FEAE1F73392D4) any unk_0x593FEAE1F73392D4()l
extern _native64(0x4E3CD0EF8A489541) any unk_0x4E3CD0EF8A489541()l
extern _native64(0xF284AC67940C6812) any unk_0xF284AC67940C6812()l
extern _native64(0x2E22FEFA0100275E) any unk_0x2E22FEFA0100275E()l
extern _native64(0x0CF54F20DE43879C) void unk_0x0CF54F20DE43879C(any p0)l
extern _native64(0x36C1451A88A09630) void unk_0x36C1451A88A09630(any* p0, any* p1)l
extern _native64(0x7E17BE53E1AAABAF) void unk_0x7E17BE53E1AAABAF(any* p0, any* p1, any* p2)l
extern _native64(0xA238192F33110615) bool unk_0xA238192F33110615(int* p0, int* p1, int* p2)l
extern _native64(0xEF4CED81CEBEDC6D) bool set_userids_uihidden(any p0, any* p1)l
extern _native64(0xCA6B2F7CE32AB653) bool unk_0xCA6B2F7CE32AB653(any p0, any* p1, any p2)l
extern _native64(0x90A6526CF0381030) bool unk_0x90A6526CF0381030(any p0, any* p1, any p2, any p3)l
extern _native64(0x24A49BEAF468DC90) bool unk_0x24A49BEAF468DC90(any p0, any* p1, any p2, any p3, any p4)l
extern _native64(0x5FBD7095FE7AE57F) bool unk_0x5FBD7095FE7AE57F(any p0, float* p1)l
extern _native64(0x8F08017F9D7C47BD) bool unk_0x8F08017F9D7C47BD(any p0, any* p1, any p2)l
extern _native64(0x052991E59076E4E4) bool unk_0x052991E59076E4E4(Hash p0, any* p1)l
extern _native64(0x5E62BE5DC58E9E06) void clear_ped_in_pause_menu()l
extern _native64(0xAC0BFBDC3BE00E14) void give_ped_to_pause_menu(Ped ped, int p1)l
extern _native64(0x3CA6050692BC61B0) void unk_0x3CA6050692BC61B0(bool p0)l
extern _native64(0xECF128344E9FF9F1) void unk_0xECF128344E9FF9F1(bool p0)l
extern _native64(0x805D7CBB36FD6C4C) void _show_social_club_legal_screen()l
extern _native64(0xF13FE2A80C05C561) any unk_0xF13FE2A80C05C561()l
extern _native64(0x6F72CD94F7B5B68C) int unk_0x6F72CD94F7B5B68C()l
extern _native64(0x75D3691713C3B05A) void unk_0x75D3691713C3B05A()l
extern _native64(0xD2B32BE3FC1626C6) void unk_0xD2B32BE3FC1626C6()l
extern _native64(0x9E778248D6685FE0) void unk_0x9E778248D6685FE0(const char* p0)l
extern _native64(0xC406BE343FC4B9AF) bool is_social_club_active()l
extern _native64(0x1185A8087587322C) void unk_0x1185A8087587322C(bool p0)l
extern _native64(0x8817605C2BA76200) void unk_0x8817605C2BA76200()l
extern _native64(0xB118AF58B5F332A1) bool _is_text_chat_active()l
extern _native64(0x1AC8F4AD40E22127) void _abort_text_chat()l
extern _native64(0x1DB21A44B09E8BA3) void _set_text_chat_unk(bool p0)l
extern _native64(0xCEF214315D276FD1) void unk_0xCEF214315D276FD1(bool p0)l
extern _native64(0xD30C50DF888D58B5) void _set_ped_enemy_ai_blip(int pedHandle, bool showViewCones)l
extern _native64(0x15B8ECF844EE67ED) bool does_ped_have_ai_blip(Ped ped)l
extern _native64(0xE52B8E7F85D39A08) void unk_0xE52B8E7F85D39A08(Ped ped, int unk)l
extern _native64(0x3EED80DFF7325CAA) void hide_special_ability_lockon_operation(any p0, bool p1)l
extern _native64(0x0C4BBF625CA98C4E) void unk_0x0C4BBF625CA98C4E(Ped ped, bool p1)l
extern _native64(0x97C65887D4B37FA9) void _set_ai_blip_max_distance(Ped ped, float p1)l
extern _native64(0x7CD934010E115C2C) any* unk_0x7CD934010E115C2C(Ped ped)l
extern _native64(0x56176892826A4FE8) Blip unk_0x56176892826A4FE8(Ped ped)l
extern _native64(0xA277800A9EAE340E) any unk_0xA277800A9EAE340E()l
extern _native64(0x2632482FD6B9AB87) void unk_0x2632482FD6B9AB87()l
extern _native64(0x808519373FD336A3) void _set_director_mode(bool toggle)l
extern _native64(0x04655F9D075D0AE5) void unk_0x04655F9D075D0AE5(bool p0)l
#pragma endregion //}
#pragma region GRAPHICS //{
extern _native64(0x175B6BFC15CDD0C5) void set_debug_lines_and_spheres_drawing_active(bool enabled)l
extern _native64(0x7FDFADE676AA3CB0) void draw_debug_line(vector3 vec_1, vector3 vec_2, RGBA colour)l
extern _native64(0xD8B9A8AC5608FF94) void draw_debug_line_with_two_colours(vector3 vec_1, vector3 vec_2, RGB colour_1, RGB colour_2, int alpha1, int alpha2)l
extern _native64(0xAAD68E1AB39DA632) void draw_debug_sphere(vector3 vec, float radius, RGBA colour)l
extern _native64(0x083A2CA4F2E573BD) void draw_debug_box(vector3 vec_1, vector3 vec_2, RGBA colour)l
extern _native64(0x73B1189623049839) void draw_debug_cross(vector3 vec, float size, RGBA colour)l
extern _native64(0x3903E216620488E8) void draw_debug_text(const char* text, vector3 vec, RGBA colour)l
extern _native64(0xA3BB2E9555C05A8F) void draw_debug_text_2d(const char* text, vector3 vec, RGBA colour)l
extern _native64(0x6B7256074AE34680) void draw_line(vector3 vec_1, vector3 vec_2, RGBA colour)l
extern _native64(0xAC26716048436851) void draw_poly(vector3 vec_1, vector3 vec_2, vector3 vec_3, RGBA colour)l
extern _native64(0xD3A9971CADAC7252) void draw_box(vector3 vec_1, vector3 vec_2, RGBA colour)l
extern _native64(0x23BA6B0C2AD7B0D3) void unk_0x23BA6B0C2AD7B0D3(bool p0)l
extern _native64(0x1DD2139A9A20DCE8) any unk_0x1DD2139A9A20DCE8()l
extern _native64(0x90A78ECAA4E78453) any unk_0x90A78ECAA4E78453()l
extern _native64(0x0A46AF8A78DC5E0A) void unk_0x0A46AF8A78DC5E0A()l
extern _native64(0x4862437A486F91B0) bool unk_0x4862437A486F91B0(any* p0, any p1, any p2, any p3)l
extern _native64(0x1670F8D05056F257) int unk_0x1670F8D05056F257(any* p0)l
extern _native64(0x7FA5D82B8F58EC06) any unk_0x7FA5D82B8F58EC06()l
extern _native64(0x5B0316762AFD4A64) any unk_0x5B0316762AFD4A64()l
extern _native64(0x346EF3ECAAAB149E) void unk_0x346EF3ECAAAB149E()l
extern _native64(0xA67C35C56EB1BD9D) any unk_0xA67C35C56EB1BD9D()l
extern _native64(0x0D6CA79EEEBD8CA3) any unk_0x0D6CA79EEEBD8CA3()l
extern _native64(0xD801CC02177FA3F1) void unk_0xD801CC02177FA3F1()l
extern _native64(0x1BBC135A4D25EDDE) void unk_0x1BBC135A4D25EDDE(bool p0)l
extern _native64(0x3DEC726C25A11BAC) any unk_0x3DEC726C25A11BAC(int p0)l
extern _native64(0x0C0C4E81E1AC60A0) any unk_0x0C0C4E81E1AC60A0()l
extern _native64(0x759650634F07B6B4) bool unk_0x759650634F07B6B4(any p0)l
extern _native64(0xCB82A0BF0E3E3265) any unk_0xCB82A0BF0E3E3265(any p0)l
extern _native64(0x6A12D88881435DCA) void unk_0x6A12D88881435DCA()l
extern _native64(0x1072F115DAB0717E) void unk_0x1072F115DAB0717E(bool p0, bool p1)l
extern _native64(0x34D23450F028B0BF) int get_maximum_number_of_photos()l
extern _native64(0xDC54A7AF8B3A14EF) any unk_0xDC54A7AF8B3A14EF()l
extern _native64(0x473151EBC762C6DA) int unk_0x473151EBC762C6DA()l
extern _native64(0x2A893980E96B659A) any unk_0x2A893980E96B659A(any p0)l
extern _native64(0xF5BED327CEA362B1) any unk_0xF5BED327CEA362B1(any p0)l
extern _native64(0x4AF92ACD3141D96C) void unk_0x4AF92ACD3141D96C()l
extern _native64(0xE791DF1F73ED2C8B) any unk_0xE791DF1F73ED2C8B(any p0)l
extern _native64(0xEC72C258667BE5EA) any unk_0xEC72C258667BE5EA(any p0)l
extern _native64(0x40AFB081F8ADD4EE) int _return_two(any p0)l
extern _native64(0xF49E9A9716A04595) void _draw_light_with_range_and_shadow(vector3 vec, RGB colour, float range, float intensity, float shadow)l
extern _native64(0xF2A1B2771A01DBD4) void draw_light_with_range(vector3 pos, RGB color, float range, float intensity)l
extern _native64(0xD0F64B265C8C8B33) void draw_spot_light(vector3 pos, vector3 dir, RGB color, float distance, float brightness, float roundness, float radius, float falloff)l
extern _native64(0x5BCA583A583194DB) void _draw_spot_light_with_shadow(vector3 pos, vector3 dir, RGB color, float distance, float brightness, float roundness, float radius, float falloff, float shadow)l
extern _native64(0xC9B18B4619F48F7B) void unk_0xC9B18B4619F48F7B(float p0)l
extern _native64(0xDEADC0DEDEADC0DE) void unk_0xDEADC0DEDEADC0DE(Object object)l
extern _native64(0x28477EC23D892089) void draw_marker(int type, vector3 pos, vector3 dir, vector3 rot, vector3 scale, RGBA colour, bool bobUpAndDown, bool faceCamera, int p19, bool rotate, const char* textureDict, const char* textureName, bool drawOnEnts)l
extern _native64(0x0134F0835AB6BFCB) int create_checkpoint(int type, vector3 pos1, vector3 pos2, float radius, RGBA colour, int reserved)l
extern _native64(0x4B5B4DA5D79F1943) void unk_0x4B5B4DA5D79F1943(int checkpoint, float p0)l
extern _native64(0x2707AAE9D9297D89) void set_checkpoint_cylinder_height(int checkpoint, float nearHeight, float farHeight, float radius)l
extern _native64(0x7167371E8AD747F7) void set_checkpoint_rgba(int checkpoint, RGBA colour)l
extern _native64(0xB9EA40907C680580) void _set_checkpoint_icon_rgba(int checkpoint, RGBA colour)l
extern _native64(0xF51D36185993515D) void unk_0xF51D36185993515D(int checkpoint, vector3 pos, vector3 unk)l
extern _native64(0x615D3925E87A3B26) void unk_0x615D3925E87A3B26(int checkpoint)l
extern _native64(0xF5ED37F54CD4D52E) void delete_checkpoint(int checkpoint)l
extern _native64(0x22A249A53034450A) void unk_0x22A249A53034450A(bool p0)l
extern _native64(0xDC459CFA0CCE245B) void unk_0xDC459CFA0CCE245B(bool p0)l
extern _native64(0xDFA2EF8E04127DD5) void request_streamed_texture_dict(const char* textureDict, bool p1)l
extern _native64(0x0145F696AAAAD2E4) bool has_streamed_texture_dict_loaded(const char* textureDict)l
extern _native64(0xBE2CACCF5A8AA805) void set_streamed_texture_dict_as_no_longer_needed(const char* textureDict)l
extern _native64(0x3A618A217E5154F0) void draw_rect(vector2 vector, Size size, RGBA colour)l
extern _native64(0xC6372ECD45D73BCD) void unk_0xC6372ECD45D73BCD(bool p0)l
extern _native64(0x61BB1D9B3A95D802) void _set_2d_layer(int layer)l
extern _native64(0xB8A850F20A067EB6) void _set_screen_draw_position(int x, int y)l
extern _native64(0xE3A3DB414A373DAB) void _screen_draw_position_end()l
extern _native64(0xF5A2C681787E579D) void _screen_draw_position_ratio(vector2 vector, float p2, float p3)l
extern _native64(0x6DD8F5AA635EB4B2) void unk_0x6DD8F5AA635EB4B2(float p0, float p1, any* p2, any* p3)l
extern _native64(0xBAF107B6BB2C97F0) float get_safe_zone_size()l
extern _native64(0xE7FFAE5EBF23D890) void draw_sprite(const char* textureDict, const char* textureName, vector2 screen, Size size, float heading, RGBA colour)l
extern _native64(0x9CD43EEE12BF4DD0) any add_entity_icon(Entity entity, const char* icon)l
extern _native64(0xE0E8BEECCA96BA31) void set_entity_icon_visibility(Entity entity, bool toggle)l
extern _native64(0x1D5F595CCAE2E238) void set_entity_icon_color(Entity entity, RGBA colour)l
extern _native64(0xAA0008F3BBB8F416) void set_draw_origin(vector3 vec, any p3)l
extern _native64(0xFF0B610F6BE0D7AF) void clear_draw_origin()l
extern _native64(0x845BAD77CC770633) void attach_tv_audio_to_entity(Entity entity)l
extern _native64(0x113D2C5DC57E1774) void set_tv_audio_frontend(bool toggle)l
extern _native64(0xB66064452270E8F1) int load_movie_mesh_set(const char* movieMeshSetName)l
extern _native64(0xEB119AA014E89183) void release_movie_mesh_set(int movieMeshSet)l
extern _native64(0x9B6E70C5CEEF4EEB) any unk_0x9B6E70C5CEEF4EEB(any p0)l
extern _native64(0x888D57E407E63624) void get_screen_resolution(int* x, int* y)l
extern _native64(0x873C9F3104101DD3) void _get_active_screen_resolution(int* x, int* y)l
extern _native64(0xF1307EF624A80D87) float _get_aspect_ratio(bool b)l
extern _native64(0xB2EBE8CBC58B90E9) any unk_0xB2EBE8CBC58B90E9()l
extern _native64(0x30CF4BDA4FCB1905) bool get_is_widescreen()l
extern _native64(0x84ED31191CC5D2C9) bool get_is_hidef()l
extern _native64(0xEFABC7722293DA7C) void unk_0xEFABC7722293DA7C()l
extern _native64(0x18F621F7A5B1F85D) void set_nightvision(bool toggle)l
extern _native64(0x35FB78DC42B7BD21) any unk_0x35FB78DC42B7BD21()l
extern _native64(0x2202A3F42C8E5F79) bool _is_nightvision_inactive()l
extern _native64(0xEF398BEEE4EF45F9) void unk_0xEF398BEEE4EF45F9(bool p0)l
extern _native64(0xE787BF1C5CF823C9) void set_noiseoveride(bool toggle)l
extern _native64(0xCB6A7C3BB17A0C67) void set_noisinessoveride(float value)l
extern _native64(0x34E82F05DF2974F5) bool get_screen_coord_from_world_coord(vector3 world, float* screenX, float* screenY)l
extern _native64(0x35736EE65BD00C11) vector3 get_texture_resolution(const char* textureDict, const char* textureName)l
extern _native64(0xE2892E7E55D7073A) void unk_0xE2892E7E55D7073A(float p0)l
extern _native64(0x0AB84296FED9CFC6) void set_flash(float p0, float p1, float fadeIn, float duration, float fadeOut)l
extern _native64(0x3669F1B198DCAA4F) void unk_0x3669F1B198DCAA4F()l
extern _native64(0x1268615ACE24D504) void _set_blackout(bool enable)l
extern _native64(0xC35A6D07C93802B2) void unk_0xC35A6D07C93802B2()l
extern _native64(0xE2C9439ED45DEA60) Object create_tracked_point()l
extern _native64(0x164ECBB3CF750CB0) any set_tracked_point_info(Object point, vector3 vec, float radius)l
extern _native64(0xC45CCDAAC9221CA8) bool is_tracked_point_visible(Object point)l
extern _native64(0xB25DC90BAD56CA42) void destroy_tracked_point(Object point)l
extern _native64(0xBE197EAA669238F4) any unk_0xBE197EAA669238F4(any p0, any p1, any p2, any p3)l
extern _native64(0x61F95E5BB3E0A8C6) void unk_0x61F95E5BB3E0A8C6(any p0)l
extern _native64(0xAE51BC858F32BA66) void unk_0xAE51BC858F32BA66(any p0, float p1, float p2, float p3, float p4)l
extern _native64(0x649C97D52332341A) void unk_0x649C97D52332341A(any p0)l
extern _native64(0x2C42340F916C5930) any unk_0x2C42340F916C5930(any p0)l
extern _native64(0x14FC5833464340A8) void unk_0x14FC5833464340A8()l
extern _native64(0x0218BA067D249DEA) void unk_0x0218BA067D249DEA()l
extern _native64(0x1612C45F9E3E0D44) void unk_0x1612C45F9E3E0D44()l
extern _native64(0x5DEBD9C4DC995692) void unk_0x5DEBD9C4DC995692()l
extern _native64(0x6D955F6A9E0295B1) void unk_0x6D955F6A9E0295B1(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0x302C91AB2D477F7E) void unk_0x302C91AB2D477F7E()l
extern _native64(0x03FC694AE06C5A20) void unk_0x03FC694AE06C5A20()l
extern _native64(0xD2936CAB8B58FCBD) void unk_0xD2936CAB8B58FCBD(any p0, bool p1, float p2, float p3, float p4, float p5, bool p6, float p7)l
extern _native64(0x5F0F3F56635809EF) void unk_0x5F0F3F56635809EF(float p0)l
extern _native64(0x5E9DAF5A20F15908) void unk_0x5E9DAF5A20F15908(float p0)l
extern _native64(0x36F6626459D91457) void unk_0x36F6626459D91457(float p0)l
extern _native64(0x80ECBC0C856D3B0B) void _set_far_shadows_suppressed(bool toggle)l
extern _native64(0x25FC3E33A31AD0C9) void unk_0x25FC3E33A31AD0C9(bool p0)l
extern _native64(0xB11D94BC55F41932) void unk_0xB11D94BC55F41932(const char* p0)l
extern _native64(0x27CB772218215325) void unk_0x27CB772218215325()l
extern _native64(0x6DDBF9DFFC4AC080) void unk_0x6DDBF9DFFC4AC080(bool p0)l
extern _native64(0xD39D13C9FEBF0511) void unk_0xD39D13C9FEBF0511(bool p0)l
extern _native64(0x02AC28F3A01FA04A) any unk_0x02AC28F3A01FA04A(float p0)l
extern _native64(0x0AE73D8DF3A762B2) void unk_0x0AE73D8DF3A762B2(bool p0)l
extern _native64(0xA51C4B86B71652AE) void unk_0xA51C4B86B71652AE(bool p0)l
extern _native64(0x312342E1A4874F3F) void unk_0x312342E1A4874F3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8)l
extern _native64(0x2485D34E50A22E84) void unk_0x2485D34E50A22E84(float p0, float p1, float p2)l
extern _native64(0x12995F2E53FFA601) void unk_0x12995F2E53FFA601(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11)l
extern _native64(0xDBAA5EC848BA2D46) void unk_0xDBAA5EC848BA2D46(any p0, any p1)l
extern _native64(0xC0416B061F2B7E5E) void unk_0xC0416B061F2B7E5E(bool p0)l
extern _native64(0xB1BB03742917A5D6) void unk_0xB1BB03742917A5D6(int type, vector3 Pos, float p4, RGBA colour)l
extern _native64(0x9CFDD90B2B844BF7) void unk_0x9CFDD90B2B844BF7(float p0, float p1, float p2, float p3, float p4)l
extern _native64(0x06F761EA47C1D3ED) void unk_0x06F761EA47C1D3ED(bool p0)l
extern _native64(0xA4819F5E23E2FFAD) any unk_0xA4819F5E23E2FFAD()l
extern _native64(0xA4664972A9B8F8BA) int unk_0xA4664972A9B8F8BA(any p0)l
extern _native64(0x7E08924259E08CE0) void set_seethrough(bool toggle)l
extern _native64(0x44B80ABAB9D80BD3) bool _is_seethrough_active()l
extern _native64(0xD7D0B00177485411) void unk_0xD7D0B00177485411(any p0, float p1)l
extern _native64(0xB3C641F3630BF6DA) void unk_0xB3C641F3630BF6DA(float p0)l
extern _native64(0xE59343E9E96529E7) any unk_0xE59343E9E96529E7()l
extern _native64(0xE63D7C6EECECB66B) void unk_0xE63D7C6EECECB66B(bool p0)l
extern _native64(0xE3E2C1B4C59DBC77) void unk_0xE3E2C1B4C59DBC77(any p0)l
extern _native64(0xA328A24AAA6B7FDC) bool _transition_to_blurred(float transitionTime)l
extern _native64(0xEFACC8AEF94430D5) bool _transition_from_blurred(float transitionTime)l
extern _native64(0xDE81239437E8C5A8) void unk_0xDE81239437E8C5A8()l
extern _native64(0x5CCABFFCA31DDE33) float is_particle_fx_delayed_blink()l
extern _native64(0x7B226C785A52A0A9) any unk_0x7B226C785A52A0A9()l
extern _native64(0xDFC252D8A3E15AB7) void _set_frozen_rendering_disabled(bool enabled)l
extern _native64(0xEB3DAC2C86001E5E) bool unk_0xEB3DAC2C86001E5E()l
extern _native64(0xE1C8709406F2C41C) void unk_0xE1C8709406F2C41C()l
extern _native64(0x851CD923176EBA7C) void unk_0x851CD923176EBA7C()l
extern _native64(0xBA3D65906822BED5) void unk_0xBA3D65906822BED5(bool p0, bool p1, float p2, float p3, float p4, float p5)l
extern _native64(0x7AC24EAB6D74118D) bool unk_0x7AC24EAB6D74118D(bool p0)l
extern _native64(0xBCEDB009461DA156) any unk_0xBCEDB009461DA156()l
extern _native64(0x27FEB5254759CDE3) bool unk_0x27FEB5254759CDE3(const char* textureDict, bool p1)l
extern _native64(0x25129531F77B9ED3) int start_particle_fx_non_looped_at_coord(const char* effectName, vector3 Pos, vector3 Rot, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0xF56B8137DF10135D) bool _start_particle_fx_non_looped_at_coord_2(const char* effectName, vector3 Pos, vector3 Rot, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0x0E7E72961BA18619) bool start_particle_fx_non_looped_on_ped_bone(const char* effectName, Ped ped, vector3 offset, vector3 rot, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ)l
extern _native64(0xA41B6A43642AC2CF) bool _start_particle_fx_non_looped_on_ped_bone_2(const char* effectName, Ped ped, vector3 offset, vector3 rot, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ)l
extern _native64(0x0D53A3B8DA0809D2) bool start_particle_fx_non_looped_on_entity(const char* effectName, Entity entity, vector3 offset, vector3 rot, float scale, bool axisX, bool axisY, bool axisZ)l
extern _native64(0xC95EB1DB6E92113D) bool _start_particle_fx_non_looped_on_entity_2(const char* effectName, Entity entity, vector3 offset, vector3 rot, float scale, bool axisX, bool axisY, bool axisZ)l
extern _native64(0x26143A59EF48B262) void set_particle_fx_non_looped_colour(FloatRGB colour)l
extern _native64(0x77168D722C58B2FC) void set_particle_fx_non_looped_alpha(float alpha)l
extern _native64(0x8CDE909A0370BB3A) void unk_0x8CDE909A0370BB3A(bool p0)l
extern _native64(0xE184F4F0DC5910E7) int start_particle_fx_looped_at_coord(const char* effectName, vector3 vec, vector3 Rot, float scale, bool xAxis, bool yAxis, bool zAxis, bool p11)l
extern _native64(0xF28DA9F38CD1787C) int start_particle_fx_looped_on_ped_bone(const char* effectName, Ped ped, vector3 Offset, vector3 Rot, int boneIndex, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0x1AE42C1660FD6517) int start_particle_fx_looped_on_entity(const char* effectName, Entity entity, vector3 Offset, vector3 Rot, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0xC6EB449E33977F0B) int _start_particle_fx_looped_on_entity_bone(const char* effectName, Entity entity, vector3 Offset, vector3 Rot, int boneIndex, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0x6F60E89A7B64EE1D) int _start_particle_fx_looped_on_entity_2(const char* effectName, Entity entity, vector3 Offset, vector3 Rot, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0xDDE23F30CC5A0F03) int _start_particle_fx_looped_on_entity_bone_2(const char* effectName, Entity entity, vector3 Offset, vector3 Rot, int boneIndex, float scale, bool xAxis, bool yAxis, bool zAxis)l
extern _native64(0x8F75998877616996) void stop_particle_fx_looped(int ptfxHandle, bool p1)l
extern _native64(0xC401503DFE8D53CF) void remove_particle_fx(int ptfxHandle, bool p1)l
extern _native64(0xB8FEAEEBCC127425) void remove_particle_fx_from_entity(Entity entity)l
extern _native64(0xDD19FA1C6D657305) void remove_particle_fx_in_range(vector3 vec, float radius)l
extern _native64(0x74AFEF0D2E1E409B) bool does_particle_fx_looped_exist(int ptfxHandle)l
extern _native64(0xF7DDEBEC43483C43) void set_particle_fx_looped_offsets(int ptfxHandle, vector3 vec, vector3 rot)l
extern _native64(0x5F0C4B5B1C393BE2) void set_particle_fx_looped_evolution(int ptfxHandle, const char* propertyName, float amount, bool Id)l
extern _native64(0x7F8F65877F88783B) void set_particle_fx_looped_colour(int ptfxHandle, FloatRGB colour, bool p4)l
extern _native64(0x726845132380142E) void set_particle_fx_looped_alpha(int ptfxHandle, float alpha)l
extern _native64(0xB44250AAA456492D) void set_particle_fx_looped_scale(int ptfxHandle, float scale)l
extern _native64(0xDCB194B85EF7B541) void _set_particle_fx_looped_range(int ptfxHandle, float range)l
extern _native64(0xEEC4047028426510) void set_particle_fx_cam_inside_vehicle(bool p0)l
extern _native64(0xACEE6F360FC1F6B6) void set_particle_fx_cam_inside_nonplayer_vehicle(any p0, bool p1)l
extern _native64(0x96EF97DAEB89BEF5) void set_particle_fx_shootout_boat(any p0)l
extern _native64(0x5F6DF3D92271E8A1) void set_particle_fx_blood_scale(bool p0)l
extern _native64(0xD821490579791273) void enable_clown_blood_vfx(bool toggle)l
extern _native64(0x9DCE1F0F78260875) void enable_alien_blood_vfx(bool Toggle)l
extern _native64(0x27E32866E9A5C416) void unk_0x27E32866E9A5C416(float p0)l
extern _native64(0xBB90E12CAC1DAB25) void unk_0xBB90E12CAC1DAB25(float p0)l
extern _native64(0xCA4AE345A153D573) void unk_0xCA4AE345A153D573(bool p0)l
extern _native64(0x54E22EA2C1956A8D) void unk_0x54E22EA2C1956A8D(float p0)l
extern _native64(0x949F397A288B28B3) void unk_0x949F397A288B28B3(float p0)l
extern _native64(0x9B079E5221D984D3) void unk_0x9B079E5221D984D3(bool p0)l
extern _native64(0x6C38AF3693A69A91) void _use_particle_fx_asset_next_call(const char* name)l
extern _native64(0xEA1E2D93F6F75ED9) void _set_particle_fx_asset_old_to_new(const char* oldAsset, const char* newAsset)l
extern _native64(0x89C8553DD3274AAE) void _reset_particle_fx_asset_old_to_new(const char* name)l
extern _native64(0xA46B73FAA3460AE1) void unk_0xA46B73FAA3460AE1(bool p0)l
extern _native64(0xF78B803082D4386F) void unk_0xF78B803082D4386F(float p0)l
extern _native64(0x9C30613D50A6ADEF) void wash_decals_in_range(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x5B712761429DBC14) void wash_decals_from_vehicle(Vehicle vehicle, float p1)l
extern _native64(0xD77EDADB0420E6E0) void fade_decals_in_range(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x5D6B2D4830A67C62) void remove_decals_in_range(vector3 vec, float range)l
extern _native64(0xCCF71CBDDF5B6CB9) void remove_decals_from_object(Object obj)l
extern _native64(0xA6F6F70FDC6D144C) void remove_decals_from_object_facing(Object obj, vector3 vec)l
extern _native64(0xE91F1B65F2B48D57) void remove_decals_from_vehicle(Vehicle vehicle)l
extern _native64(0xB302244A1839BDAD) int add_decal(int decalType, vector3 pos, float p4, float p5, float p6, float p7, float p8, float p9, Size size, FloatRGB Coef, float opacity, float timeout, bool p17, bool p18, bool p19)l
extern _native64(0x4F5212C7AD880DF8) any add_petrol_decal(vector3 vec, float groundLvl, float width, float transparency)l
extern _native64(0x99AC7F0D8B9C893D) void unk_0x99AC7F0D8B9C893D(float p0)l
extern _native64(0x967278682CB6967A) void unk_0x967278682CB6967A(any p0, any p1, any p2, any p3)l
extern _native64(0x0A123435A26C36CD) void unk_0x0A123435A26C36CD()l
extern _native64(0xED3F346429CCD659) void remove_decal(int decal)l
extern _native64(0xC694D74949CAFD0C) bool is_decal_alive(int decal)l
extern _native64(0x323F647679A09103) float get_decal_wash_level(int decal)l
extern _native64(0xD9454B5752C857DC) void unk_0xD9454B5752C857DC()l
extern _native64(0x27CFB1B1E078CB2D) void unk_0x27CFB1B1E078CB2D()l
extern _native64(0x4B5CFC83122DF602) void unk_0x4B5CFC83122DF602()l
extern _native64(0x2F09F7976C512404) bool unk_0x2F09F7976C512404(vector3 Coord, float p3)l
extern _native64(0x8A35C742130C6080) void unk_0x8A35C742130C6080(any p0, any* p1, any* p2)l
extern _native64(0xB7ED70C49521A61D) void unk_0xB7ED70C49521A61D(any p0)l
extern _native64(0x84C8D7C2D30D3280) void move_vehicle_decals(any p0, any p1)l
extern _native64(0x428BDCB9DA58DA53) bool _add_clan_decal_to_vehicle(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, any p13, int alpha)l
extern _native64(0xD2300034310557E4) void unk_0xD2300034310557E4(Vehicle vehicle, any p1)l
extern _native64(0xFE26117A5841B2FF) int unk_0xFE26117A5841B2FF(Vehicle vehicle, any p1)l
extern _native64(0x060D935D3981A275) bool _does_vehicle_have_decal(Vehicle vehicle, any p1)l
extern _native64(0x0E4299C549F0D1F1) void unk_0x0E4299C549F0D1F1(bool p0)l
extern _native64(0x02369D5C8A51FDCF) void unk_0x02369D5C8A51FDCF(bool p0)l
extern _native64(0x46D1A61A21F566FC) void unk_0x46D1A61A21F566FC(float p0)l
extern _native64(0x2A2A52824DB96700) void unk_0x2A2A52824DB96700(any* p0)l
extern _native64(0x1600FD8CF72EBC12) void unk_0x1600FD8CF72EBC12(float p0)l
extern _native64(0xEFB55E7C25D3B3BE) void unk_0xEFB55E7C25D3B3BE()l
extern _native64(0xA44FF770DFBC5DAE) void unk_0xA44FF770DFBC5DAE()l
extern _native64(0xC9F98AC1884E73A2) void disable_vehicle_distantlights(bool toggle)l
extern _native64(0x03300B57FCAC6DDB) void unk_0x03300B57FCAC6DDB(bool p0)l
extern _native64(0x98EDF76A7271E4F2) void unk_0x98EDF76A7271E4F2()l
extern _native64(0xAEEDAD1420C65CC0) void _set_force_ped_footsteps_tracks(bool toggle)l
extern _native64(0x4CC7F0FEA5283FE0) void _set_force_vehicle_trails(bool toggle)l
extern _native64(0xD7021272EB0A451E) void unk_0xD7021272EB0A451E(const char* p0)l
extern _native64(0x2C933ABF17A1DF41) void set_timecycle_modifier(const char* modifierName)l
extern _native64(0x82E7FFCD5B2326B3) void set_timecycle_modifier_strength(float strength)l
extern _native64(0x3BCF567485E1971C) void set_transition_timecycle_modifier(const char* modifierName, float transition)l
extern _native64(0x1CBA05AE7BD7EE05) void unk_0x1CBA05AE7BD7EE05(float p0)l
extern _native64(0x0F07E7745A236711) void clear_timecycle_modifier()l
extern _native64(0xFDF3D97C674AFB66) int get_timecycle_modifier_index()l
extern _native64(0x459FD2C8D0AB78BC) any unk_0x459FD2C8D0AB78BC()l
extern _native64(0x58F735290861E6B4) void push_timecycle_modifier()l
extern _native64(0x3C8938D7D872211E) void pop_timecycle_modifier()l
extern _native64(0xBBF327DED94E4DEB) void unk_0xBBF327DED94E4DEB(const char* p0)l
extern _native64(0xBDEB86F4D5809204) void unk_0xBDEB86F4D5809204(float p0)l
extern _native64(0xBF59707B3E5ED531) void unk_0xBF59707B3E5ED531(const char* p0)l
extern _native64(0x1A8E2C8B9CF4549C) void unk_0x1A8E2C8B9CF4549C(any* p0, any* p1)l
extern _native64(0x15E33297C3E8DC60) void unk_0x15E33297C3E8DC60(any p0)l
extern _native64(0x5096FD9CCB49056D) void unk_0x5096FD9CCB49056D(any* p0)l
extern _native64(0x92CCC17A7A2285DA) void unk_0x92CCC17A7A2285DA()l
extern _native64(0xBB0527EC6341496D) any unk_0xBB0527EC6341496D()l
extern _native64(0x2C328AF17210F009) void unk_0x2C328AF17210F009(float p0)l
extern _native64(0x2BF72AD5B41AA739) void unk_0x2BF72AD5B41AA739()l
extern _native64(0x11FE353CF9733E6F) int request_scaleform_movie(const char* scaleformName)l
extern _native64(0xC514489CFB8AF806) int request_scaleform_movie_instance(const char* scaleformName)l
extern _native64(0xBD06C611BB9048C2) int _request_scaleform_movie_interactive(const char* scaleformName)l
extern _native64(0x85F01B8D5B90570E) bool has_scaleform_movie_loaded(int scaleformHandle)l
extern _native64(0x0C1C5D756FB5F337) bool _has_named_scaleform_movie_loaded(const char* scaleformName)l
extern _native64(0x8217150E1217EBFD) bool has_scaleform_container_movie_loaded_into_parent(int scaleformHandle)l
extern _native64(0x1D132D614DD86811) void set_scaleform_movie_as_no_longer_needed(int* scaleformHandle)l
extern _native64(0x6D8EB211944DCE08) void set_scaleform_movie_to_use_system_time(int scaleform, bool toggle)l
extern _native64(0x54972ADAF0294A93) void draw_scaleform_movie(int scaleformHandle, vector2 vector, Size size, RGBA colour, int unk)l
extern _native64(0x0DF606929C105BE1) void draw_scaleform_movie_fullscreen(int scaleform, RGBA colour, int unk)l
extern _native64(0xCF537FDE4FBD4CE5) void draw_scaleform_movie_fullscreen_masked(int scaleform1, int scaleform2, RGBA colour)l
extern _native64(0x87D51D72255D4E78) void draw_scaleform_movie_3d(int scaleform, vector3 pos, vector3 rot, float p7, float p8, float p9, vector3 scale, any p13)l
extern _native64(0x1CE592FDC749D6F5) void _draw_scaleform_movie_3d_non_additive(int scaleform, vector3 pos, vector3 rot, float p7, float p8, float p9, vector3 scale, any p13)l
extern _native64(0xFBD96D87AC96D533) void call_scaleform_movie_method(int scaleform, const char* method)l
extern _native64(0xD0837058AE2E4BEE) void _call_scaleform_movie_function_float_params(int scaleform, const char* functionName, float param1, float param2, float param3, float param4, float param5)l
extern _native64(0x51BC1ED3CC44E8F7) void _call_scaleform_movie_function_string_params(int scaleform, const char* functionName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5)l
extern _native64(0xEF662D8D57E290B1) void _call_scaleform_movie_function_mixed_params(int scaleform, const char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5)l
extern _native64(0x98C494FD5BDFBFD5) bool _push_scaleform_movie_function_from_hud_component(int hudComponent, const char* functionName)l
extern _native64(0xF6E48914C7A8694E) bool _push_scaleform_movie_function(int scaleform, const char* functionName)l
extern _native64(0xAB58C27C2E6123C6) bool _push_scaleform_movie_function_n(const char* functionName)l
extern _native64(0xB9449845F73F5E9C) bool unk_0xB9449845F73F5E9C(const char* functionName)l
extern _native64(0xC6796A8FFA375E53) void _pop_scaleform_movie_function_void()l
extern _native64(0xC50AA39A577AF886) any _pop_scaleform_movie_function()l
extern _native64(0x768FF8961BA904D6) bool unk_0x768FF8961BA904D6(any funcData)l
extern _native64(0x2DE7EFA66B906036) int unk_0x2DE7EFA66B906036(any funcData)l
extern _native64(0xE1E258829A885245) const char* sitting_tv(int scaleform)l
extern _native64(0xC3D0841A0CC546A6) void _push_scaleform_movie_function_parameter_int(int value)l
extern _native64(0xD69736AAE04DB51A) void _push_scaleform_movie_function_parameter_float(float value)l
extern _native64(0xC58424BA936EB458) void _push_scaleform_movie_function_parameter_bool(bool value)l
extern _native64(0x80338406F3475E55) void begin_text_command_scaleform_string(const char* componentType)l
extern _native64(0x362E2D3FE93A9959) void end_text_command_scaleform_string()l
extern _native64(0xAE4E8157D9ECF087) void _end_text_command_scaleform_string_2()l
extern _native64(0xBA7148484BD90365) void _push_scaleform_movie_function_parameter_string(const char* value)l
extern _native64(0xE83A3E3557A56640) void unk_0xE83A3E3557A56640(const char* p0)l
extern _native64(0x5E657EF1099EDD65) bool unk_0x5E657EF1099EDD65(any p0)l
extern _native64(0xEC52C631A1831C03) void unk_0xEC52C631A1831C03(any p0)l
extern _native64(0x9304881D6F6537EA) void _request_hud_scaleform(int hudComponent)l
extern _native64(0xDF6E5987D2B4D140) bool _has_hud_scaleform_loaded(int hudComponent)l
extern _native64(0xF44A5456AC3F4F97) void unk_0xF44A5456AC3F4F97(any p0)l
extern _native64(0xD1C7CB175E012964) bool unk_0xD1C7CB175E012964(int scaleformHandle)l
extern _native64(0xBAABBB23EB6E484E) void set_tv_channel(int channel)l
extern _native64(0xFC1E275A90D39995) int get_tv_channel()l
extern _native64(0x2982BF73F66E9DDC) void set_tv_volume(float volume)l
extern _native64(0x2170813D3DD8661B) float get_tv_volume()l
extern _native64(0xFDDC2B4ED3C69DF0) void draw_tv_channel(vector2 Pos, Size Scale, float rotation, RGBA colour)l
extern _native64(0xF7B38B8305F1FE8B) void unk_0xF7B38B8305F1FE8B(int p0, const char* p1, bool p2)l
extern _native64(0x2201C576FACAEBE8) void unk_0x2201C576FACAEBE8(any p0, const char* p1, any p2)l
extern _native64(0xBEB3D46BB7F043C0) void unk_0xBEB3D46BB7F043C0(any p0)l
extern _native64(0x0AD973CA1E077B60) bool _load_tv_channel(Hash tvChannel)l
extern _native64(0x74C180030FDE4B69) void unk_0x74C180030FDE4B69(bool p0)l
extern _native64(0xD1C55B110E4DF534) void unk_0xD1C55B110E4DF534(any p0)l
extern _native64(0x873FA65C778AD970) void enable_movie_subtitles(bool toggle)l
extern _native64(0xD3A10FC7FD8D98CD) bool unk_0xD3A10FC7FD8D98CD()l
extern _native64(0xF1CEA8A4198D8E9A) bool unk_0xF1CEA8A4198D8E9A(const char* p0)l
extern _native64(0x98C4FE6EC34154CA) bool unk_0x98C4FE6EC34154CA(const char* p0, Ped ped, int p2, vector3 pos)l
extern _native64(0x7A42B2E236E71415) void unk_0x7A42B2E236E71415()l
extern _native64(0x108BE26959A9D9BB) void unk_0x108BE26959A9D9BB(bool p0)l
extern _native64(0xA356990E161C9E65) void unk_0xA356990E161C9E65(bool p0)l
extern _native64(0x1C4FC5752BCD8E48) void unk_0x1C4FC5752BCD8E48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12)l
extern _native64(0x5CE62918F8D703C7) void unk_0x5CE62918F8D703C7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11)l
extern _native64(0x2206BF9A37B7F724) void _start_screen_effect(const char* effectName, int duration, bool looped)l
extern _native64(0x068E835A1D0DC0E3) void _stop_screen_effect(const char* effectName)l
extern _native64(0x36AD3E690DA5ACEB) bool _get_screen_effect_is_active(const char* effectName)l
extern _native64(0xB4EDDC19532BFB85) void _stop_all_screen_effects()l
extern _native64(0xD2209BE128B5418C) void unk_0xD2209BE128B5418C(const char* graphicsName)l
#pragma endregion //}
#pragma region STATS //{
extern _native64(0xEB0A72181D4AA4AD) any stat_clear_slot_for_reload(int statSlot)l
extern _native64(0xA651443F437B1CE6) bool stat_load(int p0)l
extern _native64(0xE07BCA305B82D2FD) bool stat_save(int p0, bool p1, int p2)l
extern _native64(0x5688585E6D563CD8) void unk_0x5688585E6D563CD8(any p0)l
extern _native64(0xA1750FFAFA181661) bool stat_load_pending(any p0)l
extern _native64(0x7D3A583856F2C5AC) any stat_save_pending()l
extern _native64(0xBBB6AD006F1BBEA3) any stat_save_pending_or_requested()l
extern _native64(0x49A49BED12794D70) any stat_delete_slot(any p0)l
extern _native64(0x0D0A9F0E7BD91E3C) bool stat_slot_is_loaded(any p0)l
extern _native64(0x7F2C4CDF2E82DF4C) bool unk_0x7F2C4CDF2E82DF4C(any p0)l
extern _native64(0xE496A53BA5F50A56) any unk_0xE496A53BA5F50A56(any p0)l
extern _native64(0xF434A10BA01C37D0) void unk_0xF434A10BA01C37D0(bool p0)l
extern _native64(0x7E6946F68A38B74F) bool unk_0x7E6946F68A38B74F(any p0)l
extern _native64(0xA8733668D1047B51) void unk_0xA8733668D1047B51(any p0)l
extern _native64(0xECB41AC6AB754401) any unk_0xECB41AC6AB754401()l
extern _native64(0x9B4BD21D69B1E609) void unk_0x9B4BD21D69B1E609()l
extern _native64(0xC0E0D686DDFC6EAE) any unk_0xC0E0D686DDFC6EAE()l
extern _native64(0xB3271D7AB655B441) bool stat_set_int(Hash statName, int value, bool save)l
extern _native64(0x4851997F37FE9B3C) bool stat_set_float(Hash statName, float value, bool save)l
extern _native64(0x4B33C4243DE0C432) bool stat_set_bool(Hash statName, bool value, bool save)l
extern _native64(0x17695002FD8B2AE0) bool stat_set_gxt_label(Hash statName, const char* value, bool save)l
extern _native64(0x2C29BFB64F4FCBE4) bool stat_set_date(Hash statName, any* value, int numFields, bool save)l
extern _native64(0xA87B2335D12531D7) bool stat_set_string(Hash statName, const char* value, bool save)l
extern _native64(0xDB283FDE680FE72E) bool stat_set_pos(Hash statName, vector3 vec, bool save)l
extern _native64(0x7BBB1B54583ED410) bool stat_set_masked_int(Hash statName, any p1, any p2, int p3, bool save)l
extern _native64(0x8CDDF1E452BABE11) bool stat_set_user_id(Hash statName, const char* value, bool save)l
extern _native64(0xC2F84B7F9C4D0C61) bool stat_set_current_posix_time(Hash statName, bool p1)l
extern _native64(0x767FBC2AC802EF3D) bool stat_get_int(Hash statHash, int* outValue, int p2)l
extern _native64(0xD7AE6C9C9C6AC54C) bool stat_get_float(Hash statHash, float* outValue, any p2)l
extern _native64(0x11B5E6D2AE73F48E) bool stat_get_bool(Hash statHash, bool* outValue, any p2)l
extern _native64(0x8B0FACEFC36C824B) bool stat_get_date(Hash statHash, any* p1, any p2, any p3)l
extern _native64(0xE50384ACC2C3DB74) const char* stat_get_string(Hash statHash, int p1)l
extern _native64(0x350F82CCB186AA1B) bool stat_get_pos(any p0, any* p1, any* p2, any* p3, any p4)l
extern _native64(0x655185A06D9EEAAB) bool stat_get_masked_int(any p0, any* p1, any p2, any p3, any p4)l
extern _native64(0x2365C388E393BBE2) const char* stat_get_user_id(any p0)l
extern _native64(0x5473D4195058B2E4) const char* stat_get_license_plate(Hash statName)l
extern _native64(0x69FF13266D7296DA) bool stat_set_license_plate(Hash statName, const char* str)l
extern _native64(0x9B5A68C6489E9909) void stat_increment(Hash statName, float value)l
extern _native64(0x5A556B229A169402) bool unk_0x5A556B229A169402()l
extern _native64(0xB1D2BB1E1631F5B1) bool unk_0xB1D2BB1E1631F5B1()l
extern _native64(0xBED9F5693F34ED17) bool unk_0xBED9F5693F34ED17(Hash statName, int p1, float* outValue)l
extern _native64(0x26D7399B9587FE89) void unk_0x26D7399B9587FE89(int p0)l
extern _native64(0xA78B8FA58200DA56) void unk_0xA78B8FA58200DA56(int p0)l
extern _native64(0xE0E854F5280FB769) int stat_get_number_of_days(Hash statName)l
extern _native64(0xF2D4B2FE415AAFC3) int stat_get_number_of_hours(Hash statName)l
extern _native64(0x7583B4BE4C5A41B5) int stat_get_number_of_minutes(Hash statName)l
extern _native64(0x2CE056FF3723F00B) int stat_get_number_of_seconds(Hash statName)l
extern _native64(0x68F01422BE1D838F) void _stat_set_profile_setting(int profileSetting, int value)l
extern _native64(0xF4D8E7AC2A27758C) int unk_0xF4D8E7AC2A27758C(int p0)l
extern _native64(0x94F12ABF9C79E339) int unk_0x94F12ABF9C79E339(int p0)l
extern _native64(0x80C75307B1C42837) Hash _get_pstat_bool_hash(int index, bool spStat, bool charStat, int character)l
extern _native64(0x61E111E323419E07) Hash _get_pstat_int_hash(int index, bool spStat, bool charStat, int character)l
extern _native64(0xC4BB08EE7907471E) Hash _get_tupstat_bool_hash(int index, bool spStat, bool charStat, int character)l
extern _native64(0xD16C2AD6B8E32854) Hash _get_tupstat_int_hash(int index, bool spStat, bool charStat, int character)l
extern _native64(0xBA52FF538ED2BC71) Hash _get_ngstat_bool_hash(int index, bool spStat, bool charStat, int character, const char* section)l
extern _native64(0x2B4CDCA6F07FF3DA) Hash _get_ngstat_int_hash(int index, bool spStat, bool charStat, int character, const char* section)l
extern _native64(0x10FE3F1B79F9B071) bool stat_get_bool_masked(Hash statName, int mask, int p2)l
extern _native64(0x5BC62EC1937B9E5B) bool stat_set_bool_masked(Hash statName, bool value, int mask, bool save)l
extern _native64(0x5009DFD741329729) void unk_0x5009DFD741329729(const char* p0, any p1)l
extern _native64(0x93054C88E6AA7C44) void playstats_npc_invite(any* p0)l
extern _native64(0x46F917F6B4128FE4) void playstats_award_xp(any p0, any p1, any p2)l
extern _native64(0xC7F2DE41D102BFB4) void playstats_rank_up(any p0)l
extern _native64(0x098760C7461724CD) void unk_0x098760C7461724CD()l
extern _native64(0xA071E0ED98F91286) void unk_0xA071E0ED98F91286(any p0, any p1)l
extern _native64(0xC5BE134EC7BA96A0) void unk_0xC5BE134EC7BA96A0(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0xC19A2925C34D2231) void playstats_mission_started(any* p0, any p1, any p2, bool p3)l
extern _native64(0x7C4BB33A8CED7324) void playstats_mission_over(any* p0, any p1, any p2, bool p3, bool p4, bool p5)l
extern _native64(0xC900596A63978C1D) void playstats_mission_checkpoint(any* p0, any p1, any p2, any p3)l
extern _native64(0x71862B1D855F32E1) void unk_0x71862B1D855F32E1(any* p0, any p1, any p2, any p3)l
extern _native64(0x121FB4DDDC2D5291) void unk_0x121FB4DDDC2D5291(any p0, any p1, any p2, float p3)l
extern _native64(0x9C375C315099DDE4) void playstats_race_checkpoint(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x6DEE77AFF8C21BD1) bool unk_0x6DEE77AFF8C21BD1(any* p0, any* p1)l
extern _native64(0xBC80E22DED931E3D) void playstats_match_started(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0x176852ACAAC173D1) void playstats_shop_item(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x1CAE5D2E3F9A07F0) void unk_0x1CAE5D2E3F9A07F0(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0xAFC7E5E075A96F46) void _playstats_ambient_mission_crate_created(float p0, float p1, float p2)l
extern _native64(0xCB00196B31C39EB1) void unk_0xCB00196B31C39EB1(any p0, any p1, any p2, any p3)l
extern _native64(0x2B69F5074C894811) void unk_0x2B69F5074C894811(any p0, any p1, any p2, any p3)l
extern _native64(0x7EEC2A316C250073) void unk_0x7EEC2A316C250073(any p0, any p1, any p2)l
extern _native64(0xADDD1C754E2E2914) void unk_0xADDD1C754E2E2914(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7, any p8, any p9)l
extern _native64(0x79AB33F0FBFAC40C) void unk_0x79AB33F0FBFAC40C(any p0)l
extern _native64(0xDDF24D535060F811) void playstats_website_visited(Hash scaleformHash, int p1)l
extern _native64(0x0F71DE29AB2258F1) void playstats_friend_activity(any p0, any p1)l
extern _native64(0x69DEA3E9DB727B4C) void playstats_oddjob_done(any p0, any p1, any p2)l
extern _native64(0xBA739D6D5A05D6E7) void playstats_prop_change(any p0, any p1, any p2, any p3)l
extern _native64(0x34B973047A2268B9) void playstats_cloth_change(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0xE95C8A1875A02CA4) void unk_0xE95C8A1875A02CA4(any p0, any p1, any p2)l
extern _native64(0x6058665D72302D3F) void playstats_cheat_applied(const char* cheat)l
extern _native64(0xF8C54A461C3E11DC) void unk_0xF8C54A461C3E11DC(any* p0, any* p1, any* p2, any* p3)l
extern _native64(0xF5BB8DAC426A52C0) void unk_0xF5BB8DAC426A52C0(any* p0, any* p1, any* p2, any* p3)l
extern _native64(0xA736CF7FB7C5BFF4) void unk_0xA736CF7FB7C5BFF4(any* p0, any* p1, any* p2, any* p3)l
extern _native64(0x14E0B2D1AD1044E0) void unk_0x14E0B2D1AD1044E0(any* p0, any* p1, any* p2, any* p3)l
extern _native64(0x90D0622866E80445) void unk_0x90D0622866E80445(int p0, const char* p1)l
extern _native64(0x5DA3A8DE8CB6226F) void unk_0x5DA3A8DE8CB6226F(int time)l
extern _native64(0xD1032E482629049E) void unk_0xD1032E482629049E(bool p0)l
extern _native64(0xF4FF020A08BC8863) void unk_0xF4FF020A08BC8863(any p0, any p1)l
extern _native64(0x46326E13DA4E0546) void unk_0x46326E13DA4E0546(any* p0)l
extern _native64(0x117B45156D7EFF2E) any leaderboards_get_number_of_columns(any p0, any p1)l
extern _native64(0xC4B5467A1886EA7E) any leaderboards_get_column_id(any p0, any p1, any p2)l
extern _native64(0xBF4FEF46DB7894D3) any leaderboards_get_column_type(any p0, any p1, any p2)l
extern _native64(0xA34CB6E6F0DF4A0B) any leaderboards_read_clear_all()l
extern _native64(0x7CCE5C737A665701) any leaderboards_read_clear(any p0, any p1, any p2)l
extern _native64(0xAC392C8483342AC2) bool leaderboards_read_pending(any p0, any p1, any p2)l
extern _native64(0xA31FD15197B192BD) any unk_0xA31FD15197B192BD()l
extern _native64(0x2FB19228983E832C) bool leaderboards_read_successful(any p0, any p1, any p2)l
extern _native64(0x918B101666F9CB83) bool leaderboards2_read_friends_by_row(any* p0, any* p1, any p2, bool p3, any p4, any p5)l
extern _native64(0xC30713A383BFBF0E) bool leaderboards2_read_by_handle(any* p0, any* p1)l
extern _native64(0xA9CDB1E3F0A49883) bool leaderboards2_read_by_row(any* p0, any* p1, any p2, any* p3, any p4, any* p5, any p6)l
extern _native64(0xBA2C7DB0C129449A) bool leaderboards2_read_by_rank(any* p0, any p1, any p2)l
extern _native64(0x5CE587FB5A42C8C4) bool leaderboards2_read_by_radius(any* p0, any p1, any* p2)l
extern _native64(0x7EEC7E4F6984A16A) bool leaderboards2_read_by_score_int(any* p0, any p1, any p2)l
extern _native64(0xE662C8B759D08F3C) bool leaderboards2_read_by_score_float(any* p0, float p1, any p2)l
extern _native64(0xC38DC1E90D22547C) bool unk_0xC38DC1E90D22547C(any* p0, any* p1, any* p2)l
extern _native64(0xF1AE5DCDBFCA2721) bool unk_0xF1AE5DCDBFCA2721(any* p0, any* p1, any* p2)l
extern _native64(0xA0F93D5465B3094D) bool unk_0xA0F93D5465B3094D(any* p0)l
extern _native64(0x71B008056E5692D6) void unk_0x71B008056E5692D6()l
extern _native64(0x34770B9CE0E03B91) bool unk_0x34770B9CE0E03B91(any p0, any* p1)l
extern _native64(0x88578F6EC36B4A3A) any unk_0x88578F6EC36B4A3A(any p0, any p1)l
extern _native64(0x38491439B6BA7F7D) float unk_0x38491439B6BA7F7D(any p0, any p1)l
extern _native64(0xAE2206545888AE49) bool leaderboards2_write_data(any* p0)l
extern _native64(0x0BCA1D2C47B0D269) void unk_0x0BCA1D2C47B0D269(any p0, any p1, float p2)l
extern _native64(0x2E65248609523599) void unk_0x2E65248609523599(any p0, any p1, any p2)l
extern _native64(0xB9BB18E2C40142ED) bool leaderboards_cache_data_row(any* p0)l
extern _native64(0xD4B02A6B476E1FDC) void leaderboards_clear_cache_data()l
extern _native64(0x8EC74CEB042E7CFF) void unk_0x8EC74CEB042E7CFF(any p0)l
extern _native64(0x9C51349BE6CDFE2C) bool leaderboards_get_cache_exists(any p0)l
extern _native64(0xF04C1C27DA35F6C8) any leaderboards_get_cache_time(any p0)l
extern _native64(0x58A651CD201D89AD) any unk_0x58A651CD201D89AD(any p0)l
extern _native64(0x9120E8DBA3D69273) bool leaderboards_get_cache_data_row(any p0, any p1, any* p2)l
extern _native64(0x11FF1C80276097ED) void unk_0x11FF1C80276097ED(any p0, any p1, any p2)l
extern _native64(0x30A6614C1F7799B8) void unk_0x30A6614C1F7799B8(any p0, float p1, any p2)l
extern _native64(0x6483C25849031C4F) void unk_0x6483C25849031C4F(any p0, any p1, any p2, any* p3)l
extern _native64(0x5EAD2BF6484852E4) bool unk_0x5EAD2BF6484852E4()l
extern _native64(0xC141B8917E0017EC) void unk_0xC141B8917E0017EC()l
extern _native64(0xB475F27C6A994D65) void unk_0xB475F27C6A994D65()l
extern _native64(0xF1A1803D3476F215) void unk_0xF1A1803D3476F215(int value)l
extern _native64(0x38BAAA5DD4C9D19F) void unk_0x38BAAA5DD4C9D19F(int value)l
extern _native64(0x55384438FC55AD8E) void unk_0x55384438FC55AD8E(int value)l
extern _native64(0x723C1CE13FBFDB67) void unk_0x723C1CE13FBFDB67(any p0, any p1)l
extern _native64(0x0D01D20616FC73FB) void unk_0x0D01D20616FC73FB(any p0, any p1)l
extern _native64(0x428EAF89E24F6C36) void unk_0x428EAF89E24F6C36(any p0, float p1)l
extern _native64(0x047CBED6F6F8B63C) void unk_0x047CBED6F6F8B63C()l
extern _native64(0xC980E62E33DF1D5C) bool unk_0xC980E62E33DF1D5C(any* p0, any* p1)l
extern _native64(0x6F361B8889A792A3) void unk_0x6F361B8889A792A3()l
extern _native64(0xC847B43F369AC0B5) void unk_0xC847B43F369AC0B5()l
extern _native64(0xA5C80D8E768A9E66) bool unk_0xA5C80D8E768A9E66(any* p0)l
extern _native64(0x9A62EC95AE10E011) any unk_0x9A62EC95AE10E011()l
extern _native64(0x4C89FE2BDEB3F169) any unk_0x4C89FE2BDEB3F169()l
extern _native64(0xC6E0E2616A7576BB) any unk_0xC6E0E2616A7576BB()l
extern _native64(0x5BD5F255321C4AAF) any unk_0x5BD5F255321C4AAF(any p0)l
extern _native64(0xDEAAF77EB3687E97) any unk_0xDEAAF77EB3687E97(any p0, any* p1)l
extern _native64(0xC70DDCE56D0D3A99) any unk_0xC70DDCE56D0D3A99()l
extern _native64(0x886913BBEACA68C1) any unk_0x886913BBEACA68C1(any* p0)l
extern _native64(0x4FEF53183C3C6414) any unk_0x4FEF53183C3C6414()l
extern _native64(0x567384DFA67029E6) any unk_0x567384DFA67029E6()l
extern _native64(0x3270F67EED31FBC1) bool unk_0x3270F67EED31FBC1(any p0, any* p1, any* p2)l
extern _native64(0xCE5AA445ABA8DEE0) any unk_0xCE5AA445ABA8DEE0(any* p0)l
extern _native64(0x98E2BC1CA26287C3) void unk_0x98E2BC1CA26287C3()l
extern _native64(0x629526ABA383BCAA) void unk_0x629526ABA383BCAA()l
extern _native64(0xB3DA2606774A8E2D) any unk_0xB3DA2606774A8E2D()l
extern _native64(0xDAC073C7901F9E15) void unk_0xDAC073C7901F9E15(any p0)l
extern _native64(0xF6792800AC95350D) void unk_0xF6792800AC95350D(any p0)l
extern _native64(0x848B66100EE33B05) void unk_0x848B66100EE33B05(const void* data)l
#pragma endregion //}
#pragma region BRAIN //{
extern _native64(0x4EE5367468A65CCC) void add_script_to_random_ped(const char* name, Hash model, float p2, float p3)l
extern _native64(0x0BE84C318BA6EC22) void register_object_script_brain(const char* scriptName, Hash objectName, int p2, float p3, int p4, int p5)l
extern _native64(0xCCBA154209823057) bool is_object_within_brain_activation_range(Object object)l
extern _native64(0x3CDC7136613284BD) void register_world_point_script_brain(any* p0, float p1, any p2)l
extern _native64(0xC5042CC6F5E3D450) bool is_world_point_within_brain_activation_range()l
extern _native64(0x67AA4D73F0CFA86B) void enable_script_brain_set(int brainSet)l
extern _native64(0x14D8518E9760F08F) void disable_script_brain_set(int brainSet)l
extern _native64(0x0B40ED49D7D6FF84) void unk_0x0B40ED49D7D6FF84()l
extern _native64(0x4D953DF78EBF8158) void unk_0x4D953DF78EBF8158()l
extern _native64(0x6D6840CEE8845831) void unk_0x6D6840CEE8845831(const char* action)l
extern _native64(0x6E91B04E08773030) void unk_0x6E91B04E08773030(const char* action)l
#pragma endregion //}
#pragma region MOBILE //{
extern _native64(0xA4E8E696C532FBC7) void create_mobile_phone(int phoneType)l
extern _native64(0x3BC861DF703E5097) void destroy_mobile_phone()l
extern _native64(0xCBDD322A73D6D932) void set_mobile_phone_scale(float scale)l
extern _native64(0xBB779C0CA917E865) void set_mobile_phone_rotation(vector3 rot, any p3)l
extern _native64(0x1CEFB61F193070AE) void get_mobile_phone_rotation(vector3* rotation, any p1)l
extern _native64(0x693A5C6D6734085B) void set_mobile_phone_position(vector3 pos)l
extern _native64(0x584FDFDA48805B86) void get_mobile_phone_position(vector3* position)l
extern _native64(0xF511F759238A5122) void script_is_moving_mobile_phone_offscreen(bool toggle)l
extern _native64(0xC4E2813898C97A4B) bool can_phone_be_seen_on_screen()l
extern _native64(0x95C9E72F3D7DEC9B) void _move_finger(int direction)l
extern _native64(0x44E44169EF70138E) void _set_phone_lean(bool Toggle)l
extern _native64(0xFDE8F069C542D126) void cell_cam_activate(bool p0, bool p1)l
extern _native64(0x015C49A93E3E086E) void _disable_phone_this_frame(bool toggle)l
extern _native64(0xA2CCBE62CD4C91A4) void unk_0xA2CCBE62CD4C91A4(int* toggle)l
extern _native64(0x1B0B4AEED5B9B41C) void unk_0x1B0B4AEED5B9B41C(float p0)l
extern _native64(0x53F4892D18EC90A4) void unk_0x53F4892D18EC90A4(float p0)l
extern _native64(0x3117D84EFA60F77B) void unk_0x3117D84EFA60F77B(float p0)l
extern _native64(0x15E69E2802C24B8D) void unk_0x15E69E2802C24B8D(float p0)l
extern _native64(0xAC2890471901861C) void unk_0xAC2890471901861C(float p0)l
extern _native64(0xD6ADE981781FCA09) void unk_0xD6ADE981781FCA09(float p0)l
extern _native64(0xF1E22DC13F5EEBAD) void unk_0xF1E22DC13F5EEBAD(float p0)l
extern _native64(0x466DA42C89865553) void unk_0x466DA42C89865553(float p0)l
extern _native64(0x439E9BC95B7E7FBE) bool cell_cam_is_char_visible_no_face_check(Entity entity)l
extern _native64(0xB4A53E05F68B6FA1) void get_mobile_phone_render_id(int* renderId)l
extern _native64(0xBD4D7EAF8A30F637) bool _network_shop_is_item_unlocked(const char* name)l
extern _native64(0x247F0F73A182EA0B) bool _network_shop_is_item_unlocked_hash(Hash hash)l
#pragma endregion //}
#pragma region APP //{
extern _native64(0x846AA8E7D55EE5B6) bool app_data_valid()l
extern _native64(0xD3A58A12C77D9D4B) int app_get_int(const char* property)l
extern _native64(0x1514FB24C02C2322) float app_get_float(const char* property)l
extern _native64(0x749B023950D2311C) const char* app_get_string(const char* property)l
extern _native64(0x607E8E3D3E4F9611) void app_set_int(const char* property, int value)l
extern _native64(0x25D7687C68E0DAA4) void app_set_float(const char* property, float value)l
extern _native64(0x3FF2FCEC4B7721B4) void app_set_string(const char* property, const char* value)l
extern _native64(0xCFD0406ADAF90D2B) void app_set_app(const char* appName)l
extern _native64(0x262AB456A3D21F93) void app_set_block(const char* blockName)l
extern _native64(0x5FE1DF3342DB7DBA) void app_clear_block()l
extern _native64(0xE41C65E07A5F05FC) void app_close_app()l
extern _native64(0xE8E3FCF72EAC0EF8) void app_close_block()l
extern _native64(0x71EEE69745088DA0) bool app_has_linked_social_club_account()l
extern _native64(0xCA52279A7271517F) bool app_has_synced_data(const char* appName)l
extern _native64(0x95C5D356CDA6E85F) void app_save_data()l
extern _native64(0xC9853A2BE3DED1A6) any app_get_deleted_file_status()l
extern _native64(0x44151AEA95C8A003) bool app_delete_app_data(const char* appName)l
#pragma endregion //}
#pragma region TIME //{
extern _native64(0x47C3B5848C3E45D8) void set_clock_time(int hour, int minute, int second)l
extern _native64(0x4055E40BD2DBEC1D) void pause_clock(bool toggle)l
extern _native64(0xC8CA9670B9D83B3B) void advance_clock_time_to(int hour, int minute, int second)l
extern _native64(0xD716F30D8C8980E2) void add_to_clock_time(int hours, int minutes, int seconds)l
extern _native64(0x25223CA6B4D20B7F) int get_clock_hours()l
extern _native64(0x13D2B8ADD79640F2) int get_clock_minutes()l
extern _native64(0x494E97C2EF27C470) int get_clock_seconds()l
extern _native64(0xB096419DF0D06CE7) void set_clock_date(int day, int month, int year)l
extern _native64(0xD972E4BD7AEB235F) int get_clock_day_of_week()l
extern _native64(0x3D10BC92A4DB1D35) int get_clock_day_of_month()l
extern _native64(0xBBC72712E80257A1) int get_clock_month()l
extern _native64(0x961777E64BDAF717) int get_clock_year()l
extern _native64(0x2F8B4D1C595B11DB) int get_milliseconds_per_game_minute()l
extern _native64(0xDA488F299A5B164E) void get_posix_time(int* year, int* month, int* day, int* hour, int* minute, int* second)l
extern _native64(0x8117E09A19EEF4D3) void _get_utc_time(int* year, int* month, int* day, int* hour, int* minute, int* second)l
extern _native64(0x50C7A99057A69748) void get_local_time(int* year, int* month, int* day, int* hour, int* minute, int* second)l
#pragma endregion //}
#pragma region PATHFIND //{
extern _native64(0xBF1A602B5BA52FEE) void set_roads_in_area(vector3 vec_1, vector3 vec_2, bool unknown1, bool unknown2)l
extern _native64(0x1A5AA1208AF5DB59) void set_roads_in_angled_area(vector3 vec_1, vector3 vec_2, float angle, bool unknown1, bool unknown2, bool unknown3)l
extern _native64(0x34F060F4BF92E018) void set_ped_paths_in_area(vector3 vec_1, vector3 vec_2, bool unknown)l
extern _native64(0xB61C8E878A4199CA) bool get_safe_coord_for_ped(vector3 vec, bool onGround, vector3* outPosition, int flags)l
extern _native64(0x240A18690AE96513) bool get_closest_vehicle_node(vector3 vec, vector3* outPosition, int nodeType, float p5, float p6)l
extern _native64(0x2EABE3B06F58C1BE) bool get_closest_major_vehicle_node(vector3 vec, vector3* outPosition, float unknown1, int unknown2)l
extern _native64(0xFF071FB798B803B0) bool get_closest_vehicle_node_with_heading(vector3 vec, vector3* outPosition, float* outHeading, int nodeType, float p6, int p7)l
extern _native64(0xE50E52416CCF948B) bool get_nth_closest_vehicle_node(vector3 vec, int nthClosest, vector3* outPosition, any unknown1, any unknown2, any unknown3)l
extern _native64(0x22D7275A79FE8215) int get_nth_closest_vehicle_node_id(vector3 vec, int nth, int nodetype, float p5, float p6)l
extern _native64(0x80CA6A8B6C094CC4) bool get_nth_closest_vehicle_node_with_heading(vector3 vec, int nthClosest, vector3* outPosition, float* heading, any* unknown1, int unknown2, float unknown3, float unknown4)l
extern _native64(0x6448050E9C2A7207) any get_nth_closest_vehicle_node_id_with_heading(vector3 vec, int nthClosest, vector3* outPosition, float outHeading, any p6, float p7, float p8)l
extern _native64(0x45905BE8654AE067) bool get_nth_closest_vehicle_node_favour_direction(vector3 vec, vector3 desired, int nthClosest, vector3* outPosition, float* outHeading, int nodetype, any p10, any p11)l
extern _native64(0x0568566ACBB5DEDC) bool get_vehicle_node_properties(vector3 vec, int* density, int* flags)l
extern _native64(0x1EAF30FCFBF5AF74) bool is_vehicle_node_id_valid(int vehicleNodeId)l
extern _native64(0x703123E5E7D429C2) void get_vehicle_node_position(int nodeId, vector3* outPosition)l
extern _native64(0xA2AE5C478B96E3B6) bool _get_supports_gps_route_flag(int nodeID)l
extern _native64(0x4F5070AA58F69279) bool _get_is_slow_road_flag(int nodeID)l
extern _native64(0x132F52BBA570FE92) any get_closest_road(vector3 vec, any p3, any p4, any p5, any p6, any p7, any p8, any p9, any p10)l
extern _native64(0x80E4A6EDDB0BE8D9) bool load_all_path_nodes(bool keepInMemory)l
extern _native64(0x228E5C6AD4D74BFD) void unk_0x228E5C6AD4D74BFD(bool p0)l
extern _native64(0xF7B79A50B905A30D) bool unk_0xF7B79A50B905A30D(float p0, float p1, float p2, float p3)l
extern _native64(0x07FB139B592FA687) bool unk_0x07FB139B592FA687(float p0, float p1, float p2, float p3)l
extern _native64(0x1EE7063B80FFC77C) void set_roads_back_to_original(float p0, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0x0027501B9F3B407E) void set_roads_back_to_original_in_angled_area(vector3 vec_1, vector3 vec_2, float p6)l
extern _native64(0x0B919E1FB47CC4E0) void unk_0x0B919E1FB47CC4E0(float p0)l
extern _native64(0xAA76052DDA9BFC3E) void unk_0xAA76052DDA9BFC3E(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0xE04B48F2CC926253) void set_ped_paths_back_to_original(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0x93E0DB8440B73A7D) bool get_random_vehicle_node(vector3 vec, float radius, bool p4, bool p5, bool p6, vector3* outPosition, float* heading)l
extern _native64(0x2EB41072B4C1E4C0) void get_street_name_at_coord(vector3 vec, Hash* streetName, Hash* crossingRoad)l
extern _native64(0xF90125F1F79ECDF8) int generate_directions_to_coord(vector3 vec, bool p3, float* direction, float* p5, float* distToNxJunction)l
extern _native64(0x72751156E7678833) void set_ignore_no_gps_flag(bool ignore)l
extern _native64(0x1FC289A0C3FF470F) any unk_0x1FC289A0C3FF470F(bool p0)l
extern _native64(0xDC20483CD3DD5201) void set_gps_disabled_zone(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0xBBB45C3CF5C8AA85) any unk_0xBBB45C3CF5C8AA85()l
extern _native64(0x869DAACBBE9FA006) any unk_0x869DAACBBE9FA006()l
extern _native64(0x16F46FB18C8009E4) any unk_0x16F46FB18C8009E4(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x125BF4ABFC536B09) bool is_point_on_road(vector3 vec, Vehicle vehicle)l
extern _native64(0xD3A6A0EF48823A8C) any unk_0xD3A6A0EF48823A8C()l
extern _native64(0xD0BC1C6FB18EE154) void unk_0xD0BC1C6FB18EE154(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0x2801D0012266DF07) void unk_0x2801D0012266DF07(any p0)l
extern _native64(0x387EAD7EE42F6685) void add_navmesh_required_region(vector2 vector, float radius)l
extern _native64(0x916F0A3CDEC3445E) void remove_navmesh_required_regions()l
extern _native64(0x4C8872D8CDBE1B8B) void disable_navmesh_in_area(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0x8415D95B194A3AEA) bool are_all_navmesh_regions_loaded()l
extern _native64(0xF813C7E63F9062A5) bool is_navmesh_loaded_in_area(vector3 vec_1, vector3 vec_2)l
extern _native64(0x01708E8DD3FF8C65) any unk_0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0xFCD5C8E06E502F5A) any add_navmesh_blocking_object(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, any p8)l
extern _native64(0x109E99373F290687) void update_navmesh_blocking_object(any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, any p8)l
extern _native64(0x46399A7895957C0E) void remove_navmesh_blocking_object(any p0)l
extern _native64(0x0EAEB0DB4B132399) bool does_navmesh_blocking_object_exist(any p0)l
extern _native64(0x29C24BFBED8AB8FB) float unk_0x29C24BFBED8AB8FB(float p0, float p1)l
extern _native64(0x8ABE8608576D9CE3) float unk_0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3)l
extern _native64(0x336511A34F2E5185) float unk_0x336511A34F2E5185(float left, float right)l
extern _native64(0x3599D741C9AC6310) float unk_0x3599D741C9AC6310(float p0, float p1, float p2, float p3)l
extern _native64(0xADD95C7005C4A197) float calculate_travel_distance_between_points(vector3 vec_1, vector3 vec_2)l
#pragma endregion //}
#pragma region CONTROLS //{
extern _native64(0x1CEA6BFDF248E5D9) bool is_control_enabled(int inputGroup, int control)l
extern _native64(0xF3A21BCD95725A4A) bool is_control_pressed(int inputGroup, int control)l
extern _native64(0x648EE3E7F38877DD) bool is_control_released(int inputGroup, int control)l
extern _native64(0x580417101DDB492F) bool is_control_just_pressed(int inputGroup, int control)l
extern _native64(0x50F940259D3841E6) bool is_control_just_released(int inputGroup, int control)l
extern _native64(0xD95E79E8686D2C27) int get_control_value(int inputGroup, int control)l
extern _native64(0xEC3C9B8D5327B563) float get_control_normal(int inputGroup, int control)l
extern _native64(0x5B73C77D9EB66E24) void unk_0x5B73C77D9EB66E24(bool p0)l
extern _native64(0x5B84D09CEC5209C5) float unk_0x5B84D09CEC5209C5(int inputGroup, int control)l
extern _native64(0xE8A25867FBA3B05E) bool _set_control_normal(int inputGroup, int control, float amount)l
extern _native64(0xE2587F8CBBD87B1D) bool is_disabled_control_pressed(int inputGroup, int control)l
extern _native64(0x91AEF906BCA88877) bool is_disabled_control_just_pressed(int inputGroup, int control)l
extern _native64(0x305C8DCD79DA8B0F) bool is_disabled_control_just_released(int inputGroup, int control)l
extern _native64(0x11E65974A982637C) float get_disabled_control_normal(int inputGroup, int control)l
extern _native64(0x4F8A26A890FD62FB) float unk_0x4F8A26A890FD62FB(int inputGroup, int control)l
extern _native64(0xD7D22F5592AED8BA) int unk_0xD7D22F5592AED8BA(int p0)l
extern _native64(0xA571D46727E2B718) bool _is_input_disabled(int inputGroup)l
extern _native64(0x13337B38DB572509) bool _is_input_just_disabled(int inputGroup)l
extern _native64(0xFC695459D4D0E219) bool _set_cursor_location(vector2 vector)l
extern _native64(0x23F09EADC01449D6) bool unk_0x23F09EADC01449D6(bool p0)l
extern _native64(0x6CD79468A1E595C6) bool unk_0x6CD79468A1E595C6(int inputGroup)l
extern _native64(0x0499D7B09FC9B407) const char* get_control_instructional_button(int inputGroup, int control, bool p2)l
extern _native64(0x80C2FD58D720C801) const char* unk_0x80C2FD58D720C801(int inputGroup, int control, bool p2)l
extern _native64(0x8290252FFF36ACB5) void unk_0x8290252FFF36ACB5(int p0, RGB colour)l
extern _native64(0xCB0360EFEFB2580D) void unk_0xCB0360EFEFB2580D(any p0)l
extern _native64(0x48B3886C1358D0D5) void set_pad_shake(int p0, int duration, int frequency)l
extern _native64(0x14D29BB12D47F68C) void unk_0x14D29BB12D47F68C(any p0, any p1, any p2, any p3, any p4)l
extern _native64(0x38C16A305E8CDC8D) void stop_pad_shake(any p0)l
extern _native64(0xF239400E16C23E08) void unk_0xF239400E16C23E08(any p0, any p1)l
extern _native64(0xA0CEFCEA390AAB9B) void unk_0xA0CEFCEA390AAB9B(any p0)l
extern _native64(0x77B612531280010D) bool is_look_inverted()l
extern _native64(0xE1615EC03B3BB4FD) bool unk_0xE1615EC03B3BB4FD()l
extern _native64(0xBB41AFBBBC0A0287) int get_local_player_aim_state()l
extern _native64(0x59B9A7AF4C95133C) any unk_0x59B9A7AF4C95133C()l
extern _native64(0x0F70731BACCFBB96) bool unk_0x0F70731BACCFBB96()l
extern _native64(0xFC859E2374407556) bool unk_0xFC859E2374407556()l
extern _native64(0x798FDEB5B1575088) void set_playerpad_shakes_when_controller_disabled(bool toggle)l
extern _native64(0xEDE476E5EE29EDB1) void set_input_exclusive(int inputGroup, int control)l
extern _native64(0xFE99B66D079CF6BC) void disable_control_action(int inputGroup, int control, bool disable)l
extern _native64(0x351220255D64C155) void enable_control_action(int inputGroup, int control, bool enable)l
extern _native64(0x5F4B6931816E599B) void disable_all_control_actions(int inputGroup)l
extern _native64(0xA5FFE9B05F199DE7) void enable_all_control_actions(int inputGroup)l
extern _native64(0x3D42B92563939375) bool unk_0x3D42B92563939375(const char* p0)l
extern _native64(0x4683149ED1DDE7A1) bool unk_0x4683149ED1DDE7A1(const char* p0)l
extern _native64(0x643ED62D5EA3BEBD) void unk_0x643ED62D5EA3BEBD()l
extern _native64(0x7F4724035FDCA1DD) void _disable_input_group(int inputGroup)l
#pragma endregion //}
#pragma region DATAFILE //{
extern _native64(0xAD6875BBC0FC899C) void unk_0xAD6875BBC0FC899C(any p0)l
extern _native64(0x6CC86E78358D5119) void unk_0x6CC86E78358D5119()l
extern _native64(0xFCCAE5B92A830878) bool unk_0xFCCAE5B92A830878(any p0)l
extern _native64(0x15FF52B809DB2353) bool unk_0x15FF52B809DB2353(any p0)l
extern _native64(0xF8CC1EBE0B62E29F) bool unk_0xF8CC1EBE0B62E29F(any p0)l
extern _native64(0x22DA66936E0FFF37) bool unk_0x22DA66936E0FFF37(any p0)l
extern _native64(0x8F5EA1C01D65A100) bool unk_0x8F5EA1C01D65A100(any p0)l
extern _native64(0xC84527E235FCA219) bool unk_0xC84527E235FCA219(const char* p0, bool p1, const char* p2, any* p3, any* p4, const char* type, bool p6)l
extern _native64(0xA5EFC3E847D60507) bool unk_0xA5EFC3E847D60507(const char* p0, const char* p1, const char* p2, const char* p3, bool p4)l
extern _native64(0x648E7A5434AF7969) bool unk_0x648E7A5434AF7969(const char* p0, any* p1, bool p2, any* p3, any* p4, any* p5, const char* type)l
extern _native64(0x4645DE9980999E93) bool unk_0x4645DE9980999E93(const char* p0, const char* p1, const char* p2, const char* p3, const char* type)l
extern _native64(0x692D808C34A82143) bool unk_0x692D808C34A82143(const char* p0, float p1, const char* type)l
extern _native64(0xA69AC4ADE82B57A4) bool unk_0xA69AC4ADE82B57A4(int p0)l
extern _native64(0x9CB0BFA7A9342C3D) bool unk_0x9CB0BFA7A9342C3D(int p0, bool p1)l
extern _native64(0x52818819057F2B40) bool unk_0x52818819057F2B40(int p0)l
extern _native64(0x01095C95CD46B624) bool unk_0x01095C95CD46B624(int p0)l
extern _native64(0xC5238C011AF405E4) bool _load_ugc_file(const char* filename)l
extern _native64(0xD27058A1CA2B13EE) void datafile_create()l
extern _native64(0x9AB9C1CFC8862DFB) void datafile_delete()l
extern _native64(0x2ED61456317B8178) void unk_0x2ED61456317B8178()l
extern _native64(0xC55854C7D7274882) void unk_0xC55854C7D7274882()l
extern _native64(0x906B778CA1DC72B6) const char* datafile_get_file_dict()l
extern _native64(0x83BCCE3224735F05) bool unk_0x83BCCE3224735F05(const char* filename)l
extern _native64(0x4DFDD9EB705F8140) bool unk_0x4DFDD9EB705F8140(bool* p0)l
extern _native64(0xBEDB96A7584AA8CF) bool datafile_is_save_pending()l
extern _native64(0x35124302A556A325) void _object_value_add_boolean(any* objectData, const char* key, bool value)l
extern _native64(0xE7E035450A7948D5) void _object_value_add_integer(any* objectData, const char* key, int value)l
extern _native64(0xC27E1CC2D795105E) void _object_value_add_float(any* objectData, const char* key, float value)l
extern _native64(0x8FF3847DADD8E30C) void _object_value_add_string(any* objectData, const char* key, const char* value)l
extern _native64(0x4CD49B76338C7DEE) void _object_value_add_vector3(any* objectData, const char* key, vector3 value)l
extern _native64(0xA358F56F10732EE1) any* _object_value_add_object(any* objectData, const char* key)l
extern _native64(0x5B11728527CA6E5F) any* _object_value_add_array(any* objectData, const char* key)l
extern _native64(0x1186940ED72FFEEC) bool _object_value_get_boolean(any* objectData, const char* key)l
extern _native64(0x78F06F6B1FB5A80C) int _object_value_get_integer(any* objectData, const char* key)l
extern _native64(0x06610343E73B9727) float _object_value_get_float(any* objectData, const char* key)l
extern _native64(0x3D2FD9E763B24472) const char* _object_value_get_string(any* objectData, const char* key)l
extern _native64(0x46CD3CB66E0825CC) vector3 _object_value_get_vector3(any* objectData, const char* key)l
extern _native64(0xB6B9DDC412FCEEE2) any* _object_value_get_object(any* objectData, const char* key)l
extern _native64(0x7A983AA9DA2659ED) any* _object_value_get_array(any* objectData, const char* key)l
extern _native64(0x031C55ED33227371) int _object_value_get_type(any* objectData, const char* key)l
extern _native64(0xF8B0F5A43E928C76) void _array_value_add_boolean(any* arrayData, bool value)l
extern _native64(0xCABDB751D86FE93B) void _array_value_add_integer(any* arrayData, int value)l
extern _native64(0x57A995FD75D37F56) void _array_value_add_float(any* arrayData, float value)l
extern _native64(0x2F0661C155AEEEAA) void _array_value_add_string(any* arrayData, const char* value)l
extern _native64(0x407F8D034F70F0C2) void _array_value_add_vector3(any* arrayData, vector3 value)l
extern _native64(0x6889498B3E19C797) any* _array_value_add_object(any* arrayData)l
extern _native64(0x50C1B2874E50C114) bool _array_value_get_boolean(any* arrayData, int arrayIndex)l
extern _native64(0x3E5AE19425CD74BE) int _array_value_get_integer(any* arrayData, int arrayIndex)l
extern _native64(0xC0C527B525D7CFB5) float _array_value_get_float(any* arrayData, int arrayIndex)l
extern _native64(0xD3F2FFEB8D836F52) const char* _array_value_get_string(any* arrayData, int arrayIndex)l
extern _native64(0x8D2064E5B64A628A) vector3 _array_value_get_vector3(any* arrayData, int arrayIndex)l
extern _native64(0x8B5FADCC4E3A145F) any* _array_value_get_object(any* arrayData, int arrayIndex)l
extern _native64(0x065DB281590CEA2D) int _array_value_get_size(any* arrayData)l
extern _native64(0x3A0014ADB172A3C5) int _array_value_get_type(any* arrayData, int arrayIndex)l
#pragma endregion //}
#pragma region FIRE //{
extern _native64(0x6B83617E04503888) int start_script_fire(vector3 vec, int maxChildren, bool isGasFire)l
extern _native64(0x7FF548385680673F) void remove_script_fire(int fireHandle)l
extern _native64(0xF6A9D9708F6F23DF) any start_entity_fire(Entity entity)l
extern _native64(0x7F0DD2EBBB651AFF) void stop_entity_fire(Entity entity)l
extern _native64(0x28D3FED7190D3A0B) bool is_entity_on_fire(Entity entity)l
extern _native64(0x50CAD495A460B305) int get_number_of_fires_in_range(vector3 vec, float radius)l
extern _native64(0x056A8A219B8E829F) void stop_fire_in_range(vector3 vec, float radius)l
extern _native64(0x352A9F6BCF90081F) bool get_closest_fire_pos(vector3* outPosition, vector3 vec)l
extern _native64(0xE3AD2BDBAEE269AC) void add_explosion(vector3 vec, int explosionType, float damageScale, bool isAudible, bool isInvisible, float cameraShake, bool unk0)l
extern _native64(0x172AA1B624FA1013) void add_owned_explosion(Ped ped, vector3 vec, int explosionType, float damageScale, bool isAudible, bool isInvisible, float cameraShake)l
extern _native64(0x36DD3FE58B5E5212) void add_explosion_with_user_vfx(vector3 vec, int explosionType, Hash explosionFx, float damageScale, bool isAudible, bool isInvisible, float cameraShake)l
extern _native64(0x2E2EBA0EE7CED0E0) bool is_explosion_in_area(int explosionType, vector3 vec_1, vector3 vec_2)l
extern _native64(0x6070104B699B2EF4) any unk_0x6070104B699B2EF4(any p0, any p1, any p2, any p3, any p4, any p5, any p6)l
extern _native64(0xAB0F816885B0E483) bool is_explosion_in_sphere(int explosionType, vector3 vec, float radius)l
extern _native64(0xA079A6C51525DC4B) bool is_explosion_in_angled_area(int explosionType, vector3 vec_1, vector3 vec_2, float angle)l
extern _native64(0x14BA4BA137AF6CEC) Entity _get_ped_inside_explosion_area(int explosionType, vector3 vec_1, vector3 vec_2, float radius)l
#pragma endregion //}
#pragma region DECISIONEVENT //{
extern _native64(0xB604A2942ADED0EE) void set_decision_maker(Ped ped, Hash name)l
extern _native64(0x4FC9381A7AEE8968) void clear_decision_maker_event_response(Hash name, int type)l
extern _native64(0xE42FCDFD0E4196F7) void block_decision_maker_event(Hash name, int type)l
extern _native64(0xD7CD9CF34F2C99E8) void unblock_decision_maker_event(Hash name, int type)l
extern _native64(0xD9F8455409B525E9) ScrHandle add_shocking_event_at_position(int type, vector3 vec, float duration)l
extern _native64(0x7FD8F3BE76F89422) ScrHandle add_shocking_event_for_entity(int type, Entity entity, float duration)l
extern _native64(0x1374ABB7C15BAB92) bool is_shocking_event_in_sphere(int type, vector3 vec, float radius)l
extern _native64(0x2CDA538C44C6CCE5) bool remove_shocking_event(ScrHandle event)l
extern _native64(0xEAABE8FDFA21274C) void remove_all_shocking_events(bool p0)l
extern _native64(0x340F1415B68AEADE) void remove_shocking_event_spawn_blocking_areas()l
extern _native64(0x2F9A292AD0A3BD89) void suppress_shocking_events_next_frame()l
extern _native64(0x3FD2EC8BF1F1CF30) void suppress_shocking_event_type_next_frame(int type)l
extern _native64(0x5F3B7749C112D552) void suppress_agitation_events_next_frame()l
#pragma endregion //}
#pragma region ZONE //{
extern _native64(0x27040C25DE6CB2F4) int get_zone_at_coords(vector3 vec)l
extern _native64(0x98CD1D2934B76CC1) int get_zone_from_name_id(const char* zoneName)l
extern _native64(0x4334BC40AA0CB4BB) int get_zone_popschedule(int zoneId)l
extern _native64(0xCD90657D4C30E1CA) const char* get_name_of_zone(vector3 vec)l
extern _native64(0xBA5ECEEA120E5611) void set_zone_enabled(int zoneId, bool toggle)l
extern _native64(0x5F7B268D15BA0739) int get_zone_scumminess(int zoneId)l
extern _native64(0x5F7D596BAC2E7777) void override_popschedule_vehicle_model(int scheduleId, Hash vehicleHash)l
extern _native64(0x5C0DE367AA0D911C) void clear_popschedule_override_vehicle_model(int scheduleId)l
extern _native64(0x7EE64D51E8498728) Hash get_hash_of_map_area_at_coords(vector3 vec)l
#pragma endregion //}
#pragma region ROPE //{
extern _native64(0xE832D760399EB220) Object add_rope(vector3 vec, vector3 rot, float length, int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12, bool rigid, float p14, bool breakWhenShot, any* unkPtr)l
extern _native64(0x52B4829281364649) void delete_rope(Object* rope)l
extern _native64(0xAA5D6B1888E4DB20) any delete_child_rope(Object rope)l
extern _native64(0xFD5448BE3111ED96) bool does_rope_exist(Object* rope)l
extern _native64(0xF159A63806BB5BA8) void rope_draw_shadow_enabled(Object* rope, bool toggle)l
extern _native64(0xCBB203C04D1ABD27) any load_rope_data(Object rope, const char* rope_preset)l
extern _native64(0x2B320CF14146B69A) void pin_rope_vertex(Object rope, int vertex, vector3 vec)l
extern _native64(0x4B5AE2EEE4A8F180) any unpin_rope_vertex(Object rope, int vertex)l
extern _native64(0x3655F544CD30F0B5) int get_rope_vertex_count(Object rope)l
extern _native64(0x3D95EC8B6D940AC3) void attach_entities_to_rope(Object rope, Entity ent1, Entity ent2, vector3 ent1_, vector3 ent2_, float length, bool p10, bool p11, any* p12, any* p13)l
extern _native64(0x4B490A6832559A65) void attach_rope_to_entity(Object rope, Entity entity, vector3 vec, bool p5)l
extern _native64(0xBCF3026912A8647D) void detach_rope_from_entity(Object rope, Entity entity)l
extern _native64(0xC8D667EE52114ABA) void rope_set_update_pinverts(Object rope)l
extern _native64(0xDC57A637A20006ED) void unk_0xDC57A637A20006ED(any p0, any p1)l
extern _native64(0x36CCB9BE67B970FD) void unk_0x36CCB9BE67B970FD(any p0, bool p1)l
extern _native64(0x84DE3B5FB3E666F0) bool unk_0x84DE3B5FB3E666F0(any* p0)l
extern _native64(0x21BB0FBD3E217C2D) any get_rope_last_vertex_coord(Object rope)l
extern _native64(0xEA61CA8E80F09E4D) any get_rope_vertex_coord(Object rope, int vertex)l
extern _native64(0x1461C72C889E343E) void start_rope_winding(Object rope)l
extern _native64(0xCB2D4AB84A19AA7C) void stop_rope_winding(Object rope)l
extern _native64(0x538D1179EC1AA9A9) void start_rope_unwinding_front(Object rope)l
extern _native64(0xFFF3A50779EFBBB3) void stop_rope_unwinding_front(Object rope)l
extern _native64(0x5389D48EFA2F079A) void rope_convert_to_simple(Object rope)l
extern _native64(0x9B9039DBF2D258C1) any rope_load_textures()l
extern _native64(0xF2D0E6A75CC05597) bool rope_are_textures_loaded()l
extern _native64(0x6CE36C35C1AC8163) any rope_unload_textures()l
extern _native64(0x271C9D3ACA5D6409) bool unk_0x271C9D3ACA5D6409(Object rope)l
extern _native64(0xBC0CE682D4D05650) void unk_0xBC0CE682D4D05650(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7, any p8, any p9, any p10, any p11, any p12, any p13)l
extern _native64(0xB1B6216CA2E7B55E) void unk_0xB1B6216CA2E7B55E(any p0, bool p1, bool p2)l
extern _native64(0xB743F735C03D7810) void unk_0xB743F735C03D7810(any p0, any p1)l
extern _native64(0x73040398DFF9A4A6) float _get_rope_length(Object rope)l
extern _native64(0xD009F759A723DB1B) any rope_force_length(Object rope, float length)l
extern _native64(0xC16DE94D9BEA14A0) any rope_reset_length(Object rope, bool length)l
extern _native64(0xE37F721824571784) void apply_impulse_to_cloth(vector3 pos, vector3 vec, float impulse)l
extern _native64(0xEEA3B200A6FEB65B) void set_damping(Object rope, int vertex, float value)l
extern _native64(0x710311ADF0E20730) void activate_physics(Entity entity)l
extern _native64(0xD8FA3908D7B86904) void set_cgoffset(Object rope, vector3 vec)l
extern _native64(0x8214A4B5A7A33612) vector3 get_cgoffset(Object rope)l
extern _native64(0xBE520D9761FF811F) void set_cg_at_boundcenter(Object rope)l
extern _native64(0x2E648D16F6E308F3) void break_entity_glass(any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, any p9, bool p10)l
extern _native64(0x5CEC1A84620E7D5B) any set_disable_breaking(Object rope, bool enabled)l
extern _native64(0xCC6E963682533882) void unk_0xCC6E963682533882(any p0)l
extern _native64(0x01BA3AED21C16CFB) void set_disable_frag_damage(Object object, bool toggle)l
#pragma endregion //}
#pragma region WATER //{
extern _native64(0xF6829842C06AE524) bool get_water_height(vector3 vec, float* height)l
extern _native64(0x8EE6B53CE13A9794) bool get_water_height_no_waves(vector3 vec, float* height)l
extern _native64(0xFFA5D878809819DB) bool test_probe_against_water(vector3 vec_1, vector3 vec_2, vector3* result)l
extern _native64(0x8974647ED222EA5F) bool test_probe_against_all_water(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7)l
extern _native64(0x2B3451FA1E3142E2) bool test_vertical_probe_against_all_water(vector3 vec, any p3, any* p4)l
extern _native64(0xC443FD757C3BA637) void modify_water(vector2 vector, float radius, float height)l
extern _native64(0xFDBF4CDBC07E1706) int unk_0xFDBF4CDBC07E1706(vector3 vec, float radius, float unk)l
extern _native64(0xB1252E3E59A82AAF) void unk_0xB1252E3E59A82AAF(int p0)l
extern _native64(0xB96B00E976BE977F) void _set_waves_intensity(float intensity)l
extern _native64(0x2B2A2CC86778B619) float _get_waves_intensity()l
extern _native64(0x5E5E99285AE812DB) void _reset_waves_intensity()l
#pragma endregion //}
#pragma region WORLDPROBE //{
extern _native64(0x7EE9F5D83DD4F90E) int start_shape_test_los_probe(vector3 vec_1, vector3 vec_2, int flags, Entity entity, int p8)l
extern _native64(0x377906D8A31E5586) int _start_shape_test_ray(vector3 vec_1, vector3 vec_2, int flags, Entity entity, int p8)l
extern _native64(0x052837721A854EC7) int start_shape_test_bounding_box(Entity entity, int flags1, int flags2)l
extern _native64(0xFE466162C4401D18) int start_shape_test_box(vector3 vec, float x1, float y2, float z2, vector3 rot, any p9, any p10, any entity, any p12)l
extern _native64(0x37181417CE7C8900) int start_shape_test_bound(Entity entity, int flags1, int flags2)l
extern _native64(0x28579D1B8F8AAC80) int start_shape_test_capsule(vector3 vec_1, vector3 vec_2, float radius, int flags, Entity entity, int p9)l
extern _native64(0xE6AC6C45FBE83004) int unk_0xE6AC6C45FBE83004(vector3 vec_1, vector3 vec_2, float radius, int flags, Entity entity, any p9)l
extern _native64(0xFF6BE494C7987F34) int unk_0xFF6BE494C7987F34(vector3* pVec1, vector3* pVec2, int flag, Entity entity, int flag2)l
extern _native64(0x3D87450E15D98694) int get_shape_test_result(int rayHandle, bool* hit, vector3* endCoords, vector3* surfaceNormal, Entity* entityHit)l
extern _native64(0x65287525D951F6BE) int _get_shape_test_result_ex(int rayHandle, bool* hit, vector3* endCoords, vector3* surfaceNormal, Hash* materialHash, Entity* entityHit)l
extern _native64(0x2B3334BCA57CD799) void unk_0x2B3334BCA57CD799(Entity p0)l
#pragma endregion //}
#pragma region NETWORK //{
extern _native64(0x054354A99211EB96) bool network_is_signed_in()l
extern _native64(0x1077788E268557C2) bool network_is_signed_online()l
extern _native64(0xBD545D44CCE70597) bool unk_0xBD545D44CCE70597()l
extern _native64(0xEBCAB9E5048434F4) any unk_0xEBCAB9E5048434F4()l
extern _native64(0x74FB3E29E6D10FA9) any unk_0x74FB3E29E6D10FA9()l
extern _native64(0x7808619F31FF22DB) any unk_0x7808619F31FF22DB()l
extern _native64(0xA0FA4EC6A05DA44E) any unk_0xA0FA4EC6A05DA44E()l
extern _native64(0x85443FF4C328F53B) bool _network_are_ros_available()l
extern _native64(0x8D11E61A4ABF49CC) bool unk_0x8D11E61A4ABF49CC()l
extern _native64(0x9A4CF4F48AD77302) bool network_is_cloud_available()l
extern _native64(0x67A5589628E0CFF6) bool unk_0x67A5589628E0CFF6()l
extern _native64(0xBA9775570DB788CF) any unk_0xBA9775570DB788CF()l
extern _native64(0x8DB296B814EDDA07) bool network_is_host()l
extern _native64(0xA306F470D1660581) any unk_0xA306F470D1660581()l
extern _native64(0x4237E822315D8BA9) bool unk_0x4237E822315D8BA9()l
extern _native64(0x25CB5A9F37BFD063) bool network_have_online_privileges()l
extern _native64(0x1353F87E89946207) bool unk_0x1353F87E89946207()l
extern _native64(0x72D918C99BCACC54) bool unk_0x72D918C99BCACC54(any p0)l
extern _native64(0xAEEF48CDF5B6CE7C) bool unk_0xAEEF48CDF5B6CE7C(any p0, any p1)l
extern _native64(0x78321BEA235FD8CD) bool unk_0x78321BEA235FD8CD(any p0, bool p1)l
extern _native64(0x595F028698072DD9) bool unk_0x595F028698072DD9(any p0, any p1, bool p2)l
extern _native64(0x83F28CE49FBBFFBA) bool unk_0x83F28CE49FBBFFBA(any p0, any p1, bool p2)l
extern _native64(0x76BF03FADBF154F5) any unk_0x76BF03FADBF154F5()l
extern _native64(0x9614B71F8ADB982B) any unk_0x9614B71F8ADB982B()l
extern _native64(0x5EA784D197556507) any unk_0x5EA784D197556507()l
extern _native64(0xA8ACB6459542A8C8) any unk_0xA8ACB6459542A8C8()l
extern _native64(0x83FE8D7229593017) void unk_0x83FE8D7229593017()l
extern _native64(0x580CE4438479CC61) bool network_can_bail()l
extern _native64(0x95914459A87EBA28) void network_bail()l
extern _native64(0x283B6062A2C01E9B) void unk_0x283B6062A2C01E9B()l
extern _native64(0xAF50DA1A3F8B1BA4) bool network_can_access_multiplayer(int* loadingState)l
extern _native64(0x9747292807126EDA) bool network_is_multiplayer_disabled()l
extern _native64(0x7E782A910C362C25) bool network_can_enter_multiplayer()l
extern _native64(0x330ED4D05491934F) any network_session_enter(any p0, any p1, any p2, int maxPlayers, any p4, any p5)l
extern _native64(0x2CFC76E0D087C994) bool network_session_friend_matchmaking(int p0, int p1, int maxPlayers, bool p3)l
extern _native64(0x94BC51E9449D917F) bool network_session_crew_matchmaking(int p0, int p1, int p2, int maxPlayers, bool p4)l
extern _native64(0xBE3E347A87ACEB82) bool network_session_activity_quickmatch(any p0, any p1, any p2, any p3)l
extern _native64(0x6F3D4ED9BEE4E61D) bool network_session_host(int p0, int maxPlayers, bool p2)l
extern _native64(0xED34C0C02C098BB7) bool network_session_host_closed(int p0, int maxPlayers)l
extern _native64(0xB9CFD27A5D578D83) bool network_session_host_friends_only(int p0, int maxPlayers)l
extern _native64(0xFBCFA2EA2E206890) bool network_session_is_closed_friends()l
extern _native64(0x74732C6CA90DA2B4) bool network_session_is_closed_crew()l
extern _native64(0xF3929C2379B60CCE) bool network_session_is_solo()l
extern _native64(0xCEF70AA5B3F89BA1) bool network_session_is_private()l
extern _native64(0xA02E59562D711006) bool network_session_end(bool p0, bool p1)l
extern _native64(0xFA8904DC5F304220) void network_session_kick_player(Player player)l
extern _native64(0xD6D09A6F32F49EF1) bool _network_session_is_player_voted_to_kick(Player player)l
extern _native64(0x59DF79317F85A7E0) any unk_0x59DF79317F85A7E0()l
extern _native64(0xFFE1E5B792D92B34) any unk_0xFFE1E5B792D92B34()l
extern _native64(0x49EC8030F5015F8B) void unk_0x49EC8030F5015F8B(int p0)l
extern _native64(0x8B6A4DD0AF9CE215) void _network_session_set_max_players(int playerType, int playerCount)l
extern _native64(0x56CE820830EF040B) int _network_session_get_unk(int p0)l
extern _native64(0xCAE55F48D3D7875C) void unk_0xCAE55F48D3D7875C(any p0)l
extern _native64(0xF49ABC20D8552257) void unk_0xF49ABC20D8552257(any p0)l
extern _native64(0x4811BBAC21C5FCD5) void unk_0x4811BBAC21C5FCD5(any p0)l
extern _native64(0x5539C3EBF104A53A) void unk_0x5539C3EBF104A53A(bool p0)l
extern _native64(0x702BC4D605522539) void unk_0x702BC4D605522539(any p0)l
extern _native64(0x3F52E880AAF6C8CA) void unk_0x3F52E880AAF6C8CA(bool p0)l
extern _native64(0xF1EEA2DDA9FFA69D) void unk_0xF1EEA2DDA9FFA69D(any p0)l
extern _native64(0x1153FA02A659051C) void unk_0x1153FA02A659051C()l
extern _native64(0xC19F6C8E7865A6FF) void _network_session_hosted(bool p0)l
extern _native64(0x236406F60CF216D6) void network_add_followers(int* p0, int p1)l
extern _native64(0x058F43EC59A8631A) void network_clear_followers()l
extern _native64(0x6D03BFBD643B2A02) void _network_get_server_time(int* hours, int* minutes, int* seconds)l
extern _native64(0x600F8CB31C7AAB6E) void unk_0x600F8CB31C7AAB6E(any p0)l
extern _native64(0xE532D6811B3A4D2A) bool network_x_affects_gamers(any p0)l
extern _native64(0xF7B2CFDE5C9F700D) bool network_find_matched_gamers(any p0, float p1, float p2, float p3)l
extern _native64(0xDDDF64C91BFCF0AA) bool network_is_finding_gamers()l
extern _native64(0xF9B83B77929D8863) any unk_0xF9B83B77929D8863()l
extern _native64(0xA1B043EE79A916FB) int network_get_num_found_gamers()l
extern _native64(0x9DCFF2AFB68B3476) bool network_get_found_gamer(any* p0, any p1)l
extern _native64(0x6D14CCEE1B40381A) void network_clear_found_gamers()l
extern _native64(0x85A0EF54A500882C) bool unk_0x85A0EF54A500882C(any* p0)l
extern _native64(0x2CC848A861D01493) any unk_0x2CC848A861D01493()l
extern _native64(0x94A8394D150B013A) any unk_0x94A8394D150B013A()l
extern _native64(0x5AE17C6B0134B7F1) any unk_0x5AE17C6B0134B7F1()l
extern _native64(0x02A8BEC6FD9AF660) bool unk_0x02A8BEC6FD9AF660(any* p0, any p1)l
extern _native64(0x86E0660E4F5C956D) void unk_0x86E0660E4F5C956D()l
extern _native64(0xC6F8AB8A4189CF3A) void network_is_player_animation_drawing_synchronized()l
extern _native64(0x2FBF47B1B36D36F9) void network_session_cancel_invite()l
extern _native64(0xA29177F7703B5644) void network_session_force_cancel_invite()l
extern _native64(0xAC8C7B9B88C4A668) bool network_has_pending_invite()l
extern _native64(0xC42DD763159F3461) any unk_0xC42DD763159F3461()l
extern _native64(0x62A0296C1BB1CEB3) any unk_0x62A0296C1BB1CEB3()l
extern _native64(0x23DFB504655D0CE4) bool network_session_was_invited()l
extern _native64(0xE57397B4A3429DD0) void network_session_get_inviter(int* networkHandle)l
extern _native64(0xD313DE83394AF134) any unk_0xD313DE83394AF134()l
extern _native64(0xBDB6F89C729CF388) any unk_0xBDB6F89C729CF388()l
extern _native64(0xA0682D67EF1FBA3D) void network_suppress_invite(bool toggle)l
extern _native64(0x34F9E9049454A7A0) void network_block_invites(bool toggle)l
extern _native64(0xCFEB8AF24FC1D0BB) void unk_0xCFEB8AF24FC1D0BB(bool p0)l
extern _native64(0xF814FEC6A19FD6E0) void unk_0xF814FEC6A19FD6E0()l
extern _native64(0x6B07B9CE4D390375) void _network_block_kicked_players(bool p0)l
extern _native64(0x7AC752103856FB20) void unk_0x7AC752103856FB20(bool p0)l
extern _native64(0x74698374C45701D2) any unk_0x74698374C45701D2()l
extern _native64(0x140E6A44870A11CE) void unk_0x140E6A44870A11CE()l
extern _native64(0xC74C33FCA52856D5) void network_session_host_single_player(int p0)l
extern _native64(0x3442775428FD2DAA) void network_session_leave_single_player()l
extern _native64(0x10FAB35428CCC9D7) bool network_is_game_in_progress()l
extern _native64(0xD83C2B94E7508980) bool network_is_session_active()l
extern _native64(0xCA97246103B63917) bool network_is_in_session()l
extern _native64(0x9DE624D2FC4B603F) bool network_is_session_started()l
extern _native64(0xF4435D66A8E2905E) bool network_is_session_busy()l
extern _native64(0x4EEBC3694E49C572) bool network_can_session_end()l
extern _native64(0x271CC6AB59EBF9A5) void network_session_mark_visible(bool p0)l
extern _native64(0xBA416D68C631496A) any network_session_is_visible()l
extern _native64(0xA73667484D7037C3) void network_session_block_join_requests(bool p0)l
extern _native64(0xB4AB419E0D86ACAE) void network_session_change_slots(int p0, bool p1)l
extern _native64(0x53AFD64C6758F2F9) any unk_0x53AFD64C6758F2F9()l
extern _native64(0x9C1556705F864230) void network_session_voice_host()l
extern _native64(0x6793E42BE02B575D) void network_session_voice_leave()l
extern _native64(0xABD5E88B8A2D3DB2) void unk_0xABD5E88B8A2D3DB2(any* globalPtr)l
extern _native64(0x7F8413B7FC2AA6B9) void network_set_keep_focuspoint(bool p0, any p1)l
extern _native64(0x5B8ED3DB018927B1) void unk_0x5B8ED3DB018927B1(any p0)l
extern _native64(0x855BC38818F6F684) bool unk_0x855BC38818F6F684()l
extern _native64(0xB5D3453C98456528) any unk_0xB5D3453C98456528()l
extern _native64(0xEF0912DDF7C4CB4B) bool unk_0xEF0912DDF7C4CB4B()l
extern _native64(0x3A214F2EC889B100) int network_send_text_message(const char* message, const NetworkHandle* networkHandle)l
extern _native64(0x75138790B4359A74) void network_set_activity_spectator(bool toggle)l
extern _native64(0x12103B9E0C9F92FB) any network_is_activity_spectator()l
extern _native64(0x9D277B76D1D12222) void network_set_activity_spectator_max(int maxSpectators)l
extern _native64(0x73E2B500410DA5A2) int network_get_activity_player_num(bool p0)l
extern _native64(0x2763BBAA72A7BCB9) bool network_is_activity_spectator_from_handle(int* networkHandle)l
extern _native64(0xA60BB5CE242BB254) any network_host_transition(any p0, any p1, any p2, any p3, any p4, any p5)l
extern _native64(0x71FB0EBCD4915D56) bool network_do_transition_quickmatch(any p0, any p1, any p2, any p3)l
extern _native64(0xA091A5E44F0072E5) bool network_do_transition_quickmatch_async(any p0, any p1, any p2, any p3)l
extern _native64(0x9C4AB58491FDC98A) bool network_do_transition_quickmatch_with_group(any p0, any p1, any p2, any p3, any* p4, any p5)l
extern _native64(0xA06509A691D12BE4) any network_join_group_activity()l
extern _native64(0xB13E88E655E5A3BC) void unk_0xB13E88E655E5A3BC()l
extern _native64(0x6512765E3BE78C50) any unk_0x6512765E3BE78C50()l
extern _native64(0x0DBD5D7E3C5BEC3B) any unk_0x0DBD5D7E3C5BEC3B()l
extern _native64(0x5DC577201723960A) bool unk_0x5DC577201723960A()l
extern _native64(0x5A6AA44FF8E931E6) bool unk_0x5A6AA44FF8E931E6()l
extern _native64(0x261E97AD7BCF3D40) void unk_0x261E97AD7BCF3D40(bool p0)l
extern _native64(0x39917E1B4CB0F911) void unk_0x39917E1B4CB0F911(bool p0)l
extern _native64(0xEF26739BCD9907D5) void network_set_transition_creator_handle(any* p0)l
extern _native64(0xFB3272229A82C759) void network_clear_transition_creator_handle()l
extern _native64(0x4A595C32F77DFF76) bool network_invite_gamers_to_transition(any* p0, any p1)l
extern _native64(0xCA2C8073411ECDB6) void network_set_gamer_invited_to_transition(int* networkHandle)l
extern _native64(0xD23A1A815D21DB19) any network_leave_transition()l
extern _native64(0x2DCF46CB1A4F0884) any network_launch_transition()l
extern _native64(0xA2E9C1AB8A92E8CD) void unk_0xA2E9C1AB8A92E8CD(bool p0)l
extern _native64(0xEAA572036990CD1B) void network_bail_transition()l
extern _native64(0x3E9BB38102A589B0) bool network_do_transition_to_game(bool p0, int maxPlayers)l
extern _native64(0x4665F51EFED00034) bool network_do_transition_to_new_game(bool p0, int maxPlayers, bool p2)l
extern _native64(0x3AAD8B2FCA1E289F) bool network_do_transition_to_freemode(any* p0, any p1, bool p2, int players, bool p4)l
extern _native64(0x9E80A5BA8109F974) bool network_do_transition_to_new_freemode(any* p0, any* p1, int players, bool p3, bool p4, bool p5)l
extern _native64(0x9D7696D8F4FA6CB7) any network_is_transition_to_game()l
extern _native64(0x73B000F7FBC55829) any network_get_transition_members(any* p0, any p1)l
extern _native64(0x521638ADA1BA0D18) void network_apply_transition_parameter(any p0, any p1)l
extern _native64(0xEBEFC2E77084F599) void unk_0xEBEFC2E77084F599(any p0, const char* p1, bool p2)l
extern _native64(0x31D1D2B858D25E6B) bool network_send_transition_gamer_instruction(int* networkHandle, const char* p1, int p2, int p3, bool p4)l
extern _native64(0x5728BB6D63E3FF1D) bool network_mark_transition_gamer_as_fully_joined(any* p0)l
extern _native64(0x0B824797C9BF2159) any network_is_transition_host()l
extern _native64(0x6B5C83BA3EFE6A10) bool network_is_transition_host_from_handle(int* networkHandle)l
extern _native64(0x65042B9774C4435E) bool network_get_transition_host(int* networkHandle)l
extern _native64(0x68049AEFF83D8F0A) bool network_is_in_transition()l
extern _native64(0x53FA83401D9C07FE) bool network_is_transition_started()l
extern _native64(0x520F3282A53D26B7) any network_is_transition_busy()l
extern _native64(0x292564C735375EDF) any network_is_transition_matchmaking()l
extern _native64(0xC571D0E77D8BBC29) any unk_0xC571D0E77D8BBC29()l
extern _native64(0x2B3A8F7CA3A38FDE) void network_open_transition_matchmaking()l
extern _native64(0x43F4DBA69710E01E) void network_close_transition_matchmaking()l
extern _native64(0x37A4494483B9F5C9) any unk_0x37A4494483B9F5C9()l
extern _native64(0x0C978FDA19692C2C) void unk_0x0C978FDA19692C2C(bool p0, bool p1)l
extern _native64(0xD0A484CB2F829FBE) any unk_0xD0A484CB2F829FBE()l
extern _native64(0x30DE938B516F0AD2) void network_set_transition_activity_id(any p0)l
extern _native64(0xEEEDA5E6D7080987) void network_change_transition_slots(any p0, any p1)l
extern _native64(0x973D76AA760A6CB6) void unk_0x973D76AA760A6CB6(bool p0)l
extern _native64(0x9AC9CCBFA8C29795) bool network_has_player_started_transition(Player player)l
extern _native64(0x2615AA2A695930C1) bool network_are_transition_details_valid(any p0)l
extern _native64(0x9D060B08CD63321A) bool network_join_transition(Player player)l
extern _native64(0x7284A47B3540E6CF) bool network_has_invited_gamer_to_transition(any* p0)l
extern _native64(0x3F9990BF5F22759C) bool unk_0x3F9990BF5F22759C(any* p0)l
extern _native64(0x05095437424397FA) bool network_is_activity_session()l
extern _native64(0x4A9FDE3A5A6D0437) void unk_0x4A9FDE3A5A6D0437(any p0)l
extern _native64(0xC3C7A6AFDB244624) bool _network_send_presence_invite(int* networkHandle, any* p1, any p2, any p3)l
extern _native64(0xC116FF9B4D488291) bool _network_send_presence_transition_invite(any* p0, any* p1, any p2, any p3)l
extern _native64(0x1171A97A3D3981B6) bool unk_0x1171A97A3D3981B6(any* p0, any* p1, any p2, any p3)l
extern _native64(0x742B58F723233ED9) any unk_0x742B58F723233ED9(any p0)l
extern _native64(0xCEFA968912D0F78D) int network_get_num_presence_invites()l
extern _native64(0xFA91550DF9318B22) bool network_accept_presence_invite(any p0)l
extern _native64(0xF0210268DB0974B1) bool network_remove_presence_invite(any p0)l
extern _native64(0xDFF09646E12EC386) any network_get_presence_invite_id(any p0)l
extern _native64(0x4962CC4AA2F345B7) any network_get_presence_invite_inviter(any p0)l
extern _native64(0x38D5B0FEBB086F75) bool network_get_presence_invite_handle(any p0, any* p1)l
extern _native64(0x26E1CD96B0903D60) any network_get_presence_invite_session_id(any p0)l
extern _native64(0x24409FC4C55CB22D) any unk_0x24409FC4C55CB22D(any p0)l
extern _native64(0xD39B3FFF8FFDD5BF) any unk_0xD39B3FFF8FFDD5BF(any p0)l
extern _native64(0x728C4CC7920CD102) any unk_0x728C4CC7920CD102(any p0)l
extern _native64(0x3DBF2DF0AEB7D289) bool unk_0x3DBF2DF0AEB7D289(any p0)l
extern _native64(0x8806CEBFABD3CE05) bool unk_0x8806CEBFABD3CE05(any p0)l
extern _native64(0x76D9B976C4C09FDE) bool network_has_follow_invite()l
extern _native64(0xC88156EBB786F8D5) any network_action_follow_invite()l
extern _native64(0x439BFDE3CD0610F6) any network_clear_follow_invite()l
extern _native64(0xEBF8284D8CADEB53) void unk_0xEBF8284D8CADEB53()l
extern _native64(0x7524B431B2E6F7EE) void network_remove_transition_invite(any* p0)l
extern _native64(0x726E0375C7A26368) void network_remove_all_transition_invite()l
extern _native64(0xF083835B70BA9BFE) void unk_0xF083835B70BA9BFE()l
extern _native64(0x9D80CD1D0E6327DE) bool network_invite_gamers(any* p0, any p1, any* p2, any* p3)l
extern _native64(0x4D86CD31E8976ECE) bool network_has_invited_gamer(any* p0)l
extern _native64(0x74881E6BCAE2327C) bool network_get_currently_selected_gamer_handle_from_invite_menu(any* p0)l
extern _native64(0x7206F674F2A3B1BB) bool network_set_currently_selected_gamer_handle_from_invite_menu(any* p0)l
extern _native64(0x66F010A4B031A331) void unk_0x66F010A4B031A331(any* p0)l
extern _native64(0x44B37CDCAE765AAE) bool unk_0x44B37CDCAE765AAE(any p0, any* p1)l
extern _native64(0x0D77A82DC2D0DA59) void unk_0x0D77A82DC2D0DA59(any* p0, any* p1)l
extern _native64(0xCBBD7C4991B64809) bool fillout_pm_player_list(int* networkHandle, any p1, any p2)l
extern _native64(0x716B6DB9D1886106) bool fillout_pm_player_list_with_names(any* p0, any* p1, any p2, any p3)l
extern _native64(0xE26CCFF8094D8C74) bool using_network_weapontype(any p0)l
extern _native64(0x796A87B3B68D1F3D) bool unk_0x796A87B3B68D1F3D(any* p0)l
extern _native64(0x2FC5650B0271CB57) any unk_0x2FC5650B0271CB57()l
extern _native64(0x01ABCE5E7CBDA196) any unk_0x01ABCE5E7CBDA196()l
extern _native64(0x120364DE2845DAF8) any unk_0x120364DE2845DAF8(any* p0, any p1)l
extern _native64(0xFD8B834A8BA05048) any unk_0xFD8B834A8BA05048()l
extern _native64(0x8DE9945BCC9AEC52) bool network_is_chatting_in_platform_party(int* networkHandle)l
extern _native64(0x966C2BC2A7FE3F30) bool network_is_in_party()l
extern _native64(0x676ED266AADD31E0) bool network_is_party_member(int* networkHandle)l
extern _native64(0x2BF66D2E7414F686) any unk_0x2BF66D2E7414F686()l
extern _native64(0x14922ED3E38761F0) any unk_0x14922ED3E38761F0()l
extern _native64(0xFA2888E3833C8E96) void unk_0xFA2888E3833C8E96()l
extern _native64(0x25D990F8E0E3F13C) void unk_0x25D990F8E0E3F13C()l
extern _native64(0x77FADDCBE3499DF7) void unk_0x77FADDCBE3499DF7(any p0)l
extern _native64(0xF1B84178F8674195) void unk_0xF1B84178F8674195(any p0)l
extern _native64(0x599E4FA1F87EB5FF) int network_get_random_int()l
extern _native64(0xE30CF56F1EFA5F43) int _network_get_random_int_in_range(int rangeStart, int rangeEnd)l
extern _native64(0x655B91F1495A9090) bool network_player_is_cheater()l
extern _native64(0x172F75B6EE2233BA) any unk_0x172F75B6EE2233BA()l
extern _native64(0x19D8DA0E5A68045A) bool network_player_is_badsport()l
extern _native64(0x46FB3ED415C7641C) bool unk_0x46FB3ED415C7641C(any p0, any p1, any p2)l
extern _native64(0xEC5E3AF5289DCA81) bool bad_sport_player_left_detected(any* p0, any p1, any p2)l
extern _native64(0xE66C690248F11150) void unk_0xE66C690248F11150(any p0, any p1)l
extern _native64(0x1CA59E306ECB80A5) void network_set_this_script_is_network_script(int lobbySize, bool p1, int playerId)l
extern _native64(0xD1110739EEADB592) bool _network_set_this_script_marked(any p0, bool p1, any p2)l
extern _native64(0x2910669969E9535E) bool network_get_this_script_is_network_script()l
extern _native64(0xA6C90FBC38E395EE) int _network_get_num_participants_host()l
extern _native64(0x18D0456E86604654) int network_get_num_participants()l
extern _native64(0x57D158647A6BFABF) int network_get_script_status()l
extern _native64(0x3E9B2F01C50DF595) void network_register_host_broadcast_variables(int* vars, int numVars)l
extern _native64(0x3364AA97340CA215) void network_register_player_broadcast_variables(int* vars, int numVars)l
extern _native64(0x64F62AFB081E260D) void unk_0x64F62AFB081E260D()l
extern _native64(0x5D10B3795F3FC886) bool unk_0x5D10B3795F3FC886()l
extern _native64(0x24FB80D107371267) int network_get_player_index(Player player)l
extern _native64(0x1B84DF6AF2A46938) int network_get_participant_index(int index)l
extern _native64(0x6C0E2E0125610278) Player network_get_player_index_from_ped(Ped ped)l
extern _native64(0xA4A79DD2D9600654) int network_get_num_connected_players()l
extern _native64(0x93DC1BE4E1ABE9D1) bool network_is_player_connected(Player player)l
extern _native64(0xCF61D4B4702EE9EB) int unk_0xCF61D4B4702EE9EB()l
extern _native64(0x6FF8FF40B6357D45) bool network_is_participant_active(any p0)l
extern _native64(0xB8DFD30D6973E135) bool network_is_player_active(Player player)l
extern _native64(0x3CA58F6CB7CBD784) bool network_is_player_a_participant(any p0)l
extern _native64(0x83CD99A1E6061AB5) bool network_is_host_of_this_script()l
extern _native64(0xC7B4D79B01FA7A5C) any network_get_host_of_this_script()l
extern _native64(0x1D6A14F1F9A736FC) int network_get_host_of_script(const char* scriptName, int p1, int p2)l
extern _native64(0x3B3D11CD9FFCDFC9) void network_set_mission_finished()l
extern _native64(0x9D40DF90FAD26098) bool network_is_script_active(const char* scriptName, any p1, bool p2, any p3)l
extern _native64(0x3658E8CD94FC121A) int network_get_num_script_participants(any* p0, any p1, any p2)l
extern _native64(0x638A3A81733086DB) any unk_0x638A3A81733086DB()l
extern _native64(0x1AD5B71586B94820) bool unk_0x1AD5B71586B94820(Player p0, any* p1, any p2)l
extern _native64(0x2302C0264EA58D31) void unk_0x2302C0264EA58D31()l
extern _native64(0x741A3D8380319A81) void unk_0x741A3D8380319A81()l
extern _native64(0x90986E8876CE0A83) Player participant_id()l
extern _native64(0x57A3BDDAD8E5AA0A) int participant_id_to_int()l
extern _native64(0x7A1ADEEF01740A24) int network_get_destroyer_of_network_id(int netId, Hash* weaponHash)l
extern _native64(0x4CACA84440FA26F6) bool _network_get_desroyer_of_entity(any p0, any p1, Hash* p2)l
extern _native64(0x42B2DAA6B596F5F8) Entity network_get_entity_killer_of_player(Player player, Hash* weaponHash)l
extern _native64(0xEA23C49EAA83ACFB) void network_resurrect_local_player(vector3 vec, float heading, bool unk, bool changetime)l
extern _native64(0x2D95C7E2D7E07307) void network_set_local_player_invincible_time(int time)l
extern _native64(0x8A8694B48715B000) bool network_is_local_player_invincible()l
extern _native64(0x9DD368BF06983221) void network_disable_invincible_flashing(int player, bool p1)l
extern _native64(0x524FF0AEFF9C3973) void unk_0x524FF0AEFF9C3973(any p0)l
extern _native64(0xB07D3185E11657A5) bool unk_0xB07D3185E11657A5(Entity p0)l
extern _native64(0xA11700682F3AD45C) int network_get_network_id_from_entity(Entity entity)l
extern _native64(0xCE4E5D9B0A4FF560) Entity network_get_entity_from_network_id(int netId)l
extern _native64(0xC7827959479DCC78) bool network_get_entity_is_networked(Entity entity)l
extern _native64(0x0991549DE4D64762) bool network_get_entity_is_local(Entity entity)l
extern _native64(0x06FAACD625D80CAA) void network_register_entity_as_networked(Entity entity)l
extern _native64(0x7368E683BB9038D6) void network_unregister_networked_entity(Entity entity)l
extern _native64(0x38CE16C96BD11344) bool network_does_network_id_exist(int netID)l
extern _native64(0x18A47D074708FD68) bool network_does_entity_exist_with_network_id(Entity entity)l
extern _native64(0xA670B3662FAFFBD0) bool network_request_control_of_network_id(int netId)l
extern _native64(0x4D36070FE0215186) bool network_has_control_of_network_id(int netId)l
extern _native64(0xB69317BF5E782347) bool network_request_control_of_entity(Entity entity)l
extern _native64(0x870DDFD5A4A796E4) bool network_request_control_of_door(int doorID)l
extern _native64(0x01BF60A500E28887) bool network_has_control_of_entity(Entity entity)l
extern _native64(0x5BC9495F0B3B6FA6) bool network_has_control_of_pickup(Pickup pickup)l
extern _native64(0xCB3C68ADB06195DF) bool network_has_control_of_door(int doorID)l
extern _native64(0xC01E93FAC20C3346) bool _network_has_control_of_pavement_stats(Hash hash)l
extern _native64(0xB4C94523F023419C) int veh_to_net(Vehicle vehicle)l
extern _native64(0x0EDEC3C276198689) int ped_to_net(Ped ped)l
extern _native64(0x99BFDC94A603E541) int obj_to_net(Object object)l
extern _native64(0x367B936610BA360C) Vehicle net_to_veh(int netHandle)l
extern _native64(0xBDCD95FC216A8B3E) Ped net_to_ped(int netHandle)l
extern _native64(0xD8515F5FEA14CB3F) Object net_to_obj(int netHandle)l
extern _native64(0xBFFEAB45A9A9094A) Entity net_to_ent(int netHandle)l
extern _native64(0xE86051786B66CD8E) void network_get_local_handle(NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0xDCD51DD8F87AEC5C) void network_handle_from_user_id(const char* userId, NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0xA0FD21BED61E5C4C) void network_handle_from_member_id(const char* memberId, NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0x388EB2B86C73B6B3) void network_handle_from_player(Player player, NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0xBC1D768F2F5D6C05) Hash _network_hash_from_player_handle(Player player)l
extern _native64(0x58575AC3CF2CA8EC) Hash _network_hash_from_gamer_handle(NetworkHandle* networkHandle)l
extern _native64(0xD45CB817D7E177D2) void network_handle_from_friend(Player friendIndex, NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0x9F0C0A981D73FA56) bool network_gamertag_from_handle_start(NetworkHandle* networkHandle)l
extern _native64(0xB071E27958EF4CF0) bool network_gamertag_from_handle_pending()l
extern _native64(0xFD00798DBA7523DD) bool network_gamertag_from_handle_succeeded()l
extern _native64(0x426141162EBE5CDB) const char* network_get_gamertag_from_handle(NetworkHandle* networkHandle)l
extern _native64(0xD66C9E72B3CC4982) int unk_0xD66C9E72B3CC4982(any* p0, any p1)l
extern _native64(0x58CC181719256197) any unk_0x58CC181719256197(any p0, any p1, any p2)l
extern _native64(0x57DBA049E110F217) bool network_are_handles_the_same(NetworkHandle* netHandle1, NetworkHandle* netHandle2)l
extern _native64(0x6F79B93B0A8E4133) bool network_is_handle_valid(NetworkHandle* networkHandle, int bufferSize)l
extern _native64(0xCE5F689CF5A0A49D) Player network_get_player_from_gamer_handle(NetworkHandle* networkHandle)l
extern _native64(0xC82630132081BB6F) const char* network_member_id_from_gamer_handle(NetworkHandle* networkHandle)l
extern _native64(0x0F10B05DDF8D16E9) bool network_is_gamer_in_my_session(NetworkHandle* networkHandle)l
extern _native64(0x859ED1CEA343FCA8) void network_show_profile_ui(int* networkHandle)l
extern _native64(0x7718D2E2060837D2) const char* network_player_get_name(Player player)l
extern _native64(0x4927FC39CD0869A0) const char* network_player_get_userid(Player player, int* userID)l
extern _native64(0x544ABDDA3B409B6D) bool network_player_is_rockstar_dev(Player player)l
extern _native64(0x565E430DB3B05BEC) bool unk_0x565E430DB3B05BEC(any p0)l
extern _native64(0x7E58745504313A2E) bool network_is_inactive_profile(any* p0)l
extern _native64(0xAFEBB0D5D8F687D2) int network_get_max_friends()l
extern _native64(0x203F1CFD823B27A4) int network_get_friend_count()l
extern _native64(0xE11EBBB2A783FE8B) const char* network_get_friend_name(Player player)l
extern _native64(0x4164F227D052E293) const char* _network_get_friend_name_from_index(int friendIndex)l
extern _native64(0x425A44533437B64D) bool network_is_friend_online(const char* name)l
extern _native64(0x87EB7A3FFCB314DB) bool unk_0x87EB7A3FFCB314DB(any* p0)l
extern _native64(0x2EA9A3BEDF3F17B8) bool network_is_friend_in_same_title(NetworkHandle* networkHandle)l
extern _native64(0x57005C18827F3A28) bool network_is_friend_in_multiplayer(NetworkHandle* networkHandle)l
extern _native64(0x1A24A179F9B31654) bool network_is_friend(NetworkHandle* networkHandle)l
extern _native64(0x0BE73DA6984A6E33) any network_is_pending_friend(any p0)l
extern _native64(0x6EA101606F6E4D81) any network_is_adding_friend()l
extern _native64(0x8E02D73914064223) bool network_add_friend(any* p0, const char* p1)l
extern _native64(0xBAD8F2A42B844821) bool network_is_friend_index_online(int friendIndex)l
extern _native64(0x1B857666604B1A74) void unk_0x1B857666604B1A74(bool p0)l
extern _native64(0x82377B65E943F72D) bool unk_0x82377B65E943F72D(any p0)l
extern _native64(0xC927EC229934AF60) bool network_can_set_waypoint()l
extern _native64(0xB309EBEA797E001F) any unk_0xB309EBEA797E001F(any p0)l
extern _native64(0x26F07DD83A5F7F98) any unk_0x26F07DD83A5F7F98()l
extern _native64(0xE870F9F1F7B4F1FA) bool network_has_headset()l
extern _native64(0x7D395EA61622E116) void unk_0x7D395EA61622E116(bool p0)l
extern _native64(0xC0D2AF00BCC234CA) any unk_0xC0D2AF00BCC234CA()l
extern _native64(0xF2FD55CB574BCC55) bool network_gamer_has_headset(any* p0)l
extern _native64(0x71C33B22606CD88A) bool network_is_gamer_talking(int* p0)l
extern _native64(0xA150A4F065806B1F) bool network_can_communicate_with_gamer(int* player)l
extern _native64(0xCE60DE011B6C7978) bool network_is_gamer_muted_by_me(int* p0)l
extern _native64(0xDF02A2C93F1F26DA) bool network_am_i_muted_by_gamer(any* p0)l
extern _native64(0xE944C4F5AF1B5883) bool network_is_gamer_blocked_by_me(any* p0)l
extern _native64(0x15337C7C268A27B2) bool network_am_i_blocked_by_gamer(any* p0)l
extern _native64(0xB57A49545BA53CE7) bool unk_0xB57A49545BA53CE7(any* p0)l
extern _native64(0xCCA4318E1AB03F1F) bool unk_0xCCA4318E1AB03F1F(any* p0)l
extern _native64(0x07DD29D5E22763F1) bool unk_0x07DD29D5E22763F1(any* p0)l
extern _native64(0x135F9B7B7ADD2185) bool unk_0x135F9B7B7ADD2185(any* p0)l
extern _native64(0x031E11F3D447647E) bool network_is_player_talking(Player player)l
extern _native64(0x3FB99A8B08D18FD6) bool network_player_has_headset(Player player)l
extern _native64(0x8C71288AE68EDE39) bool network_is_player_muted_by_me(Player player)l
extern _native64(0x9D6981DFC91A8604) bool network_am_i_muted_by_player(Player player)l
extern _native64(0x57AF1F8E27483721) bool network_is_player_blocked_by_me(Player player)l
extern _native64(0x87F395D957D4353D) bool network_am_i_blocked_by_player(Player player)l
extern _native64(0x21A1684A25C2867F) float network_get_player_loudness(any p0)l
extern _native64(0xCBF12D65F95AD686) void network_set_talker_proximity(float p0)l
extern _native64(0x84F0F13120B4E098) any network_get_talker_proximity()l
extern _native64(0xBABEC9E69A91C57B) void network_set_voice_active(bool toggle)l
extern _native64(0xCFEB46DCD7D8D5EB) void unk_0xCFEB46DCD7D8D5EB(bool p0)l
extern _native64(0xAF66059A131AA269) void network_override_transition_chat(bool p0)l
extern _native64(0xD5B4883AC32F24C3) void network_set_team_only_chat(bool toggle)l
extern _native64(0x6F697A66CE78674E) void unk_0x6F697A66CE78674E(int team, bool toggle)l
extern _native64(0x70DA3BF8DACD3210) void network_set_override_spectator_mode(bool toggle)l
extern _native64(0x3C5C1E2C2FF814B1) void unk_0x3C5C1E2C2FF814B1(bool p0)l
extern _native64(0x9D7AFCBF21C51712) void unk_0x9D7AFCBF21C51712(bool p0)l
extern _native64(0xF46A1E03E8755980) void unk_0xF46A1E03E8755980(bool p0)l
extern _native64(0x6A5D89D7769A40D8) void unk_0x6A5D89D7769A40D8(bool p0)l
extern _native64(0x3039AE5AD2C9C0C4) void network_override_chat_restrictions(Player player, bool toggle)l
extern _native64(0x97DD4C5944CC2E6A) void _network_override_send_restrictions(Player player, bool toggle)l
extern _native64(0x57B192B4D4AD23D5) void unk_0x57B192B4D4AD23D5(bool p0)l
extern _native64(0xDDF73E2B1FEC5AB4) void network_override_receive_restrictions(Player player, bool toggle)l
extern _native64(0x0FF2862B61A58AF9) void unk_0x0FF2862B61A58AF9(bool p0)l
extern _native64(0xEF6212C2EFEF1A23) void network_set_voice_channel(any p0)l
extern _native64(0xE036A705F989E049) void network_clear_voice_channel()l
extern _native64(0xDBD2056652689917) bool is_network_vehicle_been_damaged_by_any_object(vector3 vec)l
extern _native64(0xF03755696450470C) void unk_0xF03755696450470C()l
extern _native64(0x5E3AA4CA2B6FB0EE) void unk_0x5E3AA4CA2B6FB0EE(any p0)l
extern _native64(0xCA575C391FEA25CC) void unk_0xCA575C391FEA25CC(any p0)l
extern _native64(0xADB57E5B663CCA8B) void unk_0xADB57E5B663CCA8B(Player p0, float* p1, float* p2)l
extern _native64(0x5FCF4D7069B09026) bool _network_is_text_chat_active()l
extern _native64(0x593850C16A36B692) void shutdown_and_launch_single_player_game()l
extern _native64(0xF808475FA571D823) void network_set_friendly_fire_option(bool toggle)l
extern _native64(0x1DCCACDCFC569362) void network_set_rich_presence(any p0, any p1, any p2, any p3)l
extern _native64(0x3E200C2BCF4164EB) void unk_0x3E200C2BCF4164EB(any p0, any p1)l
extern _native64(0x5ED0356A0CE3A34F) int network_get_timeout_time()l
extern _native64(0x9769F811D1785B03) void unk_0x9769F811D1785B03(Player player, vector3 vec, bool p4, bool p5)l
extern _native64(0xBF22E0F32968E967) void unk_0xBF22E0F32968E967(Player player, bool p1)l
extern _native64(0x715135F4B82AC90D) void unk_0x715135F4B82AC90D(Entity entity)l
extern _native64(0x579CCED0265D4896) bool _network_player_is_in_clan()l
extern _native64(0xB124B57F571D8F18) bool network_clan_player_is_active(NetworkHandle* networkHandle)l
extern _native64(0xEEE6EACBE8874FBA) bool network_clan_player_get_desc(int* clanDesc, int bufferSize, NetworkHandle* networkHandle)l
extern _native64(0x7543BB439F63792B) bool unk_0x7543BB439F63792B(int* clanDesc, int bufferSize)l
extern _native64(0xF45352426FF3A4F0) void unk_0xf45352426ff3a4f0(int* clanDesc, int bufferSize, NetworkHandle* networkHandle)l
extern _native64(0x1F471B79ACC90BEF) int _get_num_membership_desc()l
extern _native64(0x48DE78AF2C8885B8) bool network_clan_get_membership_desc(int* memberDesc, int p1)l
extern _native64(0xA989044E70010ABE) bool network_clan_download_membership(NetworkHandle* networkHandle)l
extern _native64(0x5B9E023DC6EBEDC0) bool network_clan_download_membership_pending(any* p0)l
extern _native64(0xB3F64A6A91432477) bool _network_is_clan_membership_finished_downloading()l
extern _native64(0xBB6E6FEE99D866B2) bool network_clan_remote_memberships_are_in_cache(int* p0)l
extern _native64(0xAAB11F6C4ADBC2C1) int network_clan_get_membership_count(int* p0)l
extern _native64(0x48A59CF88D43DF0E) bool network_clan_get_membership_valid(int* p0, any p1)l
extern _native64(0xC8BC2011F67B3411) bool network_clan_get_membership(int* p0, int* clanMembership, int p2)l
extern _native64(0x9FAAA4F4FC71F87F) bool network_clan_join(int clanDesc)l
extern _native64(0x729E3401F0430686) bool _network_clan_animation(const char* animDict, const char* animName)l
extern _native64(0x2B51EDBEFC301339) bool unk_0x2B51EDBEFC301339(int p0, const char* p1)l
extern _native64(0xC32EA7A2F6CA7557) any unk_0xC32EA7A2F6CA7557()l
extern _native64(0x5835D9CD92E83184) bool unk_0x5835D9CD92E83184(any* p0, any* p1)l
extern _native64(0x13518FF1C6B28938) bool unk_0x13518FF1C6B28938(any p0)l
extern _native64(0xA134777FF7F33331) bool unk_0xA134777FF7F33331(any p0, any* p1)l
extern _native64(0x113E6E3E50E286B0) void unk_0x113E6E3E50E286B0(any p0)l
extern _native64(0x9AA46BADAD0E27ED) any network_get_primary_clan_data_clear()l
extern _native64(0x042E4B70B93E6054) void network_get_primary_clan_data_cancel()l
extern _native64(0xCE86D8191B762107) bool network_get_primary_clan_data_start(any* p0, any p1)l
extern _native64(0xB5074DB804E28CE7) any network_get_primary_clan_data_pending()l
extern _native64(0x5B4F04F19376A0BA) any network_get_primary_clan_data_success()l
extern _native64(0xC080FF658B2E41DA) bool network_get_primary_clan_data_new(any* p0, any* p1)l
extern _native64(0x299EEB23175895FC) void set_network_id_can_migrate(int netId, bool toggle)l
extern _native64(0xE05E81A888FA63C8) void set_network_id_exists_on_all_machines(int netId, bool toggle)l
extern _native64(0xA8A024587329F36A) void _set_network_id_sync_to_player(int netId, Player player, bool toggle)l
extern _native64(0xD830567D88A1E873) void network_set_entity_can_blend(Entity entity, bool toggle)l
extern _native64(0xF1CA12B18AEF5298) void _network_set_entity_visible_to_network(Entity entity, bool toggle)l
extern _native64(0xA6928482543022B4) void set_network_id_visible_in_cutscene(int netId, bool p1, bool p2)l
extern _native64(0xAAA553E7DD28A457) void unk_0xAAA553E7DD28A457(bool p0)l
extern _native64(0x3FA36981311FA4FF) void unk_0x3FA36981311FA4FF(int netId, bool state)l
extern _native64(0xA1607996431332DF) bool unk_0xA1607996431332DF(int netId)l
extern _native64(0xD1065D68947E7B6E) void set_local_player_visible_in_cutscene(bool p0, bool p1)l
extern _native64(0xE5F773C1A1D9D168) void set_local_player_invisible_locally(bool p0)l
extern _native64(0x7619364C82D3BF14) void set_local_player_visible_locally(bool p0)l
extern _native64(0x12B37D54667DB0B8) void set_player_invisible_locally(Player player, bool toggle)l
extern _native64(0xFAA10F1FAFB11AF2) void set_player_visible_locally(Player player, bool toggle)l
extern _native64(0x416DBD4CD6ED8DD2) void fade_out_local_player(bool p0)l
extern _native64(0xDE564951F95E09ED) void network_fade_out_entity(Entity entity, bool normal, bool slow)l
extern _native64(0x1F4ED342ACEFE62D) void network_fade_in_entity(Entity entity, bool state, bool fast)l
extern _native64(0x631DC5DFF4B110E3) bool unk_0x631DC5DFF4B110E3(any p0)l
extern _native64(0x422F32CC7E56ABAD) bool unk_0x422F32CC7E56ABAD(any p0)l
extern _native64(0xE73092F4157CD126) bool is_player_in_cutscene(Player player)l
extern _native64(0xE0031D3C8F36AB82) void set_entity_visible_in_cutscene(any p0, bool p1, bool p2)l
extern _native64(0xE135A9FF3F5D05D8) void set_entity_locally_invisible(Entity entity)l
extern _native64(0x241E289B5C059EDC) void set_entity_locally_visible(Entity entity)l
extern _native64(0x6E192E33AD436366) bool is_damage_tracker_active_on_network_id(int netID)l
extern _native64(0xD45B1FFCCD52FF19) void activate_damage_tracker_on_network_id(int netID, bool p1)l
extern _native64(0xD82CF8E64C8729D8) bool is_sphere_visible_to_another_machine(float p0, float p1, float p2, float p3)l
extern _native64(0xDC3A310219E5DA62) bool is_sphere_visible_to_player(any p0, float p1, float p2, float p3, float p4)l
extern _native64(0x4E5C93BD0C32FBF8) void reserve_network_mission_objects(int p0)l
extern _native64(0xB60FEBA45333D36F) void reserve_network_mission_peds(int p0)l
extern _native64(0x76B02E21ED27A469) void reserve_network_mission_vehicles(int p0)l
extern _native64(0x800DD4721A8B008B) bool can_register_mission_objects(int p0)l
extern _native64(0xBCBF4FEF9FA5D781) bool can_register_mission_peds(int p0)l
extern _native64(0x7277F1F2E085EE74) bool can_register_mission_vehicles(int p0)l
extern _native64(0x69778E7564BADE6D) bool can_register_mission_entities(int p0, any p1, any p2, any p3)l
extern _native64(0xAA81B5F10BC43AC2) int get_num_reserved_mission_objects(bool p0)l
extern _native64(0x1F13D5AE5CB17E17) int get_num_reserved_mission_peds(bool p0)l
extern _native64(0xCF3A965906452031) int get_num_reserved_mission_vehicles(bool p0)l
extern _native64(0x12B6281B6C6706C0) int unk_0x12B6281B6C6706C0(bool p0)l
extern _native64(0xCB215C4B56A7FAE7) int unk_0xCB215C4B56A7FAE7(bool p0)l
extern _native64(0x0CD9AB83489430EA) int unk_0x0CD9AB83489430EA(bool p0)l
extern _native64(0xC7BE335216B5EC7C) any unk_0xC7BE335216B5EC7C()l
extern _native64(0x0C1F7D49C39D2289) any unk_0x0C1F7D49C39D2289()l
extern _native64(0x0AFCE529F69B21FF) any unk_0x0AFCE529F69B21FF()l
extern _native64(0xA72835064DD63E4C) any unk_0xA72835064DD63E4C()l
extern _native64(0x7A5487FE9FAA6B48) int get_network_time()l
extern _native64(0x89023FBBF9200E9F) int unk_0x89023FBBF9200E9F()l
extern _native64(0x46718ACEEDEAFC84) bool has_network_time_started()l
extern _native64(0x017008CCDAD48503) int get_time_offset(int timeA, int timeB)l
extern _native64(0xCB2CF5148012C8D0) bool is_time_less_than(int timeA, int timeB)l
extern _native64(0xDE350F8651E4346C) bool is_time_more_than(int timeA, int timeB)l
extern _native64(0xF5BC95857BD6D512) bool is_time_equal_to(int timeA, int timeB)l
extern _native64(0xA2C6FC031D46FFF0) int get_time_difference(int timeA, int timeB)l
extern _native64(0x9E23B1777A927DAD) const char* get_time_as_string(int time)l
extern _native64(0x9A73240B49945C76) int _get_posix_time()l
extern _native64(0xAC97AF97FA68E5D5) void _get_date_and_time_from_unix_epoch(int unixEpoch, any* timeStructure)l
extern _native64(0x423DE3854BB50894) void network_set_in_spectator_mode(bool toggle, Ped playerPed)l
extern _native64(0x419594E137637120) void unk_0x419594E137637120(bool p0, any p1, bool p2)l
extern _native64(0xFC18DB55AE19E046) void unk_0xFC18DB55AE19E046(bool p0)l
extern _native64(0x5C707A667DF8B9FA) void unk_0x5C707A667DF8B9FA(bool p0, any p1)l
extern _native64(0x048746E388762E11) bool network_is_in_spectator_mode()l
extern _native64(0x9CA5DE655269FEC4) void network_set_in_mp_cutscene(bool p0, bool p1)l
extern _native64(0x6CC27C9FA2040220) bool network_is_in_mp_cutscene()l
extern _native64(0x63F9EE203C3619F2) bool network_is_player_in_mp_cutscene(Player player)l
extern _native64(0xEC51713AB6EC36E8) void set_network_vehicle_respot_timer(int netId, any p1)l
extern _native64(0x6274C4712850841E) void unk_0x6274C4712850841E(Entity entity, bool p1)l
extern _native64(0x5FFE9B4144F9712F) void use_player_colour_instead_of_team_colour(bool toggle)l
extern _native64(0x21D04D7BC538C146) bool unk_0x21D04D7BC538C146(any p0)l
extern _native64(0x77758139EC9B66C7) void unk_0x77758139EC9B66C7(bool p0)l
extern _native64(0x7CD6BC4C2BBDD526) int network_create_synchronised_scene(vector3 vec, vector3 Rot, int p6, bool p7, bool p8, float p9,  int,  float)l
extern _native64(0x742A637471BCECD9) void network_add_ped_to_synchronised_scene(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, int p9)l
extern _native64(0xF2404D68CBC855FA) void network_add_entity_to_synchronised_scene(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag)l
extern _native64(0xCF8BD3B0BD6D42D7) void _network_force_local_use_of_synced_scene_camera(int netScene, const char* animDict, const char* animName)l
extern _native64(0x478DCBD2A98B705A) void network_attach_synchronised_scene_to_entity(int netScene, Entity entity, int bone)l
extern _native64(0x9A1B3FCDB36C8697) void network_start_synchronised_scene(int netScene)l
extern _native64(0xC254481A4574CB2F) void network_stop_synchronised_scene(int netScene)l
extern _native64(0x02C40BF885C567B6) int _network_unlink_networked_synchronised_scene(int netScene)l
extern _native64(0xC9B43A33D09CADA7) void unk_0xC9B43A33D09CADA7(any p0)l
extern _native64(0xFB1F9381E80FA13F) any unk_0xFB1F9381E80FA13F(int p0, any p1)l
extern _native64(0x5A6FFA2433E2F14C) bool unk_0x5A6FFA2433E2F14C(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int flags)l
extern _native64(0x4BA92A18502BCA61) bool unk_0x4BA92A18502BCA61(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, int flags)l
extern _native64(0x3C891A251567DFCE) any unk_0x3C891A251567DFCE(any* p0)l
extern _native64(0xFB8F2A6F3DF08CBE) void unk_0xFB8F2A6F3DF08CBE()l
extern _native64(0x371EA43692861CF1) void network_get_respawn_result(int randomInt, vector3* coordinates, float* heading)l
extern _native64(0x6C34F1208B8923FD) any unk_0x6C34F1208B8923FD(any p0)l
extern _native64(0x17E0198B3882C2CB) void unk_0x17E0198B3882C2CB()l
extern _native64(0xFB680D403909DC70) void unk_0xFB680D403909DC70(any p0, any p1)l
extern _native64(0xD0AFAFF5A51D72F7) void network_end_tutorial_session()l
extern _native64(0xADA24309FE08DACF) any network_is_in_tutorial_session()l
extern _native64(0xB37E4E6A2388CA7B) any unk_0xB37E4E6A2388CA7B()l
extern _native64(0x35F0B98A8387274D) any unk_0x35F0B98A8387274D()l
extern _native64(0x3B39236746714134) any unk_0x3B39236746714134(any p0)l
extern _native64(0x9DE986FC9A87C474) bool _network_is_player_equal_to_index(Player player, int index)l
extern _native64(0xBBDF066252829606) void unk_0xBBDF066252829606(any p0, bool p1)l
extern _native64(0x919B3C98ED8292F9) bool unk_0x919B3C98ED8292F9(any p0)l
extern _native64(0xE679E3E06E363892) void network_override_clock_time(int Hours, int Minutes, int Seconds)l
extern _native64(0xD972DF67326F966E) void unk_0xD972DF67326F966E()l
extern _native64(0xD7C95D322FF57522) any unk_0xD7C95D322FF57522()l
extern _native64(0x494C8FB299290269) any network_add_entity_area(float p0, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0x376C6375BA60293A) any _network_add_entity_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6)l
extern _native64(0x25B99872D588A101) any unk_0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5)l
extern _native64(0x93CF869BAA0C4874) bool network_remove_entity_area(any p0)l
extern _native64(0xE64A3CA08DFA37A9) bool unk_0xE64A3CA08DFA37A9(any p0)l
extern _native64(0x4DF7CFFF471A7FB1) bool unk_0x4DF7CFFF471A7FB1(any p0)l
extern _native64(0x4A2D4E8BF4265B0F) bool unk_0x4A2D4E8BF4265B0F(any p0)l
extern _native64(0x2B1813ABA29016C5) void _network_set_network_id_dynamic(int netID, bool toggle)l
extern _native64(0x924426BFFD82E915) bool _network_request_cloud_background_scripts()l
extern _native64(0x8132C0EB8B2B3293) bool _has_bg_script_been_downloaded()l
extern _native64(0x42FB3B532D526E6C) void network_request_cloud_tunables()l
extern _native64(0x0467C11ED88B7D28) bool _has_tunables_been_downloaded()l
extern _native64(0x10BD227A753B0D84) any unk_0x10BD227A753B0D84()l
extern _native64(0x85E5F8B9B898B20A) bool network_does_tunable_exist(const char* tunableContext, const char* tunableName)l
extern _native64(0x8BE1146DFD5D4468) bool network_access_tunable_int(const char* tunableContext, const char* tunableName, int* value)l
extern _native64(0xE5608CA7BC163A5F) bool network_access_tunable_float(const char* tunableContext, const char* tunableName, float* value)l
extern _native64(0xAA6A47A573ABB75A) bool network_access_tunable_bool(const char* tunableContext, const char* tunableName)l
extern _native64(0xE4E53E1419D81127) bool _network_does_tunable_exist_hash(Hash tunbaleContext, Hash tunableName)l
extern _native64(0x40FCE03E50E8DBE8) bool _network_access_tunable_int_hash(Hash tunableContext, Hash tunableName, int* value)l
extern _native64(0x972BC203BBC4C4D5) bool _network_access_tunable_float_hash(Hash tunableContext, Hash tunableName, float* value)l
extern _native64(0xEA16B69D93D71A45) bool _network_access_tunable_bool_hash(Hash tunableContext, Hash tunableName)l
extern _native64(0xC7420099936CE286) bool _network_access_tunable_bool_hash_fail_val(Hash tunableContext, Hash tunableName, bool defaultValue)l
extern _native64(0x187382F8A3E0A6C3) int _get_tunables_content_modifier_id(Hash contentHash)l
extern _native64(0x7DB53B37A2F211A0) any unk_0x7DB53B37A2F211A0()l
extern _native64(0x72433699B4E6DD64) void network_reset_body_tracker()l
extern _native64(0xD38C4A6D047C019D) any unk_0xD38C4A6D047C019D()l
extern _native64(0x2E0BF682CC778D49) bool unk_0x2E0BF682CC778D49(any p0)l
extern _native64(0x0EDE326D47CD0F3E) bool unk_0x0EDE326D47CD0F3E(Ped ped, Player player)l
extern _native64(0x301A42153C9AD707) any network_explode_vehicle(Vehicle vehicle, bool isAudible, bool isInvisible, bool p3)l
extern _native64(0xCD71A4ECAB22709E) void unk_0xCD71A4ECAB22709E(Entity entity)l
extern _native64(0xA7E30DE9272B6D49) void unk_0xA7E30DE9272B6D49(Ped ped, vector3 vec, float p4)l
extern _native64(0x407091CF6037118E) void unk_0x407091CF6037118E(int netID)l
extern _native64(0x1775961C2FBBCB5C) void network_set_property_id(any p0)l
extern _native64(0xC2B82527CA77053E) void network_clear_property_id()l
extern _native64(0x367EF5E2F439B4C6) void unk_0x367EF5E2F439B4C6(int p0)l
extern _native64(0x94538037EE44F5CF) void unk_0x94538037EE44F5CF(bool p0)l
extern _native64(0xBD0BE0BFC927EAC1) void unk_0xBD0BE0BFC927EAC1()l
extern _native64(0x237D5336A9A54108) bool unk_0x237D5336A9A54108(any p0)l
extern _native64(0x99B72C7ABDE5C910) bool unk_0x99B72C7ABDE5C910(Ped ped, Player player)l
extern _native64(0xF2EAC213D5EA0623) any unk_0xF2EAC213D5EA0623()l
extern _native64(0xEA14EEF5B7CD2C30) any unk_0xEA14EEF5B7CD2C30()l
extern _native64(0xB606E6CC59664972) void unk_0xB606E6CC59664972(any p0)l
extern _native64(0x1D4DC17C38FEAFF0) any unk_0x1D4DC17C38FEAFF0()l
extern _native64(0x662635855957C411) any unk_0x662635855957C411(any p0)l
extern _native64(0xB4271092CA7EDF48) any unk_0xB4271092CA7EDF48(any p0)l
extern _native64(0xCA94551B50B4932C) any unk_0xCA94551B50B4932C(any p0)l
extern _native64(0x2A7776C709904AB0) any unk_0x2A7776C709904AB0(any p0)l
extern _native64(0x6F44CBF56D79FAC0) any unk_0x6F44CBF56D79FAC0(any p0, any p1)l
extern _native64(0x58C21165F6545892) void unk_0x58C21165F6545892(any p0, any p1)l
extern _native64(0x2EAC52B4019E2782) any unk_0x2EAC52B4019E2782()l
extern _native64(0x9641A9FF718E9C5E) void set_store_enabled(bool toggle)l
extern _native64(0xA2F952104FC6DD4B) bool unk_0xA2F952104FC6DD4B(any p0)l
extern _native64(0x72D0706CD6CCDB58) void unk_0x72D0706CD6CCDB58()l
extern _native64(0x722F5D28B61C5EA8) any unk_0x722F5D28B61C5EA8(any p0)l
extern _native64(0x883D79C4071E18B3) any unk_0x883D79C4071E18B3()l
extern _native64(0x265635150FB0D82E) void unk_0x265635150FB0D82E()l
extern _native64(0x444C4525ECE0A4B9) void unk_0x444C4525ECE0A4B9()l
extern _native64(0x59328EB08C5CEB2B) any unk_0x59328EB08C5CEB2B()l
extern _native64(0xFAE628F1E9ADB239) void unk_0xFAE628F1E9ADB239(any p0, any p1, any p2)l
extern _native64(0xC64DED7EF0D2FE37) any unk_0xC64DED7EF0D2FE37(any* p0)l
extern _native64(0x4C61B39930D045DA) bool unk_0x4C61B39930D045DA(any p0)l
extern _native64(0x3A3D5568AF297CD5) bool unk_0x3A3D5568AF297CD5(any p0)l
extern _native64(0x4F18196C8D38768D) void _download_check()l
extern _native64(0xC7ABAC5DE675EE3B) any unk_0xC7ABAC5DE675EE3B()l
extern _native64(0x0B0CC10720653F3B) any network_enable_motion_drugged()l
extern _native64(0x8B0C2964BA471961) any unk_0x8B0C2964BA471961()l
extern _native64(0x88B588B41FF7868E) any unk_0x88B588B41FF7868E()l
extern _native64(0x67FC09BC554A75E5) any unk_0x67FC09BC554A75E5()l
extern _native64(0x966DD84FB6A46017) void unk_0x966DD84FB6A46017()l
extern _native64(0x152D90E4C1B4738A) bool unk_0x152D90E4C1B4738A(any* p0, any* p1)l
extern _native64(0x9FEDF86898F100E9) any unk_0x9FEDF86898F100E9()l
extern _native64(0x5E24341A7F92A74B) any unk_0x5E24341A7F92A74B()l
extern _native64(0x24E4E51FC16305F9) any unk_0x24E4E51FC16305F9()l
extern _native64(0xFBC5E768C7A77A6A) any unk_0xFBC5E768C7A77A6A()l
extern _native64(0xC55A0B40FFB1ED23) any unk_0xC55A0B40FFB1ED23()l
extern _native64(0x17440AA15D1D3739) void unk_0x17440AA15D1D3739()l
extern _native64(0x9BF438815F5D96EA) bool unk_0x9BF438815F5D96EA(any p0, any p1, any* p2, any p3, any p4, any p5)l
extern _native64(0x692D58DF40657E8C) bool unk_0x692D58DF40657E8C(any p0, any p1, any p2, any* p3, any p4, bool p5)l
extern _native64(0x158EC424F35EC469) bool unk_0x158EC424F35EC469(any* p0, bool p1, any* p2)l
extern _native64(0xC7397A83F7A2A462) bool unk_0xC7397A83F7A2A462(any* p0, any p1, bool p2, any* p3)l
extern _native64(0x6D4CB481FAC835E8) bool unk_0x6D4CB481FAC835E8(any p0, any p1, any* p2, any p3)l
extern _native64(0xD5A4B59980401588) bool unk_0xD5A4B59980401588(any p0, any p1, any* p2, any* p3)l
extern _native64(0x3195F8DD0D531052) bool unk_0x3195F8DD0D531052(any p0, any p1, any* p2, any* p3)l
extern _native64(0xF9E1CCAE8BA4C281) bool unk_0xF9E1CCAE8BA4C281(any p0, any p1, any* p2, any* p3)l
extern _native64(0x9F6E2821885CAEE2) bool unk_0x9F6E2821885CAEE2(any p0, any p1, any p2, any* p3, any* p4)l
extern _native64(0x678BB03C1A3BD51E) bool unk_0x678BB03C1A3BD51E(any p0, any p1, any p2, any* p3, any* p4)l
extern _native64(0x815E5E3073DA1D67) bool set_balance_add_machine(any* p0, any* p1)l
extern _native64(0xB8322EEB38BE7C26) bool set_balance_add_machines(any* p0, any p1, any* p2)l
extern _native64(0xA7862BC5ED1DFD7E) bool unk_0xA7862BC5ED1DFD7E(any p0, any p1, any* p2, any* p3)l
extern _native64(0x97A770BEEF227E2B) bool network_get_background_loading_recipients(any p0, any p1, any* p2, any* p3)l
extern _native64(0x5324A0E3E4CE3570) bool unk_0x5324A0E3E4CE3570(any p0, any p1, any* p2, any* p3)l
extern _native64(0xE9B99B6853181409) void unk_0xE9B99B6853181409()l
extern _native64(0xD53ACDBEF24A46E8) any unk_0xD53ACDBEF24A46E8()l
extern _native64(0x02ADA21EA2F6918F) any unk_0x02ADA21EA2F6918F()l
extern _native64(0x941E5306BCD7C2C7) any unk_0x941E5306BCD7C2C7()l
extern _native64(0xC87E740D9F3872CC) any unk_0xC87E740D9F3872CC()l
extern _native64(0xEDF7F927136C224B) any unk_0xEDF7F927136C224B()l
extern _native64(0xE0A6138401BCB837) any unk_0xE0A6138401BCB837()l
extern _native64(0x769951E2455E2EB5) any unk_0x769951E2455E2EB5()l
extern _native64(0x3A17A27D75C74887) any unk_0x3A17A27D75C74887()l
extern _native64(0xBA96394A0EECFA65) void unk_0xBA96394A0EECFA65()l
extern _native64(0xCD67AD041A394C9C) const char* _get_content_user_id(int p0)l
extern _native64(0x584770794D758C18) bool unk_0x584770794D758C18(any p0, any* p1)l
extern _native64(0x8C8D2739BA44AF0F) bool unk_0x8C8D2739BA44AF0F(any p0)l
extern _native64(0x703F12425ECA8BF5) any unk_0x703F12425ECA8BF5(any p0)l
extern _native64(0xAEAB987727C5A8A4) bool unk_0xAEAB987727C5A8A4(any p0)l
extern _native64(0xA7BAB11E7C9C6C5A) int _get_content_category(int p0)l
extern _native64(0x55AA95F481D694D2) const char* _get_content_id(any p0)l
extern _native64(0xC0173D6BFF4E0348) const char* _get_root_content_id(any p0)l
extern _native64(0xBF09786A7FCAB582) any unk_0xBF09786A7FCAB582(any p0)l
extern _native64(0x7CF0448787B23758) int _get_content_description_hash(any p0)l
extern _native64(0xBAF6BABF9E7CCC13) any unk_0xBAF6BABF9E7CCC13(any p0, any p1)l
extern _native64(0xCFD115B373C0DF63) void unk_0xCFD115B373C0DF63(any p0, any* p1)l
extern _native64(0x37025B27D9B658B1) any _get_content_file_version(any p0, any p1)l
extern _native64(0x1D610EB0FEA716D9) bool unk_0x1D610EB0FEA716D9(any p0)l
extern _native64(0x7FCC39C46C3C03BD) bool unk_0x7FCC39C46C3C03BD(any p0)l
extern _native64(0x32DD916F3F7C9672) any unk_0x32DD916F3F7C9672(any p0)l
extern _native64(0x3054F114121C21EA) bool unk_0x3054F114121C21EA(any p0)l
extern _native64(0xA9240A96C74CCA13) bool unk_0xA9240A96C74CCA13(any p0)l
extern _native64(0x1ACCFBA3D8DAB2EE) any unk_0x1ACCFBA3D8DAB2EE(any p0, any p1)l
extern _native64(0x759299C5BB31D2A9) any unk_0x759299C5BB31D2A9(any p0, any p1)l
extern _native64(0x87E5C46C187FE0AE) any unk_0x87E5C46C187FE0AE(any p0, any p1)l
extern _native64(0x4E548C0D7AE39FF9) any unk_0x4E548C0D7AE39FF9(any p0, any p1)l
extern _native64(0x70EA8DA57840F9BE) bool unk_0x70EA8DA57840F9BE(any p0)l
extern _native64(0x993CBE59D350D225) bool unk_0x993CBE59D350D225(any p0)l
extern _native64(0x171DF6A0C07FB3DC) any unk_0x171DF6A0C07FB3DC(any p0, any p1)l
extern _native64(0x7FD2990AF016795E) any unk_0x7FD2990AF016795E(any* p0, any* p1, any p2, any p3, any p4)l
extern _native64(0x5E0165278F6339EE) any unk_0x5E0165278F6339EE(any p0)l
extern _native64(0x2D5DC831176D0114) bool unk_0x2D5DC831176D0114(any p0)l
extern _native64(0xEBFA8D50ADDC54C4) bool unk_0xEBFA8D50ADDC54C4(any p0)l
extern _native64(0x162C23CA83ED0A62) bool unk_0x162C23CA83ED0A62(any p0)l
extern _native64(0x40F7E66472DF3E5C) any unk_0x40F7E66472DF3E5C(any p0, any p1)l
extern _native64(0x5A34CD9C3C5BEC44) bool unk_0x5A34CD9C3C5BEC44(any p0)l
extern _native64(0x68103E2247887242) void unk_0x68103E2247887242()l
extern _native64(0x1DE0F5F50D723CAA) bool unk_0x1DE0F5F50D723CAA(any* p0, any* p1, any* p2)l
extern _native64(0x274A1519DFC1094F) bool unk_0x274A1519DFC1094F(any* p0, bool p1, any* p2)l
extern _native64(0xD05D1A6C74DA3498) bool unk_0xD05D1A6C74DA3498(any* p0, bool p1, any* p2)l
extern _native64(0x45E816772E93A9DB) any unk_0x45E816772E93A9DB()l
extern _native64(0x299EF3C576773506) any unk_0x299EF3C576773506()l
extern _native64(0x793FF272D5B365F4) any unk_0x793FF272D5B365F4()l
extern _native64(0x5A0A3D1A186A5508) any unk_0x5A0A3D1A186A5508()l
extern _native64(0xA1E5E0204A6FCC70) void unk_0xA1E5E0204A6FCC70()l
extern _native64(0xB746D20B17F2A229) bool unk_0xB746D20B17F2A229(any* p0, any* p1)l
extern _native64(0x63B406D7884BFA95) any unk_0x63B406D7884BFA95()l
extern _native64(0x4D02279C83BE69FE) any unk_0x4D02279C83BE69FE()l
extern _native64(0x597F8DBA9B206FC7) any unk_0x597F8DBA9B206FC7()l
extern _native64(0x5CAE833B0EE0C500) bool unk_0x5CAE833B0EE0C500(any p0)l
extern _native64(0x61A885D3F7CFEE9A) void unk_0x61A885D3F7CFEE9A()l
extern _native64(0xF98DDE0A8ED09323) void unk_0xF98DDE0A8ED09323(bool p0)l
extern _native64(0xFD75DABC0957BF33) void unk_0xFD75DABC0957BF33(bool p0)l
extern _native64(0xF53E48461B71EECB) bool unk_0xF53E48461B71EECB(any p0)l
extern _native64(0x098AB65B9ED9A9EC) bool unk_0x098AB65B9ED9A9EC(any* p0, any p1, any p2)l
extern _native64(0xDC48473142545431) any unk_0xDC48473142545431()l
extern _native64(0x0AE1F1653B554AB9) bool unk_0x0AE1F1653B554AB9(any p0)l
extern _native64(0x62B9FEC9A11F10EF) any unk_0x62B9FEC9A11F10EF()l
extern _native64(0xA75E2B6733DA5142) any unk_0xA75E2B6733DA5142()l
extern _native64(0x43865688AE10F0D7) any unk_0x43865688AE10F0D7()l
extern _native64(0x16160DA74A8E74A2) int texture_download_request(int* PlayerHandle, const char* FilePath, const char* Name, bool p3)l
extern _native64(0x0B203B4AFDE53A4F) any unk_0x0B203B4AFDE53A4F(any* p0, any* p1, bool p2)l
extern _native64(0x308F96458B7087CC) any unk_0x308F96458B7087CC(any* p0, any p1, any p2, any p3, any* p4, bool p5)l
extern _native64(0x487EB90B98E9FB19) void texture_download_release(int p0)l
extern _native64(0x5776ED562C134687) bool texture_download_has_failed(int p0)l
extern _native64(0x3448505B6E35262D) const char* texture_download_get_name(int p0)l
extern _native64(0x8BD6C6DEA20E82C6) any unk_0x8BD6C6DEA20E82C6(any p0)l
extern _native64(0x60EDD13EB3AC1FF3) any unk_0x60EDD13EB3AC1FF3()l
extern _native64(0xEFFB25453D8600F9) bool network_is_cable_connected()l
extern _native64(0x66B59CFFD78467AF) any unk_0x66B59CFFD78467AF()l
extern _native64(0x606E4D3E3CCCF3EB) any unk_0x606E4D3E3CCCF3EB()l
extern _native64(0x8020A73847E0CA7D) bool _is_rockstar_banned()l
extern _native64(0xA0AD7E2AF5349F61) bool _is_socialclub_banned()l
extern _native64(0x5F91D5D0B36AA310) bool _can_play_online()l
extern _native64(0x422D396F80A96547) any unk_0x422D396F80A96547()l
extern _native64(0xA699957E60D80214) bool unk_0xA699957E60D80214(any p0)l
extern _native64(0xC22912B1D85F26B1) bool unk_0xC22912B1D85F26B1(any p0, any* p1, any* p2)l
extern _native64(0x593570C289A77688) any unk_0x593570C289A77688()l
extern _native64(0x91B87C55093DE351) any unk_0x91B87C55093DE351()l
extern _native64(0x36391F397731595D) any unk_0x36391F397731595D(any p0)l
extern _native64(0xDEB2B99A1AF1A2A6) any unk_0xDEB2B99A1AF1A2A6(any p0)l
extern _native64(0x9465E683B12D3F6B) void unk_0x9465E683B12D3F6B()l
extern _native64(0xB7C7F6AD6424304B) void unk_0xB7C7F6AD6424304B()l
extern _native64(0xC505036A35AFD01B) void unk_0xC505036A35AFD01B(bool p0)l
extern _native64(0x267C78C60E806B9A) void unk_0x267C78C60E806B9A(any p0, bool p1)l
extern _native64(0x6BFF5F84102DF80A) void unk_0x6BFF5F84102DF80A(any p0)l
extern _native64(0x5C497525F803486B) void unk_0x5C497525F803486B()l
extern _native64(0x6FB7BB3607D27FA2) any unk_0x6FB7BB3607D27FA2()l
extern _native64(0x45A83257ED02D9BC) void unk_0x45A83257ED02D9BC()l
extern _native64(0xDFFA5BE8381C3314) int get_network_targeting_mode()l
extern _native64(0x125E6D638B8605D4) vector3 _network_get_coords_of_player(Player player)l
#pragma endregion //}
#pragma region NETWORKCASH //{
extern _native64(0x3DA5ECD1A56CBA6D) void network_initialize_cash(int p0, int p1)l
extern _native64(0x05A50AF38947EB8D) void network_delete_character(int characterIndex, bool p1, bool p2)l
extern _native64(0xA921DED15FDF28F5) void network_clear_character_wallet(any p0)l
extern _native64(0xFB18DF9CB95E0105) void network_give_player_jobshare_cash(int amount, int* networkHandle)l
extern _native64(0x56A3B51944C50598) void network_receive_player_jobshare_cash(int value, int* networkHandle)l
extern _native64(0x1C2473301B1C66BA) any unk_0x1C2473301B1C66BA()l
extern _native64(0xF9C812CD7C46E817) void network_refund_cash(int index, const char* context, const char* reason, bool unk)l
extern _native64(0x81404F3DC124FE5B) bool network_money_can_bet(any p0, bool p1, bool p2)l
extern _native64(0x3A54E33660DED67F) bool network_can_bet(any p0)l
extern _native64(0xED1517D3AF17C698) any network_earn_from_pickup(int amount)l
extern _native64(0xA03D4ACE0A3284CE) void _network_earn_from_gang_pickup(int amount)l
extern _native64(0xF514621E8EA463D0) void _network_earn_from_armour_truck(int amount)l
extern _native64(0xB1CC1B9EC3007A2A) void network_earn_from_crate_drop(int amount)l
extern _native64(0x827A5BA1A44ACA6D) void network_earn_from_betting(int amount, const char* p1)l
extern _native64(0xB2CC4836834E8A98) void network_earn_from_job(int amount, const char* p1)l
extern _native64(0x61326EE6DF15B0CA) void network_earn_from_mission_h(int amount, const char* heistHash)l
extern _native64(0x2B171E6B2F64D8DF) void network_earn_from_challenge_win(any p0, any* p1, bool p2)l
extern _native64(0x131BB5DA15453ACF) void network_earn_from_bounty(int amount, int* networkHandle, any* p2, any p3)l
extern _native64(0xF92A014A634442D6) void network_earn_from_import_export(any p0, any p1)l
extern _native64(0x45B8154E077D9E4D) void network_earn_from_holdups(int amount)l
extern _native64(0x849648349D77F5C5) void network_earn_from_property(int amount, Hash propertyName)l
extern _native64(0x515B4A22E4D3C6D7) void network_earn_from_ai_target_kill(any p0, any p1)l
extern _native64(0x4337511FA8221D36) void network_earn_from_not_badsport(int amount)l
extern _native64(0x02CE1D6AC0FC73EA) void network_earn_from_rockstar(int amount)l
extern _native64(0xB539BD8A4C1EECF8) void network_earn_from_vehicle(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7)l
extern _native64(0x3F4D00167E41E0AD) void network_earn_from_personal_vehicle(any p0, any p1, any p2, any p3, any p4, any p5, any p6, any p7, any p8)l
extern _native64(0x6EA318C91C1A8786) void _network_earn_from_daily_objective(int p0, const char* p1, int p2)l
extern _native64(0xFB6DB092FBAE29E6) void _network_earn_from_ambient_job(int p0, const char* p1, any* p2)l
extern _native64(0x6816FB4416760775) void _network_earn_from_job_bonus(any p0, any* p1, any* p2)l
extern _native64(0xAB3CAA6B422164DA) bool network_can_spend_money(any p0, bool p1, bool p2, bool p3, any p4)l
extern _native64(0x7303E27CC6532080) bool unk_0x7303E27CC6532080(any p0, bool p1, bool p2, bool p3, any* p4, any p5)l
extern _native64(0xF0077C797F66A355) void network_buy_item(Ped player, Hash item, any p2, any p3, bool p4, const char* item_name, any p6, any p7, any p8, bool p9)l
extern _native64(0x17C3A7D31EAE39F9) void network_spent_taxi(int amount, bool p1, bool p2)l
extern _native64(0x5FD5ED82CBBE9989) void network_pay_employee_wage(any p0, bool p1, bool p2)l
extern _native64(0xAFE08B35EC0C9EAE) void network_pay_utility_bill(any p0, bool p1, bool p2)l
extern _native64(0x9346E14F2AF74D46) void network_pay_match_entry_fee(int value, int* p1, bool p2, bool p3)l
extern _native64(0x1C436FD11FFA692F) void network_spent_betting(any p0, any p1, any* p2, bool p3, bool p4)l
extern _native64(0xEE99784E4467689C) void network_spent_in_stripclub(any p0, bool p1, any p2, bool p3)l
extern _native64(0xD9B067E55253E3DD) void network_buy_healthcare(int cost, bool p1, bool p2)l
extern _native64(0x763B4BD305338F19) void network_buy_airstrike(int cost, bool p1, bool p2)l
extern _native64(0x81AA4610E3FD3A69) void network_buy_heli_strike(int cost, bool p1, bool p2)l
extern _native64(0xB162DC95C0A3317B) void network_spent_ammo_drop(any p0, bool p1, bool p2)l
extern _native64(0x7B718E197453F2D9) void network_buy_bounty(int amount, Player victim, bool p2, bool p3)l
extern _native64(0x650A08A280870AF6) void network_buy_property(float propertyCost, Hash propertyName, bool p2, bool p3)l
extern _native64(0x7BF1D73DB2ECA492) void network_spent_heli_pickup(any p0, bool p1, bool p2)l
extern _native64(0x524EE43A37232C00) void network_spent_boat_pickup(any p0, bool p1, bool p2)l
extern _native64(0xA6DD8458CE24012C) void network_spent_bull_shark(any p0, bool p1, bool p2)l
extern _native64(0x289016EC778D60E0) void network_spent_cash_drop(any p0, bool p1, bool p2)l
extern _native64(0xE404BFB981665BF0) void network_spent_hire_mugger(any p0, bool p1, bool p2)l
extern _native64(0x995A65F15F581359) void network_spent_robbed_by_mugger(int amount, bool p1, bool p2)l
extern _native64(0xE7B80E2BF9D80BD6) void network_spent_hire_mercenary(any p0, bool p1, bool p2)l
extern _native64(0xE1B13771A843C4F6) void network_spent_buy_wantedlevel(any p0, any* p1, bool p2, bool p3)l
extern _native64(0xA628A745E2275C5D) void network_spent_buy_offtheradar(any p0, bool p1, bool p2)l
extern _native64(0x6E176F1B18BC0637) void network_spent_buy_reveal_players(any p0, bool p1, bool p2)l
extern _native64(0xEC03C719DB2F4306) void network_spent_carwash(any p0, any p1, any p2, bool p3, bool p4)l
extern _native64(0x6B38ECB05A63A685) void network_spent_cinema(any p0, any p1, bool p2, bool p3)l
extern _native64(0x7FE61782AD94CC09) void network_spent_telescope(any p0, bool p1, bool p2)l
extern _native64(0xD9B86B9872039763) void network_spent_holdups(any p0, bool p1, bool p2)l
extern _native64(0x6D3A430D1A809179) void network_spent_buy_passive_mode(any p0, bool p1, bool p2)l
extern _native64(0xB21B89501CFAC79E) void network_spent_prostitutes(any p0, bool p1, bool p2)l
extern _native64(0x812F5488B1B2A299) void network_spent_arrest_bail(any p0, bool p1, bool p2)l
extern _native64(0x9FF28D88C766E3E8) void network_spent_pay_vehicle_insurance_premium(int amount, Hash vehicleModel, int* networkHandle, bool notBankrupt, bool hasTheMoney)l
extern _native64(0xACDE7185B374177C) void network_spent_call_player(any p0, any* p1, bool p2, bool p3)l
extern _native64(0x29B260B84947DFCC) void network_spent_bounty(any p0, bool p1, bool p2)l
extern _native64(0x6A445B64ED7ABEB5) void network_spent_from_rockstar(int bank, bool p1, bool p2)l
extern _native64(0x20194D48EAEC9A41) const char* process_cash_gift(int* p0, int* p1, const char* p2)l
extern _native64(0x7C99101F7FCE2EE5) void network_spent_player_healthcare(any p0, any p1, bool p2, bool p3)l
extern _native64(0xD5BB406F4E04019F) void network_spent_no_cops(any p0, bool p1, bool p2)l
extern _native64(0x8204DA7934DF3155) void network_spent_request_job(any p0, bool p1, bool p2)l
extern _native64(0x9D26502BB97BFE62) void _network_spent_request_heist(any p0, bool p1, bool p2)l
extern _native64(0x8A7B3952DD64D2B5) void network_buy_fairground_ride(int amountSpent, any p1, bool p2, bool p3)l
extern _native64(0x7C4FCCD2E4DEB394) bool unk_0x7C4FCCD2E4DEB394()l
extern _native64(0x76EF28DA05EA395A) int network_get_vc_bank_balance()l
extern _native64(0xA40F9C2623F6A8B5) int network_get_vc_wallet_balance(int character)l
extern _native64(0x5CBAD97E059E1B94) int network_get_vc_balance()l
extern _native64(0xA6FA3979BED01B81) const char* _network_get_bank_balance_string()l
extern _native64(0xDC18531D7019A535) bool unk_0xDC18531D7019A535(any p0, any p1)l
extern _native64(0x5D17BE59D2123284) bool network_can_receive_player_cash(any p0, any p1, any p2, any p3)l
extern _native64(0xF70EFA14FE091429) any unk_0xF70EFA14FE091429(any p0)l
extern _native64(0xE260E0BB9CD995AC) bool unk_0xE260E0BB9CD995AC(any p0)l
extern _native64(0xE154B48B68EF72BC) any unk_0xE154B48B68EF72BC(any p0)l
extern _native64(0x6FCF8DDEA146C45B) any unk_0x6FCF8DDEA146C45B(any p0)l
extern _native64(0x998E18CEB44487FC) void network_spent_purchase_clubhouse(int p0, void* p1, bool p2, bool p3)l
extern _native64(0xFA07759E6FDDD7CF) void network_spent_vehicle_modshop(int p0, void* p1, bool p2, bool p3)l
#pragma endregion //}
#pragma region DLC1 //{
extern _native64(0x278F76C3B0A8F109) int _get_num_decorations(int character)l
extern _native64(0xFF56381874F82086) bool unk_0xFF56381874F82086(int p0, int p1, int* outComponent)l
extern _native64(0x1E8C308FD312C036) void init_shop_ped_component(int* outComponent)l
extern _native64(0xEB0A2B758F7B850F) void init_shop_ped_prop(int* outProp)l
extern _native64(0x50F457823CE6EB5F) int unk_0x50F457823CE6EB5F(int p0, int p1, int p2, int p3)l
extern _native64(0x9BDF59818B1E38C1) int _get_num_props_from_outfit(int character, int p1, int p2, bool p3, int p4, int componentId)l
extern _native64(0x249E310B2D920699) void get_shop_ped_query_component(int componentId, int* outComponent)l
extern _native64(0x74C0E2A57EC66760) void get_shop_ped_component(Hash p0, any* p1)l
extern _native64(0xDE44A00999B2837D) void get_shop_ped_query_prop(any p0, any* p1)l
extern _native64(0x5D5CAFF661DDF6FC) void unk_0x5D5CAFF661DDF6FC(any p0, any* p1)l
extern _native64(0x0368B3A838070348) Hash get_hash_name_for_component(Entity entity, int componentId, int drawableVariant, int textureVariant)l
extern _native64(0x5D6160275CAEC8DD) Hash get_hash_name_for_prop(Entity entity, int componentId, int propIndex, int propTextureIndex)l
extern _native64(0xC17AD0E5752BECDA) int unk_0xC17AD0E5752BECDA(Hash componentHash)l
extern _native64(0x6E11F282F11863B6) void get_variant_component(Hash componentHash, int componentId, any* p2, any* p3, any* p4)l
extern _native64(0xC6B9DB42C04DD8C3) int _get_num_forced_components(Hash componentHash)l
extern _native64(0x017568A8182D98A6) any unk_0x017568A8182D98A6(any p0)l
extern _native64(0x6C93ED8C2F74859B) void get_forced_component(Hash componentHash, int componentId, any* p2, any* p3, any* p4)l
extern _native64(0xE1CA84EBF72E691D) void unk_0xE1CA84EBF72E691D(any p0, any p1, any* p2, any* p3, any* p4)l
extern _native64(0x341DE7ED1D2A1BFD) bool unk_0x341DE7ED1D2A1BFD(Hash componentHash, Hash drawableSlotHash, bool p2)l
extern _native64(0xF3FBE2D50A6A8C28) int unk_0xF3FBE2D50A6A8C28(int character, bool p1)l
extern _native64(0x6D793F03A631FE56) void get_shop_ped_query_outfit(any p0, any* outfit)l
extern _native64(0xB7952076E444979D) void get_shop_ped_outfit(any p0, any* p1)l
extern _native64(0x073CA26B079F956E) any get_shop_ped_outfit_locate(any p0)l
extern _native64(0xA9F9C2E0FDE11CBB) bool unk_0xA9F9C2E0FDE11CBB(any p0, any p1, any* p2)l
extern _native64(0x19F2A026EDF0013F) bool _get_prop_from_outfit(any outfit, int slot, any* item)l
extern _native64(0xA7A866D21CD2329B) int get_num_dlc_vehicles()l
extern _native64(0xECC01B7C5763333C) Hash get_dlc_vehicle_model(int dlcVehicleIndex)l
extern _native64(0x33468EDC08E371F6) bool get_dlc_vehicle_data(int dlcVehicleIndex, int* outData)l
extern _native64(0x5549EE11FA22FCF2) int get_dlc_vehicle_flags(int dlcVehicleIndex)l
extern _native64(0xEE47635F352DA367) int get_num_dlc_weapons()l
extern _native64(0x79923CD21BECE14E) bool get_dlc_weapon_data(int dlcWeaponIndex, int* outData)l
extern _native64(0x405425358A7D61FE) int get_num_dlc_weapon_components(int dlcWeaponIndex)l
extern _native64(0x6CF598A2957C2BF8) bool get_dlc_weapon_component_data(int dlcWeaponIndex, int dlcWeapCompIndex, int* ComponentDataPtr)l
extern _native64(0xD4D7B033C3AA243C) bool _is_dlc_data_empty(int dlcData)l
extern _native64(0x0564B9FF9631B82C) bool is_dlc_vehicle_mod(int modData)l
extern _native64(0xC098810437312FFF) int unk_0xC098810437312FFF(int modData)l
#pragma endregion //}
#pragma region DLC2 //{
extern _native64(0x812595A0644CE1DE) bool is_dlc_present(Hash dlcHash)l
extern _native64(0xF2E07819EF1A5289) bool unk_0xF2E07819EF1A5289()l
extern _native64(0x9489659372A81585) any unk_0x9489659372A81585()l
extern _native64(0xA213B11DFF526300) any unk_0xA213B11DFF526300()l
extern _native64(0x8D30F648014A92B5) any unk_0x8D30F648014A92B5()l
extern _native64(0x10D0A8F259E93EC9) bool get_is_loading_screen_active()l
extern _native64(0x46E2B844905BC5F0) bool _nullify(any* variable, any unused)l
extern _native64(0xD7C10C4A637992C9) void _load_sp_dlc_maps()l
extern _native64(0x0888C3502DBBEEF5) void _load_mp_dlc_maps()l
#pragma endregion //}
#pragma region SYSTEM //{
extern _native64(0x4EDE34FBADD967A6) void wait(int ms)l
extern _native64(0xE81651AD79516E48) int start_new_script(const char* scriptName, int stackSize)l
extern _native64(0xB8BA7F44DF1575E1) int start_new_script_with_args(const char* scriptName, any* args, int argCount, int stackSize)l
extern _native64(0xEB1C67C3A5333A92) int start_new_script_with_name_hash(Hash scriptHash, int stackSize)l
extern _native64(0xC4BB298BD441BE78) int start_new_script_with_name_hash_and_args(Hash scriptHash, any* args, int argCount, int stackSize)l
extern _native64(0x83666F9FB8FEBD4B) int timera()l
extern _native64(0xC9D9444186B5A374) int timerb()l
extern _native64(0xC1B1E9A034A63A62) void settimera(int value)l
extern _native64(0x5AE11BC36633DE4E) void settimerb(int value)l
extern _native64(0x0000000050597EE2) float timestep()l
extern _native64(0x0BADBFA3B172435F) float sin(float value)l
extern _native64(0xD0FFB162F40A139C) float cos(float value)l
extern _native64(0x71D93B57D07F9804) float sqrt(float value)l
extern _native64(0xE3621CC40F31FE2E) float pow(float base, float exponent)l
extern _native64(0x652D2EEEF1D3E62C) float vmag(vector3 vec)l
extern _native64(0xA8CEACB4F35AE058) float vmag2(vector3 vec)l
extern _native64(0x2A488C176D52CCA5) float vdist(vector3 vec_1, vector3 vec_2)l
extern _native64(0xB7A628320EFF8E47) float vdist2(vector3 vec_1, vector3 vec_2)l
extern _native64(0xEDD95A39E5544DE8) int shift_left(int value, int bitShift)l
extern _native64(0x97EF1E5BCE9DC075) int shift_right(int value, int bitShift)l
extern _native64(0xF34EE736CF047844) int floor(float value)l
extern _native64(0x11E019C8F43ACC8A) int ceil(float value)l
extern _native64(0xF2DB717A73826179) int round(float value)l
extern _native64(0xBBDA792448DB5A89) float to_float(int value)l
extern _native64(0x42B65DEEF2EDF2A1) void unk_0x42B65DEEF2EDF2A1(int p0)l
#pragma endregion //}
#pragma region DECORATOR //{
extern _native64(0x95AED7B8E39ECAA4) bool decor_set_time(Entity entity, const char* propertyName, int value)l
extern _native64(0x6B1E8E2ED1335B71) bool decor_set_bool(Entity entity, const char* propertyName, bool value)l
extern _native64(0x211AB1DD8D0F363A) bool decor_set_float(Entity entity, const char* propertyName, float value)l
extern _native64(0x0CE3AA5E1CA19E10) bool decor_set_int(Entity entity, const char* propertyName, int value)l
extern _native64(0xDACE671663F2F5DB) bool decor_get_bool(Entity entity, const char* propertyName)l
extern _native64(0x6524A2F114706F43) float decor_get_float(Entity entity, const char* propertyName)l
extern _native64(0xA06C969B02A97298) int decor_get_int(Entity entity, const char* propertyName)l
extern _native64(0x05661B80A8C9165F) bool decor_exist_on(Entity entity, const char* propertyName)l
extern _native64(0x00EE9F297C738720) bool decor_remove(Entity entity, const char* propertyName)l
extern _native64(0x9FD90732F56403CE) void decor_register(const char* propertyName, int type)l
extern _native64(0x4F14F9F870D6FBC8) bool decor_is_registered_as_type(const char* propertyName, int type)l
extern _native64(0xA9D14EEA259F9248) void decor_register_lock()l
extern _native64(0x241FCA5B1AA14F75) int unk_0x241FCA5B1AA14F75()l
#pragma endregion //}
#pragma region SOCIALCLUB //{
extern _native64(0x03A93FF1A2CA0864) int _get_total_sc_inbox_ids()l
extern _native64(0xBB8EA16ECBC976C4) Hash _sc_inbox_message_init(int p0)l
extern _native64(0x93028F1DB42BFD08) bool _is_sc_inbox_valid(int p0)l
extern _native64(0x2C015348CF19CA1D) bool _sc_inbox_message_pop(int p0)l
extern _native64(0xA00EFE4082C4056E) bool sc_inbox_message_get_data_int(int p0, const char* context, int* out)l
extern _native64(0xFFE5C16F402D851D) bool _sc_inbox_message_get_data_bool(int p0, const char* p1)l
extern _native64(0x7572EF42FC6A9B6D) bool sc_inbox_message_get_data_string(int p0, const char* context, const char* out)l
extern _native64(0x9A2C8064B6C1E41A) bool _sc_inbox_message_push(int p0)l
extern _native64(0xF3E31D16CBDCB304) const char* _sc_inbox_message_get_string(int p0)l
extern _native64(0xDA024BDBD600F44A) void unk_0xDA024BDBD600F44A(int* p0)l
extern _native64(0xA68D3D229F4F3B06) void unk_0xA68D3D229F4F3B06(const char* p0)l
extern _native64(0x69D82604A1A5A254) bool sc_inbox_message_get_ugcdata(any p0, any* p1)l
extern _native64(0x6AFD2CD753FEEF83) bool unk_0x6AFD2CD753FEEF83(const char* p0)l
extern _native64(0x87E0052F08BD64E6) bool unk_0x87E0052F08BD64E6(any p0, int* p1)l
extern _native64(0x040ADDCBAFA1018A) void _sc_inbox_get_emails(int offset, int limit)l
extern _native64(0x16DA8172459434AA) any unk_0x16DA8172459434AA()l
extern _native64(0x4737980E8A283806) bool unk_0x4737980E8A283806(int p0, any* p1)l
extern _native64(0x44ACA259D67651DB) void unk_0x44ACA259D67651DB(any* p0, any p1)l
extern _native64(0x2330C12A7A605D16) void sc_email_message_push_gamer_to_recip_list(Player* player)l
extern _native64(0x55DF6DB45179236E) void sc_email_message_clear_recip_list()l
extern _native64(0x116FB94DC4B79F17) void unk_0x116FB94DC4B79F17(const char* p0)l
extern _native64(0xBFA0A56A817C6C7D) void unk_0xBFA0A56A817C6C7D(bool p0)l
extern _native64(0xBC1CC91205EC8D6E) any unk_0xBC1CC91205EC8D6E()l
extern _native64(0xDF649C4E9AFDD788) any unk_0xDF649C4E9AFDD788()l
extern _native64(0x1F1E9682483697C7) bool unk_0x1F1E9682483697C7(any p0, any p1)l
extern _native64(0x287F1F75D2803595) bool unk_0x287F1F75D2803595(any p0, any* p1)l
extern _native64(0x487912FD248EFDDF) bool unk_0x487912FD248EFDDF(any p0, float p1)l
extern _native64(0x8416FE4E4629D7D7) bool unk_0x8416FE4E4629D7D7(const char* p0)l
extern _native64(0x75632C5ECD7ED843) bool _sc_start_check_string_task(const char* string, int* taskHandle)l
extern _native64(0x1753344C770358AE) bool _sc_has_check_string_task_completed(int taskHandle)l
extern _native64(0x82E4A58BABC15AE7) int _sc_get_check_string_status(int taskHandle)l
extern _native64(0x85535ACF97FC0969) any unk_0x85535ACF97FC0969(any p0)l
extern _native64(0x930DE22F07B1CCE3) int unk_0x930DE22F07B1CCE3(any p0)l
extern _native64(0xF6BAAAF762E1BF40) bool unk_0xF6BAAAF762E1BF40(const char* p0, int* p1)l
extern _native64(0xF22CA0FD74B80E7A) bool unk_0xF22CA0FD74B80E7A(any p0)l
extern _native64(0x9237E334F6E43156) any unk_0x9237E334F6E43156(any p0)l
extern _native64(0x700569DBA175A77C) any unk_0x700569DBA175A77C(any p0)l
extern _native64(0x1D4446A62D35B0D0) any unk_0x1D4446A62D35B0D0(any p0, any p1)l
extern _native64(0x2E89990DDFF670C3) any unk_0x2E89990DDFF670C3(any p0, any p1)l
extern _native64(0xD0EE05FE193646EA) bool unk_0xD0EE05FE193646EA(any* p0, any* p1, any* p2)l
extern _native64(0x1989C6E6F67E76A8) bool unk_0x1989C6E6F67E76A8(any* p0, any* p1, any* p2)l
extern _native64(0x07C61676E5BB52CD) any unk_0x07C61676E5BB52CD(any p0)l
extern _native64(0x8147FFF6A718E1AD) any unk_0x8147FFF6A718E1AD(any p0)l
extern _native64(0x0F73393BAC7E6730) bool unk_0x0F73393BAC7E6730(any* p0, int* p1)l
extern _native64(0xD302E99EDF0449CF) any unk_0xD302E99EDF0449CF(any p0)l
extern _native64(0x5C4EBFFA98BDB41C) any unk_0x5C4EBFFA98BDB41C(any p0)l
extern _native64(0xFF8F3A92B75ED67A) any unk_0xFF8F3A92B75ED67A()l
extern _native64(0x4A7D6E727F941747) any unk_0x4A7D6E727F941747(any* p0)l
extern _native64(0x8CC469AB4D349B7C) bool unk_0x8CC469AB4D349B7C(int p0, const char* p1, any* p2)l
extern _native64(0x699E4A5C8C893A18) bool unk_0x699E4A5C8C893A18(int p0, const char* p1, any* p2)l
extern _native64(0x19853B5B17D77BCA) bool unk_0x19853B5B17D77BCA(any p0, any* p1)l
extern _native64(0x6BFB12CE158E3DD4) bool unk_0x6BFB12CE158E3DD4(any p0)l
extern _native64(0xFE4C1D0D3B9CC17E) bool unk_0xFE4C1D0D3B9CC17E(any p0, any p1)l
extern _native64(0xD8122C407663B995) any unk_0xD8122C407663B995()l
extern _native64(0x3001BEF2FECA3680) bool unk_0x3001BEF2FECA3680()l
extern _native64(0x92DA6E70EF249BD1) bool unk_0x92DA6E70EF249BD1(const char* p0, int* p1)l
extern _native64(0x675721C9F644D161) void unk_0x675721C9F644D161()l
extern _native64(0x198D161F458ECC7F) const char* _sc_get_nickname()l
extern _native64(0x225798743970412B) bool unk_0x225798743970412B(int* p0)l
extern _native64(0x418DC16FAE452C1C) bool unk_0x418DC16FAE452C1C(int p0)l
#pragma endregion //}
#pragma region UNK //{
extern _native64(0xF2CA003F167E21D2) int unk_0xF2CA003F167E21D2()l
extern _native64(0xEF7D17BC6C85264C) bool unk_0xEF7D17BC6C85264C()l
extern _native64(0xB0C56BD3D808D863) void unk_0xB0C56BD3D808D863(bool p0)l
extern _native64(0x8AA464D4E0F6ACCD) any unk_0x8AA464D4E0F6ACCD()l
extern _native64(0xFC309E94546FCDB5) void unk_0xFC309E94546FCDB5(bool p0)l
extern _native64(0xC6DC823253FBB366) bool _is_ui_loading_multiplayer()l
extern _native64(0xC7E7181C09F33B69) void unk_0xC7E7181C09F33B69(bool p0)l
extern _native64(0xFA1E0E893D915215) void unk_0xFA1E0E893D915215(bool p0)l
extern _native64(0x2BDD44CC428A7EAE) int _get_current_language_id()l
extern _native64(0xA8AE43AEC1A61314) int _get_user_language_id()l
#pragma endregion //}
#pragma region UNK1 //{
extern _native64(0x48621C9FCA3EBD28) void unk_0x48621C9FCA3EBD28(bool p0)l
extern _native64(0x81CBAE94390F9F89) void unk_0x81CBAE94390F9F89()l
extern _native64(0x13B350B8AD0EEE10) void unk_0x13B350B8AD0EEE10()l
extern _native64(0x293220DA1B46CEBC) void unk_0x293220DA1B46CEBC(float p0, float p1, bool p2)l
extern _native64(0x208784099002BC30) void unk_0x208784099002BC30(const char* missionNameLabel, any p1)l
extern _native64(0xEB2D525B57F42B40) void unk_0xEB2D525B57F42B40()l
extern _native64(0xF854439EFBB3B583) void unk_0xF854439EFBB3B583()l
extern _native64(0xAF66DCEE6609B148) void unk_0xAF66DCEE6609B148()l
extern _native64(0x66972397E0757E7A) void unk_0x66972397E0757E7A(any p0, any p1, any p2)l
extern _native64(0xC3AC2FFF9612AC81) void _start_recording(int mode)l
extern _native64(0x071A5197D6AFC8B3) void _stop_recording_and_save_clip()l
extern _native64(0x88BB3507ED41A240) void _stop_recording_and_discard_clip()l
extern _native64(0x644546EC5287471B) bool unk_0x644546EC5287471B()l
extern _native64(0x1897CA71995A90B4) bool _is_recording()l
extern _native64(0xDF4B952F7D381B95) any unk_0xDF4B952F7D381B95()l
extern _native64(0x4282E08174868BE3) any unk_0x4282E08174868BE3()l
extern _native64(0x33D47E85B476ABCD) bool unk_0x33D47E85B476ABCD(bool p0)l
#pragma endregion //}
#pragma region UNK2 //{
extern _native64(0x7E2BD3EF6C205F09) void unk_0x7E2BD3EF6C205F09(any p0, any p1)l
extern _native64(0x95AB8B5C992C7B58) bool _is_interior_rendering_disabled()l
extern _native64(0x5AD3932DAEB1E5D3) void unk_0x5AD3932DAEB1E5D3()l
extern _native64(0xE058175F8EAFE79A) void unk_0xE058175F8EAFE79A(bool p0)l
extern _native64(0x3353D13F09307691) void _reset_editor_values()l
extern _native64(0x49DA8145672B2725) void _activate_rockstar_editor()l
#pragma endregion //}
#pragma region UNK3 //{
extern _native64(0xC27009422FCCA88D) int _network_shop_get_price(Hash hash, Hash hash2, bool p2)l
extern _native64(0x3C4487461E9B0DCB) any unk_0x3C4487461E9B0DCB()l
extern _native64(0x2B949A1E6AEC8F6A) any unk_0x2B949A1E6AEC8F6A()l
extern _native64(0x85F6C9ABA1DE2BCF) any unk_0x85F6C9ABA1DE2BCF()l
extern _native64(0x357B152EF96C30B6) any unk_0x357B152EF96C30B6()l
extern _native64(0xCF38DAFBB49EDE5E) bool unk_0xCF38DAFBB49EDE5E(any* p0)l
extern _native64(0xE3E5A7C64CA2C6ED) any unk_0xE3E5A7C64CA2C6ED()l
extern _native64(0x0395CB47B022E62C) bool unk_0x0395CB47B022E62C(any* p0)l
extern _native64(0xA135AC892A58FC07) bool _network_shop_start_session(any p0)l
extern _native64(0x72EB7BA9B69BF6AB) any unk_0x72EB7BA9B69BF6AB()l
extern _native64(0x170910093218C8B9) bool unk_0x170910093218C8B9(any* p0)l
extern _native64(0xC13C38E47EA5DF31) bool unk_0xC13C38E47EA5DF31(any* p0)l
extern _native64(0xB24F0944DA203D9E) bool _network_shop_get_transactions_enabled_for_character(int mpChar)l
extern _native64(0x74A0FD0688F1EE45) bool unk_0x74A0FD0688F1EE45(any p0)l
extern _native64(0x2F41D51BA3BCD1F1) bool _network_shop_session_apply_received_data(any p0)l
extern _native64(0x810E8431C0614BF9) bool _network_shop_get_transactions_disabled()l
extern _native64(0x35A1B3E1D1315CFA) bool unk_0x35A1B3E1D1315CFA(bool p0, bool p1)l
extern _native64(0x897433D292B44130) bool unk_0x897433D292B44130(any* p0, any* p1)l
extern _native64(0x279F08B1A4B29B7E) bool _network_shop_basket_start(any* p0, any p1, any p2, any p3)l
extern _native64(0xA65568121DF2EA26) any _network_shop_basket_end()l
extern _native64(0xF30980718C8ED876) any _network_shop_basket_add_item(any* p0, any p1)l
extern _native64(0x27F76CC6C55AD30E) any _network_shop_basket_is_full()l
extern _native64(0xE1A0450ED46A7812) bool _network_shop_basket_apply_server_data(any p0, any* p1)l
extern _native64(0x39BE7CEA8D9CC8E6) bool _network_shop_checkout_start(any p0)l
extern _native64(0x3C5FD37B5499582E) bool _network_shop_begin_service(int* value, any p1, any p2, any p3, any p4, int p5)l
extern _native64(0xE2A99A9B524BEFFF) bool _network_shop_end_service(any p0)l
extern _native64(0x51F1A8E48C3D2F6D) bool unk_0x51F1A8E48C3D2F6D(any p0, bool p1, any p2)l
extern _native64(0x0A6D923DFFC9BD89) any unk_0x0A6D923DFFC9BD89()l
extern _native64(0x112CEF1615A1139F) any _network_shop_delete_set_telemetry_nonce_seed()l
extern _native64(0xD47A2C1BA117471D) bool _network_transfer_bank_to_wallet(int charStatInt, int amount)l
extern _native64(0xC2F7FE5309181C7D) bool _network_transfer_wallet_to_bank(int charStatInt, int amount)l
extern _native64(0x23789E777D14CE44) any unk_0x23789E777D14CE44()l
extern _native64(0x350AA5EBC03D3BD2) any unk_0x350AA5EBC03D3BD2()l
extern _native64(0x498C1E05CE5F7877) any _network_shop_cash_transfer_set_telemetry_nonce_seed()l
extern _native64(0x9507D4271988E1AE) bool _network_shop_set_telemetry_nonce_seed(any p0)l
extern _native64(0xFCA9373EF340AC0A) const char* _get_online_version()l
extern _native64(0xFA336E7F40C0A0D0) void unk_0xFA336E7F40C0A0D0()l
#pragma endregion //}

	
#undef _native64
#pragma clang diagnostic pop
