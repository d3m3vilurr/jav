#ifndef AUDIO_H
#define AUDIO_H

#define AVLS_MAX 0x15

// these functions will retry until they succeed
int get_output(void);
#define N_OUTPUTS_ONBOARD 0x2
#define SPEAKER   0
#define HEADPHONE 1

int get_ob_volume(void);
void set_ob_volume(int vol);

int get_muted(void);
void mute_on(void);

int get_avls(void);
void set_avls(int v);

void disable_avls_timer(void);

int get_speaker_mute(void);
void set_speaker_mute(int v);

#endif
