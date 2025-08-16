package com.example.mapbox_navigation_v3.models

class MapBoxLocation(val name: String = "", private val latitude: Double?, private val longitude: Double?) {
    override fun toString(): String {
        return "{" +
                "  \"latitude\": $latitude," +
                "  \"longitude\": $longitude" +
                "}"
    }

}