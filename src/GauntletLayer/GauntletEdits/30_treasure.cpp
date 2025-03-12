#include "../GauntletLayer.hpp"

using namespace geode::prelude;

void RedesignedGauntletLayer::editTreasureGauntlet() {
    auto director = CCDirector::sharedDirector();
    auto winSize = director->getWinSize();

    editGauntletSingle("Treasure", ccc3(29, 39, 33), ccc3(249, 129, 48), ccc3(136, 39, 0));
    GameManager::get()->loadBackground(42);
    
    m_backgroundSprite->setTexture(CCTextureCache::sharedTextureCache()->textureForKey(GameManager::get()->getBGTexture(42)));

    auto enableParticles = Mod::get()->getSettingValue<bool>("enable-background-particles");
	if (enableParticles) {
        // shine
		auto bgParticleNode1 = CCParticleSystemQuad::create();
        if (bgParticleNode1) {
            CCParticleSystemQuad* bgParticles = GameToolbox::particleFromString("20a-1a1a0.3a15a0a0a0a0a0a0a0a0a0a0a0a0a500a250a0a45a1a0a0.968627a0a0.560784a0a1a0a300a200a0a45a0.647059a0a0.564706a0a0a0a1a0a0.5a0a0.75a0a0a0a0a0a0a0a0a2a1a0a0a0a169a0a0a0a0a0a0a0a0a0a0a0a0a0a0", NULL, false);
            bgParticles->setPosition(ccp(winSize.width / 2, director->getScreenBottom() - 20));
            bgParticles->setContentSize({2.0, 1.0});
            bgParticles->setZOrder(-98);
            this->addChild(bgParticles);
        }
        // aurora
        auto bgParticleNode2 = CCParticleSystemQuad::create();
        if (bgParticleNode2) {
            CCParticleSystemQuad* bgParticles = GameToolbox::particleFromString("30a-1a1a0.3a30a0a0a0a0a300a200a0a0a0a0a0a0a500a1a0a45a0.407843a0a0.376471a0a0a0a0.05a0a500a1a0a45a0.34902a0a0.25098a0a0a0a0.05a0a0.4a0a0.4a0a0a0a0a0a0a0a0a2a1a0a0a0a40a0a0a0a0a0a0a0a0a0a0a0a0a0a0", NULL, false);
            bgParticles->setPosition(ccp(winSize.width / 2, director->getScreenBottom() - 20));
            bgParticles->setContentSize({2.0, 1.0});
            bgParticles->setZOrder(-98);
            this->addChild(bgParticles);
        }
    }
}