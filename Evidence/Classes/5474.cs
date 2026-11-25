// Namespace: 
public sealed class VideoRewardsScene : MonoBehaviour // TypeDefIndex: 5474
{
	// Fields
	private const float PlayDuration = 2.6;
	private const float CoinDuration = 1.8;
	private const float RewardDuration = 1.8;
	private const float AppearDuration = 0.3;
	private const float DisappearDuration = 0.15;
	[Header("TV")]
	[SerializeField]
	private RectTransform ScreenPlay; // 0x20
	[SerializeField]
	private RectTransform ScreenCoin; // 0x28
	[SerializeField]
	private TMP_Text ScreenReward; // 0x30
	[SerializeField]
	private Graphic ScreenFlash; // 0x38
	[SerializeField]
	private GameObject ScreenSleep; // 0x40
	[Header("Truck")]
	[SerializeField]
	private RectTransform Truck; // 0x48
	[Header("Gifts")]
	[SerializeField]
	private RectTransform[] GiftBoxes; // 0x50
	[SerializeField]
	private RectTransform GiftLid; // 0x58
	[SerializeField]
	private Graphic GiftGlow; // 0x60
	[Header("Intro")]
	[SerializeField]
	private RectTransform Milestones; // 0x68
	[SerializeField]
	private RectTransform WatchButton; // 0x70
	[Header("Sleep")]
	[SerializeField]
	private ScaleEffect TimerPulse; // 0x78
	private bool _sleeping; // 0x80
	private float _screenTime; // 0x84
	private string _nextRewardText; // 0x88
	private MotionHandle _truckJump; // 0x90
	private Vector2 _lidPosition; // 0x9C
	private Vector2[] _giftPositions; // 0xA8
	private Vector2 _milestonesPosition; // 0xB0

	// Methods

	// RVA: 0x24694BC Offset: 0x24654BC VA: 0x24694BC
	private void Awake() { }

	// RVA: 0x246962C Offset: 0x246562C VA: 0x246962C
	private void Start() { }

	// RVA: 0x2469718 Offset: 0x2465718 VA: 0x2469718
	public void SetNextReward(int amount) { }

	// RVA: 0x24697A0 Offset: 0x24657A0 VA: 0x24697A0
	public void SetSleeping(bool sleeping) { }

	// RVA: 0x2469954 Offset: 0x2465954 VA: 0x2469954
	private void Update() { }

	// RVA: 0x2469B04 Offset: 0x2465B04 VA: 0x2469B04
	private static float Appear(float t, float start, float duration) { }

	// RVA: 0x2469858 Offset: 0x2465858 VA: 0x2469858
	private void HideScreenItems() { }

	// RVA: 0x2469B8C Offset: 0x2465B8C VA: 0x2469B8C
	public void PlayIntro(IReadOnlyList<StatefulComponent> milestoneViews) { }

	[AsyncStateMachine(typeof(VideoRewardsScene.<PlayReward>d__32))]
	// RVA: 0x246A160 Offset: 0x2466160 VA: 0x246A160
	public UniTask PlayReward(CancellationToken cancellationToken) { }

	// RVA: 0x246A218 Offset: 0x2466218 VA: 0x246A218
	private void JumpTruck() { }

	[AsyncStateMachine(typeof(VideoRewardsScene.<GiftLoop>d__34))]
	// RVA: 0x246966C Offset: 0x246566C VA: 0x246966C
	private UniTaskVoid GiftLoop(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(VideoRewardsScene.<PeekLid>d__35))]
	// RVA: 0x246A4F4 Offset: 0x24664F4 VA: 0x246A4F4
	private UniTask PeekLid(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(VideoRewardsScene.<HopGift>d__36))]
	// RVA: 0x246A5A8 Offset: 0x24665A8 VA: 0x246A5A8
	private UniTask HopGift(int index, CancellationToken cancellationToken) { }

	// RVA: 0x24695E4 Offset: 0x24655E4 VA: 0x24695E4
	private static void SetAlpha(Graphic graphic, float alpha) { }

	// RVA: 0x246A66C Offset: 0x246666C VA: 0x246A66C
	public void .ctor() { }
}

