/**
 * Tracebox -- A middlebox detection tool
 *
 *  Copyright 2013-2015 by its authors.
 *  Some rights reserved. See LICENSE, AUTHORS.
 */

#ifndef __LUA_IPV6_H_
#define __LUA_IPV6_H_

#include "lua_crafter.hpp"

struct l_ipv6_ref : public l_layer_ref<Crafter::IPv6> {
	l_ipv6_ref (Crafter::IPv6 *i, lua_State *l) : l_layer_ref<Crafter::IPv6>(i, l) {}
	l_ipv6_ref(l_ipv6_ref *r, lua_State *l)
		: l_layer_ref<Crafter::IPv6>(r, l) {}
	template<class T>
	l_ipv6_ref(l_ref<T> *r, Crafter::IPv6 *i, lua_State *l)
		: l_layer_ref<Crafter::IPv6>(r, i, l) {}
	~l_ipv6_ref() {}

	static int l_IPv6(lua_State *l);
	static void register_members(lua_State *l);
	static void register_globals(lua_State *l);
};

#endif
