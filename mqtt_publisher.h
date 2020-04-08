#ifndef MQTT_PUBLISHER_T
#define MQTT_PUBLISHER_T

void mqtt_publisher_init(void);

#ifndef MQTT_TOPIC_BASE
#define MQTT_TOPIC_BASE "KTH/avr-rss2"
#endif

#ifndef MQTTSN_GATEWAY_HOST
//#define MQTTSN_GATEWAY_HOST "64:ff9b::c010:7dea"
#define MQTTSN_GATEWAY_HOST "64:ff9b::c0a8:0196"
#endif /* MQTTSN_GATEWAY_HOST */

#ifndef MQTTSN_GATEWAY_PORT
//#define MQTTSN_GATEWAY_PORT 1884
#define MQTTSN_GATEWAY_PORT 10000
#endif /* MQTTSN_GATEWAY_PORT */

#ifndef MQTTSN_BUFFER_SIZE
#define MQTTSN_BUFFER_SIZE (EMCUTE_BUFSIZE-16)
#endif  /* MQTTSN_BUFFER_SIZE */

#ifndef MQTTSN_PUBLISH_INTERVAL
#define MQTTSN_PUBLISH_INTERVAL 30
#endif /* MQTTSN_PUBLISH_INTERVAL */
#endif /* MQTT_PUBLISHER_T */

int get_nodeid(char *buf, size_t size);

size_t makereport(uint8_t *buffer, size_t len);
