// Namespace: 
public sealed class SettingsPageMonitor : MonitorBase // TypeDefIndex: 5451
{
	// Fields
	[Inject]
	private SettingsModule _settingsModule; // 0x98
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xA0
	[Inject]
	private AccountModule _accountModule; // 0xA8
	[Inject]
	private GameMachine _gameMachine; // 0xB0
	private ToggleElement _soundElement; // 0xB8
	private ToggleElement _musicElement; // 0xC0
	private ToggleElement _hapticElement; // 0xC8
	private ToggleElement _notificationElement; // 0xD0
	private ToggleElement _colorBlindElement; // 0xD8
	private StatefulComponent _signOutView; // 0xE0
	private StatefulComponent _authInfoView; // 0xE8
	private StatefulComponent _loadingView; // 0xF0
	private AutoResetUniTaskCompletionSource<bool> _signOutResult; // 0xF8
	private readonly List<AuthType> _authTypes; // 0x100
	private readonly Dictionary<AuthType, bool> _authStatusMap; // 0x108
	private bool _isSignInSuccessful; // 0x110
	private bool _authBusy; // 0x111
	private const string TermsUrl = "https://voodoo.io/terms";

	// Methods

	// RVA: 0x245CC30 Offset: 0x2458C30 VA: 0x245CC30 Slot: 13
	public override void Setup() { }

	// RVA: 0x245D5F4 Offset: 0x24595F4 VA: 0x245D5F4 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x245D4FC Offset: 0x24594FC VA: 0x245D4FC
	private void SetPlatformState() { }

	[AsyncStateMachine(typeof(SettingsPageMonitor.<RefreshAuthElements>d__21))]
	// RVA: 0x245D6E4 Offset: 0x24596E4 VA: 0x245D6E4
	private UniTaskVoid RefreshAuthElements() { }

	[AsyncStateMachine(typeof(SettingsPageMonitor.<SignIn>d__22))]
	// RVA: 0x245D778 Offset: 0x2459778 VA: 0x245D778
	private UniTaskVoid SignIn(AuthType authType) { }

	[AsyncStateMachine(typeof(SettingsPageMonitor.<SignOut>d__23))]
	// RVA: 0x245D818 Offset: 0x2459818 VA: 0x245D818
	private UniTaskVoid SignOut(AuthType authType) { }

	// RVA: 0x245D8BC Offset: 0x24598BC VA: 0x245D8BC
	private bool IsSignedIn(AuthType authType) { }

	// RVA: 0x245D93C Offset: 0x245993C VA: 0x245D93C
	private void SwitchAuthStatus(AuthType authType) { }

	// RVA: 0x245D990 Offset: 0x2459990 VA: 0x245D990
	private void ShowAuthInfo(AuthType authType, StateRole state, string desc) { }

	// RVA: 0x245DA5C Offset: 0x2459A5C VA: 0x245DA5C
	private void OnCloseClicked() { }

	// RVA: 0x245DA7C Offset: 0x2459A7C VA: 0x245DA7C
	private void OnPrivacyClicked() { }

	// RVA: 0x245DA94 Offset: 0x2459A94 VA: 0x245DA94
	private void OnTermsClicked() { }

	// RVA: 0x245DAFC Offset: 0x2459AFC VA: 0x245DAFC
	private void OnSupportClicked() { }

	// RVA: 0x245DBA0 Offset: 0x2459BA0 VA: 0x245DBA0
	private void OnIdClicked() { }

	// RVA: 0x245DC38 Offset: 0x2459C38 VA: 0x245DC38
	private void OnSignOutYesClicked() { }

	// RVA: 0x245DC98 Offset: 0x2459C98 VA: 0x245DC98
	private void OnSignOutNoClicked() { }

	// RVA: 0x245DCF4 Offset: 0x2459CF4 VA: 0x245DCF4
	private void OnAuthInfoContinueClicked() { }

	// RVA: 0x245DD34 Offset: 0x2459D34 VA: 0x245DD34
	private void HandleSignInContinuation() { }

	// RVA: 0x245DDBC Offset: 0x2459DBC VA: 0x245DDBC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x245DE98 Offset: 0x2459E98 VA: 0x245DE98
	private void <Setup>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x245DEA0 Offset: 0x2459EA0 VA: 0x245DEA0
	private void <Setup>b__18_1() { }

	[CompilerGenerated]
	// RVA: 0x245DEA8 Offset: 0x2459EA8 VA: 0x245DEA8
	private void <Setup>b__18_2() { }

	[CompilerGenerated]
	// RVA: 0x245DEB0 Offset: 0x2459EB0 VA: 0x245DEB0
	private void <Setup>b__18_3() { }

	[CompilerGenerated]
	// RVA: 0x245DEB8 Offset: 0x2459EB8 VA: 0x245DEB8
	private void <Setup>b__18_4() { }

	[CompilerGenerated]
	// RVA: 0x245DEC0 Offset: 0x2459EC0 VA: 0x245DEC0
	private void <Setup>b__18_5() { }

	[CompilerGenerated]
	// RVA: 0x245DEC8 Offset: 0x2459EC8 VA: 0x245DEC8
	private void <Setup>b__18_6() { }

	[CompilerGenerated]
	// RVA: 0x245DED0 Offset: 0x2459ED0 VA: 0x245DED0
	private void <Setup>b__18_7(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245DEEC Offset: 0x2459EEC VA: 0x245DEEC
	private void <Setup>b__18_8(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245DF08 Offset: 0x2459F08 VA: 0x245DF08
	private void <Setup>b__18_9(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245DF24 Offset: 0x2459F24 VA: 0x245DF24
	private void <Setup>b__18_10(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245DF40 Offset: 0x2459F40 VA: 0x245DF40
	private void <Setup>b__18_11(bool isActive) { }
}

