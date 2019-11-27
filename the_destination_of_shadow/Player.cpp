﻿#include "Player.h"

Player::Player()
{
	m_hp;
	m_move_speed =4.0f;
	m_save_direction;
	
	xy_coordinate.m_x = 0;
	xy_coordinate.m_y = 780.0f;
	xy_coordinate.m_width = 300.0f;
	xy_coordinate.m_height = 300.0f;

	texture.SetAlpha(255);
	texture.SetTu(0.0f);
	texture.SetTv(0.0f);
	texture.SetTuWidth(1.0f);
	texture.SetTvHeight(1.0f);
	texture.SetTextureNum(PLAYER);

}

VOID Player::Attack()
{
	return VOID();
}

VOID Player::ShadowInstallation()
{
	return VOID();
}

VOID Player::Move()
{

	switch (m_save_direction)
	{
	case RIGHT:
		xy_coordinate.m_x += m_move_speed;
		break;
	case LEFT:
		xy_coordinate.m_x -= m_move_speed;
		break;
	default:
		break;
	}

	switch (m_save_direction)
	{
	case RIGHT:
		texture.SetTuWidth(-1.0f);
		break;
	case LEFT:
		texture.SetTuWidth(1.0f);
		break;
	default:
		break;
	}

}

VOID Player::ShadowBorrow()
{

}
