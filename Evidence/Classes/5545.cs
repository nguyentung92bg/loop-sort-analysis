// Namespace: 
public sealed class LoseLifeVariant : MonitorVariantBase // TypeDefIndex: 5545
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private SceneModule _sceneModule; // 0x38
	[Inject]
	private AdsModule _adsModule; // 0x40
	[Inject]
	private LifeModule _lifeModule; // 0x48
	[Inject]
	private RefillLivesMonitor _refillLivesMonitor; // 0x50
	private VerticalLayoutGroup _panelLayoutGroup; // 0x58

	// Methods

	// RVA: 0x2490FAC Offset: 0x248CFAC VA: 0x2490FAC Slot: 10
	public override void OnActivated() { }

	// RVA: 0x2491174 Offset: 0x248D174 VA: 0x2491174 Slot: 8
	public override void Setup() { }

	// RVA: 0x2491244 Offset: 0x248D244 VA: 0x2491244 Slot: 9
	public override void Render() { }

	// RVA: 0x24913CC Offset: 0x248D3CC VA: 0x24913CC
	private void OnContinueClicked() { }

	[AsyncStateMachine(typeof(LoseLifeVariant.<ApplyActivateMotion>d__10))]
	// RVA: 0x24910E4 Offset: 0x248D0E4 VA: 0x24910E4
	private UniTaskVoid ApplyActivateMotion() { }

	// RVA: 0x2491558 Offset: 0x248D558 VA: 0x2491558
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2491568 Offset: 0x248D568 VA: 0x2491568
	private void <OnContinueClicked>b__9_0() { }

	[CompilerGenerated]
	// RVA: 0x24915B8 Offset: 0x248D5B8 VA: 0x24915B8
	private void <OnContinueClicked>b__9_1() { }

	[CompilerGenerated]
	// RVA: 0x2491608 Offset: 0x248D608 VA: 0x2491608
	private void <OnContinueClicked>b__9_2() { }
}

