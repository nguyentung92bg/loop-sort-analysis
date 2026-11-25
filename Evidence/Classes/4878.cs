// Namespace: 
public sealed class AudioModule : ModuleBase, IInitializable // TypeDefIndex: 4878
{
	// Fields
	[CompilerGenerated]
	private Sounds <Sounds>k__BackingField; // 0x10
	private GameObject _audioSourceContainer; // 0x18
	private AudioSource _musicSource; // 0x20
	private IDisposable _musicVolumeDisposable; // 0x28
	private bool _audioMute; // 0x30
	private readonly List<AudioSource> _audioSources; // 0x38
	private const int AudioSourcePoolLimit = 30;
	private const float AudioSourceVolume = 0.25;
	private const float MusicSourceVolume = 0.1;

	// Properties
	[Inject]
	public Sounds Sounds { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x25301FC Offset: 0x252C1FC VA: 0x25301FC
	public Sounds get_Sounds() { }

	[CompilerGenerated]
	// RVA: 0x2530204 Offset: 0x252C204 VA: 0x2530204
	private void set_Sounds(Sounds value) { }

	// RVA: 0x253020C Offset: 0x252C20C VA: 0x253020C Slot: 4
	public void Initialize() { }

	// RVA: 0x253043C Offset: 0x252C43C VA: 0x253043C
	public void EnableMusic() { }

	// RVA: 0x2530478 Offset: 0x252C478 VA: 0x2530478
	public void DisableMusic() { }

	// RVA: 0x2530490 Offset: 0x252C490 VA: 0x2530490
	public void SetMusicMute(bool mute) { }

	// RVA: 0x25304AC Offset: 0x252C4AC VA: 0x25304AC
	public void PauseMusic() { }

	// RVA: 0x25304C4 Offset: 0x252C4C4 VA: 0x25304C4
	public void UnPauseMusic() { }

	// RVA: 0x25304DC Offset: 0x252C4DC VA: 0x25304DC
	public void RestartMusic() { }

	// RVA: 0x25304F4 Offset: 0x252C4F4 VA: 0x25304F4
	public void SetAudioMute(bool mute) { }

	// RVA: 0x25306B4 Offset: 0x252C6B4 VA: 0x25306B4
	public void SetMusicVolume(float volume) { }

	// RVA: 0x2530834 Offset: 0x252C834 VA: 0x2530834
	public void ReturnOriginalMusicVolume() { }

	// RVA: 0x2530840 Offset: 0x252C840 VA: 0x2530840
	public void ChangeMusic(AudioClip clip) { }

	// RVA: 0x2530858 Offset: 0x252C858 VA: 0x2530858
	public AudioPlayer GetPlayer() { }

	// RVA: 0x2530974 Offset: 0x252C974 VA: 0x2530974
	private AudioSource GetAvailableSource() { }

	// RVA: 0x2530C10 Offset: 0x252CC10 VA: 0x2530C10
	public void .ctor() { }
}

