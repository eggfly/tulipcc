/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "esp_check.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_interface.h"

static const char *TAG = "lcd_panel";

esp_err_t esp_lcd_panel_reset(esp_lcd_panel_handle_t panel)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->reset(panel);
}

esp_err_t esp_lcd_panel_init(esp_lcd_panel_handle_t panel)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->init(panel);
}

esp_err_t esp_lcd_panel_del(esp_lcd_panel_handle_t panel)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->del(panel);
}

esp_err_t esp_lcd_panel_remount(esp_lcd_panel_handle_t panel, size_t offset) {
    return panel->remount(panel, offset);    
}


uint8_t ** esp_lcd_panel_get_fb(esp_lcd_panel_handle_t panel) {
    return panel->get_fb(panel);    
}

int * esp_lcd_panel_get_bounce_pos(esp_lcd_panel_handle_t panel) {
    return panel->get_bounce_pos(panel);    
}

esp_err_t esp_lcd_panel_draw_bitmap(esp_lcd_panel_handle_t panel, int x_start, int y_start, int x_end, int y_end, const void *color_data)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->draw_bitmap(panel, x_start, y_start, x_end, y_end, color_data);
}

esp_err_t esp_lcd_panel_mirror(esp_lcd_panel_handle_t panel, bool mirror_x, bool mirror_y)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->mirror(panel, mirror_x, mirror_y);
}

esp_err_t esp_lcd_panel_swap_xy(esp_lcd_panel_handle_t panel, bool swap_axes)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->swap_xy(panel, swap_axes);
}

esp_err_t esp_lcd_panel_set_gap(esp_lcd_panel_handle_t panel, int x_gap, int y_gap)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->set_gap(panel, x_gap, y_gap);
}

esp_err_t esp_lcd_panel_invert_color(esp_lcd_panel_handle_t panel, bool invert_color_data)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->invert_color(panel, invert_color_data);
}

esp_err_t esp_lcd_panel_disp_off(esp_lcd_panel_handle_t panel, bool off)
{
    ESP_RETURN_ON_FALSE(panel, ESP_ERR_INVALID_ARG, TAG, "invalid panel handle");
    return panel->disp_off(panel, off);
}
