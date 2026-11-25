// Namespace: 
public struct AudioPlayer // TypeDefIndex: 4879
{
	// Fields
	private AudioSource _audioSource; // 0x0
	private bool _mute; // 0x8
	private float _cooldownTime; // 0xC
	private float _pitchIncreaseCooldownTime; // 0x10
	private float _increasePitchAmount; // 0x14
	private float _maxPitch; // 0x18
	private int _skipCount; // 0x1C
	private static readonly Dictionary<int, float> LastPlayTimestampByClipInstanceID; // 0x0
	private static readonly Dictionary<int, int> IncreasePitchCountByClipInstanceID; // 0x8
	private static readonly Dictionary<int, int> SkipCountByClipInstanceID; // 0x10

	// Methods

	// RVA: 0x2530BC8 Offset: 0x252CBC8 VA: 0x2530BC8
	public static AudioPlayer CreatePlayer(AudioSource audioSource, bool mute = False) { }

	// RVA: 0x2530C98 Offset: 0x252CC98 VA: 0x2530C98
	public void Play(AudioClip clip) { }

	// RVA: 0x2531048 Offset: 0x252D048 VA: 0x2531048
	public AudioPlayer WithVolume(float volume) { }

	// RVA: 0x25310E8 Offset: 0x252D0E8 VA: 0x25310E8
	public AudioPlayer WithVolumeScale(float volumeScale) { }

	// RVA: 0x2531198 Offset: 0x252D198 VA: 0x2531198
	public AudioPlayer WithPitch(float pitch) { }

	// RVA: 0x2531238 Offset: 0x252D238 VA: 0x2531238
	public AudioPlayer WithPitchRange(float pitchRange) { }

	// RVA: 0x25312F8 Offset: 0x252D2F8 VA: 0x25312F8
	public AudioPlayer WithPlayProbability(float playProbability) { }

	// RVA: 0x253133C Offset: 0x252D33C VA: 0x253133C
	public AudioPlayer WithCooldown(float cooldownTime) { }

	// RVA: 0x253134C Offset: 0x252D34C VA: 0x253134C
	public AudioPlayer WithPitchIncrease(float increaseAmount, float increaseCooldownTime) { }

	// RVA: 0x253135C Offset: 0x252D35C VA: 0x253135C
	public AudioPlayer WithMaxPitch(float maxPitch) { }

	// RVA: 0x253136C Offset: 0x252D36C VA: 0x253136C
	public AudioPlayer WithSkipCount(int skipCount) { }

	// RVA: 0x253137C Offset: 0x252D37C VA: 0x253137C
	private static void .cctor() { }
}

