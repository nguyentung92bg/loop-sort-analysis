// Namespace: 
public sealed class ConnectivityModule : ModuleBase, ITickable // TypeDefIndex: 4883
{
	// Fields
	private const string GoogleProbeUrl = "https://connectivitycheck.gstatic.com/generate_204";
	private const string AppleProbeUrl = "https://captive.apple.com/hotspot-detect.html";
	private const string CloudflareProbeUrl = "https://cp.cloudflare.com/generate_204";
	private static readonly string[] ProbeUrls; // 0x0
	private const int ProbeTimeoutSeconds = 5;
	private const long NetworkAuthenticationRequired = 511;
	private const float IdleCheckInterval = 5;
	private const float ProbeInterval = 60;
	private const float FailedProbeInterval = 3;
	private const int FailuresToGoOffline = 2;
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x10
	private int _failureCount; // 0x18
	private bool _probing; // 0x1C
	private float _nextCheckTime; // 0x20
	private int _lastReachedProbe; // 0x24

	// Properties
	public bool IsOffline { get; }

	// Methods

	// RVA: 0x2531494 Offset: 0x252D494 VA: 0x2531494
	public bool get_IsOffline() { }

	// RVA: 0x2531504 Offset: 0x252D504 VA: 0x2531504
	public bool ShouldBlockLevelStart() { }

	// RVA: 0x2531620 Offset: 0x252D620 VA: 0x2531620 Slot: 4
	public void Tick() { }

	[AsyncStateMachine(typeof(ConnectivityModule.<ProbeAsync>d__19))]
	// RVA: 0x25316F8 Offset: 0x252D6F8 VA: 0x25316F8
	public UniTask<bool> ProbeAsync() { }

	[AsyncStateMachine(typeof(ConnectivityModule.<ReachesAsync>d__20))]
	// RVA: 0x25317F8 Offset: 0x252D7F8 VA: 0x25317F8
	private static UniTask<bool> ReachesAsync(string url) { }

	// RVA: 0x253152C Offset: 0x252D52C VA: 0x253152C
	private bool IsOnlineRequired() { }

	// RVA: 0x25318F4 Offset: 0x252D8F4 VA: 0x25318F4
	public void .ctor() { }

	// RVA: 0x25318FC Offset: 0x252D8FC VA: 0x25318FC
	private static void .cctor() { }
}

