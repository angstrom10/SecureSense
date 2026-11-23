#pragma once
// SecureSense S3 hub secrets TEMPLATE.
// 1. Copy this file to "secrets.h" in the SAME sketch folder as the hub .ino.
// 2. Fill in your values. secrets.h is git-ignored; never commit real credentials.

// ---- Wi-Fi (2.4 GHz network only; ESP32 cannot join 5 GHz) ----
// Leave WIFI_SSID empty ("") to run the hub in the old OFFLINE mode:
// fixed ESP-NOW channel 4, no Wi-Fi, no MQTT.
constexpr const char* WIFI_SSID     = "yenuja2";
constexpr const char* WIFI_PASSWORD = "Ganga001";

// ---- MQTT broker ----
// TLS (recommended):   "mqtts://<your-cluster-host>:8883"
//   e.g. EMQX Cloud Serverless: "mqtts://xxxxxxxx.ala.<region>.emqxsl.com:8883"
// Plain, private bench network ONLY (e.g. Mosquitto on your lap#pragma once
// SecureSense S3 hub secrets TEMPLATE.
// 1. Copy this file to "secrets.h" in the SAME sketch folder as the hub .ino.
// 2. Fill in your values. secrets.h is git-ignored; never commit real credentials.

// ---- Wi-Fi (2.4 GHz network only; ESP32 cannot join 5 GHz) ----
// Leave WIFI_SSID empty ("") to run the hub in the old OFFLINE mode:
// fixed ESP-NOW channel 4, no Wi-Fi, no MQTT.
constexpr const char* WIFI_SSID     = "";
constexpr const char* WIFI_PASSWORD = "";

// ---- MQTT broker ----
// TLS (recommended):   "mqtts://<your-cluster-host>:8883"
//   e.g. EMQX Cloud Serverless: "mqtts://xxxxxxxx.ala.<region>.emqxsl.com:8883"
// Plain, private bench network ONLY (e.g. Mosquitto on your laptop/Pi):
//   "mqtt://192.168.1.50:1883"
constexpr const char* MQTT_URI      = "";
// Create a dedicated broker user for the hub. Give it an ACL that allows ONLY:
//   publish   securesense/hub1/hub/#  and  securesense/hub1/node/+/{status,online,event,cmd_result}
//   subscribe securesense/hub1/node/+/cmd
constexpr const char* MQTT_USERNAME = "";
constexpr const char* MQTT_PASSWORD = "";
// All topics start with this. Use a different prefix per hub.
constexpr const char* MQTT_TOPIC_PREFIX = "securesense/hub1";

// ---- Broker CA certificate (required for mqtts://) ----
// Paste the PEM of the root CA that signed your broker's certificate, including the
// BEGIN/END lines. For EMQX Cloud Serverless, download the CA certificate offered
// for your deployment in the EMQX console.
// (Other brokers: Let's Encrypt-based ones use "ISRG Root X1" from letsencrypt.org/certificates.)
// Leave as nullptr only when using plain mqtt://.
constexpr const char* MQTT_CA_CERT = nullptr;
/* Example:
constexpr const char* MQTT_CA_CERT = R"PEM(
-----BEGIN CERTIFICATE-----
...paste the full certificate here...
-----END CERTIFICATE-----
)PEM";
*/top/Pi):
//   "mqtt://192.168.1.50:1883"
constexpr const char* MQTT_URI      = "";
// Create a dedicated broker user for the hub. Give it an ACL that allows ONLY:
//   publish   securesense/hub1/hub/#  and  securesense/hub1/node/+/{status,online,event,cmd_result}
//   subscribe securesense/hub1/node/+/cmd
constexpr const char* MQTT_USERNAME = "";
constexpr const char* MQTT_PASSWORD = "";
// All topics start with this. Use a different prefix per hub.
constexpr const char* MQTT_TOPIC_PREFIX = "securesense/hub1";

// ---- Broker CA certificate (required for mqtts://) ----
// Paste the PEM of the root CA that signed your broker's certificate, including the
// BEGIN/END lines. For EMQX Cloud Serverless, download the CA certificate offered
// for your deployment in the EMQX console.
// (Other brokers: Let's Encrypt-based ones use "ISRG Root X1" from letsencrypt.org/certificates.)
// Leave as nullptr only when using plain mqtt://.
constexpr const char* MQTT_CA_CERT = nullptr;
/* Example:
constexpr const char* MQTT_CA_CERT = R"PEM(
-----BEGIN CERTIFICATE-----
...paste the full certificate here...
-----END CERTIFICATE-----
)PEM";
*/
